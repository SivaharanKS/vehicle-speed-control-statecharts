/********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: _SysVehicule
//!	Generated Date	: Tue, 7, Oct 2025  
	File Path	: CodesGeneres\ModeAnimation\_SysVehicule.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## dependency _SysVehicule
#include "_SysVehicule.h"
//#[ ignore
#define _MonPkg__SysVehicule__SysVehicule_SERIALIZE OM_NO_OP

#define _MonPkg__SysVehicule_accelerer_SERIALIZE aomsmethod->addAttribute("accelPedal", x2String(accelPedal));

#define _MonPkg__SysVehicule_arreter_SERIALIZE OM_NO_OP

#define _MonPkg__SysVehicule_calcul_vitesse_distance_SERIALIZE aomsmethod->addAttribute("throttle", x2String(throttle));

#define _MonPkg__SysVehicule_demarrer_SERIALIZE OM_NO_OP

#define _MonPkg__SysVehicule_freiner_SERIALIZE aomsmethod->addAttribute("brakePedal", x2String(brakePedal));

#define _MonPkg__SysVehicule_init_SERIALIZE OM_NO_OP

#define _MonPkg__SysVehicule_setMajor_SERIALIZE OM_NO_OP

#define _MonPkg__SysVehicule_setMinus_SERIALIZE OM_NO_OP

#define OMAnim__MonPkg__SysVehicule_setAccelPedal_double_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_accelPedal)

#define OMAnim__MonPkg__SysVehicule_setAccelPedal_double_SERIALIZE_RET_VAL

#define OMAnim__MonPkg__SysVehicule_setAlpha_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_alpha)

#define OMAnim__MonPkg__SysVehicule_setAlpha_int_SERIALIZE_RET_VAL

#define OMAnim__MonPkg__SysVehicule_setBrakePedal_double_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_brakePedal)

#define OMAnim__MonPkg__SysVehicule_setBrakePedal_double_SERIALIZE_RET_VAL

#define OMAnim__MonPkg__SysVehicule_setKey_bool_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_key)

#define OMAnim__MonPkg__SysVehicule_setKey_bool_SERIALIZE_RET_VAL

#define OMAnim__MonPkg__SysVehicule_setThrottle_double_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_throttle)

#define OMAnim__MonPkg__SysVehicule_setThrottle_double_SERIALIZE_RET_VAL
//#]

//## package _MonPkg

//## class _SysVehicule
double _SysVehicule::accelerer(double accelPedal) {
    NOTIFY_OPERATION(accelerer, accelerer(double), 1, _MonPkg__SysVehicule_accelerer_SERIALIZE);
    //#[ operation accelerer(double)
    if(throttle<(MAX_THROTTLE-(accelPedal/3)))
        		throttle+=accelPedal/3;	
        	else 
        		 throttle=MAX_THROTTLE;   
        		 
    return throttle;
    //#]
}

void _SysVehicule::arreter() {
    NOTIFY_OPERATION(arreter, arreter(), 0, _MonPkg__SysVehicule_arreter_SERIALIZE);
    //#[ operation arreter()
    //stop engine
    ignition=false;
    //#]
}

void _SysVehicule::demarrer() {
    NOTIFY_OPERATION(demarrer, demarrer(), 0, _MonPkg__SysVehicule_demarrer_SERIALIZE);
    //#[ operation demarrer()
    ignition=true;
    
    //#]
}

void _SysVehicule::calcul_vitesse_distance(double& throttle) {
    NOTIFY_OPERATION(calcul_vitesse_distance, calcul_vitesse_distance(double&), 1, _MonPkg__SysVehicule_calcul_vitesse_distance_SERIALIZE);
    //#[ operation calcul_vitesse_distance(double)
    
    fspeed=fspeed-1.5*sin(alpha*3.14/180)+((throttle-fspeed/airResistance))/5;
    
    if(fspeed>MAX_SPEED) fspeed=MAX_SPEED;
    if(fspeed<0) fspeed=0;
    
    fdist=fdist+(fspeed/36.0)/5.0;
    
    speed=(int)fspeed;
    
    distance=(int)fdist;
    
    if(throttle>0.0) throttle-=(0.5/10.0);  
    
    
    
    //#]
}

double _SysVehicule::freiner(double brakePedal) {
    NOTIFY_OPERATION(freiner, freiner(double), 1, _MonPkg__SysVehicule_freiner_SERIALIZE);
    //#[ operation freiner(double)
     //if(throttle>(2.0*brakePedal))
     if(throttle>0.0)  
      {
        	throttle -= (brakePedal/2);
      }
     else throttle = 0.0;       
      
     return throttle;
    //#]
}

void _SysVehicule::init() {
    NOTIFY_OPERATION(init, init(), 0, _MonPkg__SysVehicule_init_SERIALIZE);
    //#[ operation init()
    fdist=0.0;
    fspeed=0.0; 
    throttle=0.0;   
    speed=0;
    airResistance=MAX_SPEED/MAX_THROTTLE;
    brakePedal=0;   
    accelPedal=0;     
    distance=0;
    //#]
}

_SysVehicule::_SysVehicule(IOxfActive* theActiveContext) : MAX_BRAKE(10), MAX_SPEED(120), MAX_THROTTLE(10.0), _simu(true), accelPedal(0.0), airResistance(0.0), alpha(0), brakePedal(0.0), distance(0), error(0.0), fdist(0.0), flag(false), fspeed(0.0), ignition(false), key(false), speed(0), steady(0.0), throttle(0.0), vitesseConsigne(speed + error) {
    NOTIFY_ACTIVE_CONSTRUCTOR(_SysVehicule, _SysVehicule(), 0, _MonPkg__SysVehicule__SysVehicule_SERIALIZE);
    setActiveContext(this, true);
    initStatechart();
}

_SysVehicule::~_SysVehicule() {
    NOTIFY_DESTRUCTOR(~_SysVehicule, true);
    cancelTimeouts();
}

int _SysVehicule::getMAX_BRAKE() {
    return MAX_BRAKE;
}

void _SysVehicule::setMAX_BRAKE(int p_MAX_BRAKE) {
    MAX_BRAKE = p_MAX_BRAKE;
}

int _SysVehicule::getMAX_SPEED() {
    return MAX_SPEED;
}

void _SysVehicule::setMAX_SPEED(int p_MAX_SPEED) {
    MAX_SPEED = p_MAX_SPEED;
}

double _SysVehicule::getMAX_THROTTLE() {
    return MAX_THROTTLE;
}

void _SysVehicule::setMAX_THROTTLE(double p_MAX_THROTTLE) {
    MAX_THROTTLE = p_MAX_THROTTLE;
}

bool _SysVehicule::get_simu() {
    return _simu;
}

void _SysVehicule::set_simu(bool p__simu) {
    _simu = p__simu;
}

double _SysVehicule::getAccelPedal() {
    return accelPedal;
}

void _SysVehicule::setAccelPedal(double p_accelPedal) {
    accelPedal = p_accelPedal;
    NOTIFY_SET_OPERATION;
}

double _SysVehicule::getAirResistance() {
    return airResistance;
}

void _SysVehicule::setAirResistance(double p_airResistance) {
    airResistance = p_airResistance;
}

int _SysVehicule::getAlpha() {
    return alpha;
}

void _SysVehicule::setAlpha(int p_alpha) {
    alpha = p_alpha;
    NOTIFY_SET_OPERATION;
}

double _SysVehicule::getBrakePedal() {
    return brakePedal;
}

void _SysVehicule::setBrakePedal(double p_brakePedal) {
    brakePedal = p_brakePedal;
    NOTIFY_SET_OPERATION;
}

int _SysVehicule::getDistance() {
    return distance;
}

void _SysVehicule::setDistance(int p_distance) {
    distance = p_distance;
    NOTIFY_SET_OPERATION;
}

double _SysVehicule::getError() {
    return error;
}

void _SysVehicule::setError(double p_error) {
    error = p_error;
}

double _SysVehicule::getFdist() {
    return fdist;
}

void _SysVehicule::setFdist(double p_fdist) {
    fdist = p_fdist;
}

double _SysVehicule::getFspeed() {
    return fspeed;
}

void _SysVehicule::setFspeed(double p_fspeed) {
    fspeed = p_fspeed;
}

bool _SysVehicule::getIgnition() {
    return ignition;
}

int _SysVehicule::getSpeed() {
    return speed;
}

double _SysVehicule::getSteady() {
    return steady;
}

void _SysVehicule::setSteady(double p_steady) {
    steady = p_steady;
}

double _SysVehicule::getThrottle() {
    return throttle;
}

int _SysVehicule::getVitesseConsigne() {
    return vitesseConsigne;
}

void _SysVehicule::setVitesseConsigne(int p_vitesseConsigne) {
    vitesseConsigne = p_vitesseConsigne;
    NOTIFY_SET_OPERATION;
}

bool _SysVehicule::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void _SysVehicule::setMajor() {
    NOTIFY_OPERATION(setMajor, setMajor(), 0, _MonPkg__SysVehicule_setMajor_SERIALIZE);
    //#[ operation setMajor()
    //#]
}

void _SysVehicule::setMinus() {
    NOTIFY_OPERATION(setMinus, setMinus(), 0, _MonPkg__SysVehicule_setMinus_SERIALIZE);
    //#[ operation setMinus()
    //#]
}

bool _SysVehicule::getFlag() {
    return flag;
}

void _SysVehicule::setFlag(bool p_flag) {
    flag = p_flag;
}

void _SysVehicule::setIgnition(bool p_ignition) {
    ignition = p_ignition;
    NOTIFY_SET_OPERATION;
}

bool _SysVehicule::getKey() {
    return key;
}

void _SysVehicule::setKey(bool p_key) {
    key = p_key;
    NOTIFY_SET_OPERATION;
}

void _SysVehicule::setSpeed(int p_speed) {
    speed = p_speed;
    NOTIFY_SET_OPERATION;
}

void _SysVehicule::setThrottle(double p_throttle) {
    throttle = p_throttle;
    NOTIFY_SET_OPERATION;
}

void _SysVehicule::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_9_subState = OMNonState;
    state_9_active = OMNonState;
    state_9_timeout = NULL;
    state_2_subState = OMNonState;
    state_2_active = OMNonState;
    state_2_timeout = NULL;
    state_1_subState = OMNonState;
    state_1_active = OMNonState;
    state_1_timeout = NULL;
    Regulateur_subState = OMNonState;
}

void _SysVehicule::cancelTimeouts() {
    cancel(state_9_timeout);
    cancel(state_2_timeout);
    cancel(state_1_timeout);
}

bool _SysVehicule::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_9_timeout == arg)
        {
            state_9_timeout = NULL;
            res = true;
        }
    if(state_2_timeout == arg)
        {
            state_2_timeout = NULL;
            res = true;
        }
    if(state_1_timeout == arg)
        {
            state_1_timeout = NULL;
            res = true;
        }
    return res;
}

void _SysVehicule::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        //#[ transition 0 
        init();
        //#]
        NOTIFY_STATE_ENTERED("ROOT.state_4");
        pushNullTransition();
        rootState_subState = state_4;
        rootState_active = state_4;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus _SysVehicule::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State state_0
        case state_0:
        {
            res = state_0_processEvent();
        }
        break;
        // State state_4
        case state_4:
        {
            res = state_4_handleEvent();
        }
        break;
        // State consigne
        case consigne:
        {
            res = consigne_handleEvent();
        }
        break;
        // State Major
        case Major:
        {
            res = Major_handleEvent();
        }
        break;
        // State Minus
        case Minus:
        {
            res = Minus_handleEvent();
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus _SysVehicule::state_4TakeNull() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("11");
    popNullTransition();
    NOTIFY_STATE_EXITED("ROOT.state_4");
    state_0_entDef();
    NOTIFY_TRANSITION_TERMINATED("11");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus _SysVehicule::state_4_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            res = state_4TakeNull();
        }
    
    return res;
}

void _SysVehicule::state_0_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_0");
    rootState_subState = state_0;
    rootState_active = state_0;
    state_1_entDef();
    state_2_entDef();
    state_9_entDef();
}

void _SysVehicule::state_0_exit() {
    switch (state_1_subState) {
        // State motorOn
        case motorOn:
        {
            popNullTransition();
            cancel(state_1_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_1.motorOn");
        }
        break;
        // State motorOff
        case motorOff:
        {
            popNullTransition();
            cancel(state_1_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_1.motorOff");
        }
        break;
        default:
            break;
    }
    state_1_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.state_0.state_1");
    state_2_exit();
    switch (state_9_subState) {
        // State Accelerartion
        case Accelerartion:
        {
            popNullTransition();
            cancel(state_9_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_9.Accelerartion");
        }
        break;
        // State Neutre
        case Neutre:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_9.Neutre");
        }
        break;
        // State Freint
        case Freint:
        {
            popNullTransition();
            cancel(state_9_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_9.Freint");
        }
        break;
        default:
            break;
    }
    state_9_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.state_0.state_9");
    
    NOTIFY_STATE_EXITED("ROOT.state_0");
}

IOxfReactive::TakeEventStatus _SysVehicule::state_0_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_1
    if(state_1_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_0))
                {
                    return res;
                }
        }
    // State state_2
    if(state_2_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_0))
                {
                    return res;
                }
        }
    // State state_9
    if(state_9_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_0))
                {
                    return res;
                }
        }
    if(res == eventNotConsumed)
        {
            res = state_0_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus _SysVehicule::state_0_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(regOn__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("13");
            state_0_exit();
            Regulateur_entDef();
            NOTIFY_TRANSITION_TERMINATED("13");
            res = eventConsumed;
        }
    
    return res;
}

void _SysVehicule::state_9_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_9");
    NOTIFY_TRANSITION_STARTED("4");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_9.Neutre");
    pushNullTransition();
    state_9_subState = Neutre;
    state_9_active = Neutre;
    NOTIFY_TRANSITION_TERMINATED("4");
}

IOxfReactive::TakeEventStatus _SysVehicule::state_9_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_9_active) {
        // State Accelerartion
        case Accelerartion:
        {
            res = Accelerartion_handleEvent();
        }
        break;
        // State Neutre
        case Neutre:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 5 
                    if(accelPedal>0.2 && ignition==true)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_9.Neutre");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_9.Accelerartion");
                            pushNullTransition();
                            state_9_subState = Accelerartion;
                            state_9_active = Accelerartion;
                            //#[ state state_0.state_9.Accelerartion.(Entry) 
                            accelerer(accelPedal);
                            //#]
                            state_9_timeout = scheduleTimeout(50, "ROOT.state_0.state_9.Accelerartion");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 8 
                            if(brakePedal>0.2)
                                {
                                    NOTIFY_TRANSITION_STARTED("8");
                                    popNullTransition();
                                    NOTIFY_STATE_EXITED("ROOT.state_0.state_9.Neutre");
                                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_9.Freint");
                                    pushNullTransition();
                                    state_9_subState = Freint;
                                    state_9_active = Freint;
                                    //#[ state state_0.state_9.Freint.(Entry) 
                                    freiner(brakePedal);
                                    //#]
                                    state_9_timeout = scheduleTimeout(200, "ROOT.state_0.state_9.Freint");
                                    NOTIFY_TRANSITION_TERMINATED("8");
                                    res = eventConsumed;
                                }
                        }
                }
            
            
        }
        break;
        // State Freint
        case Freint:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_9_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("9");
                            popNullTransition();
                            cancel(state_9_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_9.Freint");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_9.Freint");
                            pushNullTransition();
                            state_9_subState = Freint;
                            state_9_active = Freint;
                            //#[ state state_0.state_9.Freint.(Entry) 
                            freiner(brakePedal);
                            //#]
                            state_9_timeout = scheduleTimeout(200, "ROOT.state_0.state_9.Freint");
                            NOTIFY_TRANSITION_TERMINATED("9");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 7 
                    if(brakePedal<0.2)
                        {
                            NOTIFY_TRANSITION_STARTED("7");
                            popNullTransition();
                            cancel(state_9_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_9.Freint");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_9.Neutre");
                            pushNullTransition();
                            state_9_subState = Neutre;
                            state_9_active = Neutre;
                            NOTIFY_TRANSITION_TERMINATED("7");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus _SysVehicule::Accelerartion_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == state_9_timeout)
                {
                    //## transition 3 
                    if(IS_IN(motorOn))
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            popNullTransition();
                            cancel(state_9_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_9.Accelerartion");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_9.Accelerartion");
                            pushNullTransition();
                            state_9_subState = Accelerartion;
                            state_9_active = Accelerartion;
                            //#[ state state_0.state_9.Accelerartion.(Entry) 
                            accelerer(accelPedal);
                            //#]
                            state_9_timeout = scheduleTimeout(50, "ROOT.state_0.state_9.Accelerartion");
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 6 
            if(accelPedal<0.2 || ignition==false )
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    cancel(state_9_timeout);
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_9.Accelerartion");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_9.Neutre");
                    pushNullTransition();
                    state_9_subState = Neutre;
                    state_9_active = Neutre;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            else
                {
                    //## transition 10 
                    if(brakePedal>0.2)
                        {
                            NOTIFY_TRANSITION_STARTED("10");
                            popNullTransition();
                            cancel(state_9_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_9.Accelerartion");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_9.Freint");
                            pushNullTransition();
                            state_9_subState = Freint;
                            state_9_active = Freint;
                            //#[ state state_0.state_9.Freint.(Entry) 
                            freiner(brakePedal);
                            //#]
                            state_9_timeout = scheduleTimeout(200, "ROOT.state_0.state_9.Freint");
                            NOTIFY_TRANSITION_TERMINATED("10");
                            res = eventConsumed;
                        }
                }
        }
    
    
    return res;
}

void _SysVehicule::state_2_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_2");
    NOTIFY_TRANSITION_STARTED("2");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_2.Calcul_Vitesse_Distance");
    state_2_subState = Calcul_Vitesse_Distance;
    state_2_active = Calcul_Vitesse_Distance;
    state_2_timeout = scheduleTimeout(50, "ROOT.state_0.state_2.Calcul_Vitesse_Distance");
    NOTIFY_TRANSITION_TERMINATED("2");
}

void _SysVehicule::state_2_exit() {
    // State Calcul_Vitesse_Distance
    if(state_2_subState == Calcul_Vitesse_Distance)
        {
            cancel(state_2_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_2.Calcul_Vitesse_Distance");
        }
    state_2_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_0.state_2");
}

IOxfReactive::TakeEventStatus _SysVehicule::state_2_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State Calcul_Vitesse_Distance
    if(state_2_active == Calcul_Vitesse_Distance)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_2_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            cancel(state_2_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_2.Calcul_Vitesse_Distance");
                            //#[ transition 1 
                            calcul_vitesse_distance(throttle);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_2.Calcul_Vitesse_Distance");
                            state_2_subState = Calcul_Vitesse_Distance;
                            state_2_active = Calcul_Vitesse_Distance;
                            state_2_timeout = scheduleTimeout(50, "ROOT.state_0.state_2.Calcul_Vitesse_Distance");
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

void _SysVehicule::state_1_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_1");
    NOTIFY_TRANSITION_STARTED("16");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.motorOff");
    pushNullTransition();
    state_1_subState = motorOff;
    state_1_active = motorOff;
    //#[ state state_0.state_1.motorOff.(Entry) 
    arreter();
    //#]
    state_1_timeout = scheduleTimeout(50, "ROOT.state_0.state_1.motorOff");
    NOTIFY_TRANSITION_TERMINATED("16");
}

IOxfReactive::TakeEventStatus _SysVehicule::state_1_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_1_active) {
        // State motorOn
        case motorOn:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_1_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("18");
                            popNullTransition();
                            cancel(state_1_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_1.motorOn");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.motorOn");
                            pushNullTransition();
                            state_1_subState = motorOn;
                            state_1_active = motorOn;
                            //#[ state state_0.state_1.motorOn.(Entry) 
                            demarrer();
                            //#]
                            state_1_timeout = scheduleTimeout(50, "ROOT.state_0.state_1.motorOn");
                            NOTIFY_TRANSITION_TERMINATED("18");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 14 
                    if(key == false)
                        {
                            NOTIFY_TRANSITION_STARTED("14");
                            popNullTransition();
                            cancel(state_1_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_1.motorOn");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.motorOff");
                            pushNullTransition();
                            state_1_subState = motorOff;
                            state_1_active = motorOff;
                            //#[ state state_0.state_1.motorOff.(Entry) 
                            arreter();
                            //#]
                            state_1_timeout = scheduleTimeout(50, "ROOT.state_0.state_1.motorOff");
                            NOTIFY_TRANSITION_TERMINATED("14");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State motorOff
        case motorOff:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_1_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("17");
                            popNullTransition();
                            cancel(state_1_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_1.motorOff");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.motorOff");
                            pushNullTransition();
                            state_1_subState = motorOff;
                            state_1_active = motorOff;
                            //#[ state state_0.state_1.motorOff.(Entry) 
                            arreter();
                            //#]
                            state_1_timeout = scheduleTimeout(50, "ROOT.state_0.state_1.motorOff");
                            NOTIFY_TRANSITION_TERMINATED("17");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 15 
                    if(key == true)
                        {
                            NOTIFY_TRANSITION_STARTED("15");
                            popNullTransition();
                            cancel(state_1_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_1.motorOff");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.motorOn");
                            pushNullTransition();
                            state_1_subState = motorOn;
                            state_1_active = motorOn;
                            //#[ state state_0.state_1.motorOn.(Entry) 
                            demarrer();
                            //#]
                            state_1_timeout = scheduleTimeout(50, "ROOT.state_0.state_1.motorOn");
                            NOTIFY_TRANSITION_TERMINATED("15");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void _SysVehicule::Regulateur_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.Regulateur");
    rootState_subState = Regulateur;
    NOTIFY_TRANSITION_STARTED("19");
    NOTIFY_STATE_ENTERED("ROOT.Regulateur.consigne");
    Regulateur_subState = consigne;
    rootState_active = consigne;
    //#[ state Regulateur.consigne.(Entry) 
    flag = false;
    //#]
    NOTIFY_TRANSITION_TERMINATED("19");
}

IOxfReactive::TakeEventStatus _SysVehicule::RegulateurTakeregOff() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    NOTIFY_TRANSITION_STARTED("12");
    switch (Regulateur_subState) {
        // State consigne
        case consigne:
        {
            NOTIFY_STATE_EXITED("ROOT.Regulateur.consigne");
        }
        break;
        // State Major
        case Major:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Regulateur.Major");
        }
        break;
        // State Minus
        case Minus:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Regulateur.Minus");
        }
        break;
        default:
            break;
    }
    Regulateur_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.Regulateur");
    state_0_entDef();
    NOTIFY_TRANSITION_TERMINATED("12");
    res = eventConsumed;
    return res;
}

IOxfReactive::TakeEventStatus _SysVehicule::Regulateur_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(regOff__MonPkg_id))
        {
            res = RegulateurTakeregOff();
        }
    
    return res;
}

IOxfReactive::TakeEventStatus _SysVehicule::Minus_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 22 
            if(flag==true)
                {
                    NOTIFY_TRANSITION_STARTED("22");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Regulateur.Minus");
                    NOTIFY_STATE_ENTERED("ROOT.Regulateur.consigne");
                    Regulateur_subState = consigne;
                    rootState_active = consigne;
                    //#[ state Regulateur.consigne.(Entry) 
                    flag = false;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("22");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = Regulateur_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus _SysVehicule::Major_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 23 
            if(flag==true)
                {
                    NOTIFY_TRANSITION_STARTED("23");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Regulateur.Major");
                    NOTIFY_STATE_ENTERED("ROOT.Regulateur.consigne");
                    Regulateur_subState = consigne;
                    rootState_active = consigne;
                    //#[ state Regulateur.consigne.(Entry) 
                    flag = false;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("23");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = Regulateur_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus _SysVehicule::consigne_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(setMin__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("20");
            NOTIFY_STATE_EXITED("ROOT.Regulateur.consigne");
            NOTIFY_STATE_ENTERED("ROOT.Regulateur.Minus");
            pushNullTransition();
            Regulateur_subState = Minus;
            rootState_active = Minus;
            //#[ state Regulateur.Minus.(Entry) 
            vitesseConsigne = vitesseConsigne -1;
            flag = true;
            //#]
            NOTIFY_TRANSITION_TERMINATED("20");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(setMaj__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("21");
            NOTIFY_STATE_EXITED("ROOT.Regulateur.consigne");
            NOTIFY_STATE_ENTERED("ROOT.Regulateur.Major");
            pushNullTransition();
            Regulateur_subState = Major;
            rootState_active = Major;
            //#[ state Regulateur.Major.(Entry) 
            vitesseConsigne = vitesseConsigne +1;
            flag = true;
            //#]
            NOTIFY_TRANSITION_TERMINATED("21");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = Regulateur_handleEvent();
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimated_SysVehicule::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("fspeed", x2String(myReal->fspeed));
    aomsAttributes->addAttribute("fdist", x2String(myReal->fdist));
    aomsAttributes->addAttribute("airResistance", x2String(myReal->airResistance));
    aomsAttributes->addAttribute("speed", x2String(myReal->speed));
    aomsAttributes->addAttribute("brakePedal", x2String(myReal->brakePedal));
    aomsAttributes->addAttribute("ignition", x2String(myReal->ignition));
    aomsAttributes->addAttribute("MAX_SPEED", x2String(myReal->MAX_SPEED));
    aomsAttributes->addAttribute("MAX_BRAKE", x2String(myReal->MAX_BRAKE));
    aomsAttributes->addAttribute("MAX_THROTTLE", x2String(myReal->MAX_THROTTLE));
    aomsAttributes->addAttribute("distance", x2String(myReal->distance));
    aomsAttributes->addAttribute("throttle", x2String(myReal->throttle));
    aomsAttributes->addAttribute("alpha", x2String(myReal->alpha));
    aomsAttributes->addAttribute("accelPedal", x2String(myReal->accelPedal));
    aomsAttributes->addAttribute("error", x2String(myReal->error));
    aomsAttributes->addAttribute("steady", x2String(myReal->steady));
    aomsAttributes->addAttribute("_simu", x2String(myReal->_simu));
    aomsAttributes->addAttribute("vitesseConsigne", x2String(myReal->vitesseConsigne));
    aomsAttributes->addAttribute("key", x2String(myReal->key));
    aomsAttributes->addAttribute("flag", x2String(myReal->flag));
}

void OMAnimated_SysVehicule::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case _SysVehicule::state_0:
        {
            state_0_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::state_4:
        {
            state_4_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::Regulateur:
        {
            Regulateur_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimated_SysVehicule::state_4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_4");
}

void OMAnimated_SysVehicule::state_0_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0");
    state_1_serializeStates(aomsState);
    state_2_serializeStates(aomsState);
    state_9_serializeStates(aomsState);
}

void OMAnimated_SysVehicule::state_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_9");
    switch (myReal->state_9_subState) {
        case _SysVehicule::Accelerartion:
        {
            Accelerartion_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::Neutre:
        {
            Neutre_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::Freint:
        {
            Freint_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimated_SysVehicule::Neutre_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_9.Neutre");
}

void OMAnimated_SysVehicule::Freint_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_9.Freint");
}

void OMAnimated_SysVehicule::Accelerartion_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_9.Accelerartion");
}

void OMAnimated_SysVehicule::state_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_2");
    if(myReal->state_2_subState == _SysVehicule::Calcul_Vitesse_Distance)
        {
            Calcul_Vitesse_Distance_serializeStates(aomsState);
        }
}

void OMAnimated_SysVehicule::Calcul_Vitesse_Distance_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_2.Calcul_Vitesse_Distance");
}

void OMAnimated_SysVehicule::state_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_1");
    switch (myReal->state_1_subState) {
        case _SysVehicule::motorOn:
        {
            motorOn_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::motorOff:
        {
            motorOff_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimated_SysVehicule::motorOn_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_1.motorOn");
}

void OMAnimated_SysVehicule::motorOff_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_1.motorOff");
}

void OMAnimated_SysVehicule::Regulateur_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Regulateur");
    switch (myReal->Regulateur_subState) {
        case _SysVehicule::consigne:
        {
            consigne_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::Major:
        {
            Major_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::Minus:
        {
            Minus_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimated_SysVehicule::Minus_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Regulateur.Minus");
}

void OMAnimated_SysVehicule::Major_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Regulateur.Major");
}

void OMAnimated_SysVehicule::consigne_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Regulateur.consigne");
}
//#]

IMPLEMENT_REACTIVE_META_P(_SysVehicule, _MonPkg, _MonPkg, false, OMAnimated_SysVehicule)

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setAccelPedal_double, "setAccelPedal", FALSE, "setAccelPedal(double)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setAccelPedal_double, _SysVehicule, setAccelPedal(p_accelPedal), NO_OP())

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setAlpha_int, "setAlpha", FALSE, "setAlpha(int)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setAlpha_int, _SysVehicule, setAlpha(p_alpha), NO_OP())

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setBrakePedal_double, "setBrakePedal", FALSE, "setBrakePedal(double)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setBrakePedal_double, _SysVehicule, setBrakePedal(p_brakePedal), NO_OP())

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setKey_bool, "setKey", FALSE, "setKey(bool)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setKey_bool, _SysVehicule, setKey(p_key), NO_OP())

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setThrottle_double, "setThrottle", FALSE, "setThrottle(double)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setThrottle_double, _SysVehicule, setThrottle(p_throttle), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\_SysVehicule.cpp
*********************************************************************/
