/********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: _SysVehicule
//!	Generated Date	: Tue, 30, Sep 2025  
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

#define OMAnim__MonPkg__SysVehicule_setAccelPedal_double_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_accelPedal)

#define OMAnim__MonPkg__SysVehicule_setAccelPedal_double_SERIALIZE_RET_VAL

#define OMAnim__MonPkg__SysVehicule_setAlpha_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_alpha)

#define OMAnim__MonPkg__SysVehicule_setAlpha_int_SERIALIZE_RET_VAL

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

_SysVehicule::_SysVehicule(IOxfActive* theActiveContext) : MAX_BRAKE(10), MAX_SPEED(120), MAX_THROTTLE(10.0), _simu(true), accelPedal(0.0), airResistance(0.0), alpha(0), brakePedal(0.0), distance(0), error(0.0), fdist(0.0), fspeed(0.0), ignition(false), speed(0), steady(0.0), throttle(0.0), vitesseConsigne(0) {
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

void _SysVehicule::setIgnition(bool p_ignition) {
    ignition = p_ignition;
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
}

void _SysVehicule::cancelTimeouts() {
    cancel(state_9_timeout);
    cancel(state_2_timeout);
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
    return res;
}

void _SysVehicule::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("1");
        //#[ transition 1 
        init();
        //#]
        NOTIFY_STATE_ENTERED("ROOT.state_4");
        pushNullTransition();
        rootState_subState = state_4;
        rootState_active = state_4;
        NOTIFY_TRANSITION_TERMINATED("1");
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
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("0");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_4");
                    state_0_entDef();
                    NOTIFY_TRANSITION_TERMINATED("0");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

void _SysVehicule::state_0_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_0");
    rootState_subState = state_0;
    rootState_active = state_0;
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_1");
    state_2_entDef();
    state_9_entDef();
}

void _SysVehicule::state_0_exit() {
    state_1_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.state_0.state_1");
    state_2_exit();
    state_9_exit();
    
    NOTIFY_STATE_EXITED("ROOT.state_0");
}

IOxfReactive::TakeEventStatus _SysVehicule::state_0_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
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
    
    return res;
}

void _SysVehicule::state_9_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_9");
    NOTIFY_TRANSITION_STARTED("4");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_9.Accelerartion");
    state_9_subState = Accelerartion;
    state_9_active = Accelerartion;
    //#[ state state_0.state_9.Accelerartion.(Entry) 
    accelerer(accelPedal);
    //#]
    state_9_timeout = scheduleTimeout(50, "ROOT.state_0.state_9.Accelerartion");
    NOTIFY_TRANSITION_TERMINATED("4");
}

void _SysVehicule::state_9_exit() {
    // State Accelerartion
    if(state_9_subState == Accelerartion)
        {
            cancel(state_9_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_9.Accelerartion");
        }
    state_9_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_0.state_9");
}

IOxfReactive::TakeEventStatus _SysVehicule::state_9_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State Accelerartion
    if(state_9_active == Accelerartion)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_9_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            cancel(state_9_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_9.Accelerartion");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_9.Accelerartion");
                            state_9_subState = Accelerartion;
                            state_9_active = Accelerartion;
                            //#[ state state_0.state_9.Accelerartion.(Entry) 
                            accelerer(accelPedal);
                            //#]
                            state_9_timeout = scheduleTimeout(50, "ROOT.state_0.state_9.Accelerartion");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

void _SysVehicule::state_2_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_2");
    NOTIFY_TRANSITION_STARTED("3");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_2.Calcul_Vitesse_Distance");
    state_2_subState = Calcul_Vitesse_Distance;
    state_2_active = Calcul_Vitesse_Distance;
    state_2_timeout = scheduleTimeout(50, "ROOT.state_0.state_2.Calcul_Vitesse_Distance");
    NOTIFY_TRANSITION_TERMINATED("3");
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
                            NOTIFY_TRANSITION_STARTED("2");
                            cancel(state_2_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_2.Calcul_Vitesse_Distance");
                            //#[ transition 2 
                            calcul_vitesse_distance(throttle);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_2.Calcul_Vitesse_Distance");
                            state_2_subState = Calcul_Vitesse_Distance;
                            state_2_active = Calcul_Vitesse_Distance;
                            state_2_timeout = scheduleTimeout(50, "ROOT.state_0.state_2.Calcul_Vitesse_Distance");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

IOxfReactive::TakeEventStatus _SysVehicule::state_1_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
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
    if(myReal->state_9_subState == _SysVehicule::Accelerartion)
        {
            Accelerartion_serializeStates(aomsState);
        }
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
}
//#]

IMPLEMENT_REACTIVE_META_P(_SysVehicule, _MonPkg, _MonPkg, false, OMAnimated_SysVehicule)

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setAccelPedal_double, "setAccelPedal", FALSE, "setAccelPedal(double)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setAccelPedal_double, _SysVehicule, setAccelPedal(p_accelPedal), NO_OP())

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setAlpha_int, "setAlpha", FALSE, "setAlpha(int)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setAlpha_int, _SysVehicule, setAlpha(p_alpha), NO_OP())

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setThrottle_double, "setThrottle", FALSE, "setThrottle(double)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setThrottle_double, _SysVehicule, setThrottle(p_throttle), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\_SysVehicule.cpp
*********************************************************************/
