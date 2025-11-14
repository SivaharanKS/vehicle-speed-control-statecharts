/********************************************************************
	Rhapsody	: 9.0.2 
	Login		: student
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: _SysVehicule
//!	Generated Date	: Fri, 14, Nov 2025  
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

#define _MonPkg__SysVehicule_CalculVitesse2_SERIALIZE aomsmethod->addAttribute("throttle", x2String(throttle));

#define _MonPkg__SysVehicule_accelerer_SERIALIZE aomsmethod->addAttribute("accelPedal", x2String(accelPedal));

#define _MonPkg__SysVehicule_accelerer2_SERIALIZE aomsmethod->addAttribute("accelPedal2", x2String(accelPedal2));

#define _MonPkg__SysVehicule_arreter_SERIALIZE OM_NO_OP

#define _MonPkg__SysVehicule_calcul_vitesse_distance_SERIALIZE aomsmethod->addAttribute("throttle", x2String(throttle));

#define _MonPkg__SysVehicule_demarrer_SERIALIZE OM_NO_OP

#define _MonPkg__SysVehicule_freiner_SERIALIZE aomsmethod->addAttribute("brakePedal", x2String(brakePedal));

#define _MonPkg__SysVehicule_freiner2_SERIALIZE aomsmethod->addAttribute("brakePedal2", x2String(brakePedal2));

#define _MonPkg__SysVehicule_init_SERIALIZE OM_NO_OP

#define _MonPkg__SysVehicule_limiteur_SERIALIZE OM_NO_OP

#define _MonPkg__SysVehicule_music_SERIALIZE OM_NO_OP

#define _MonPkg__SysVehicule_regulateur_SERIALIZE OM_NO_OP

#define _MonPkg__SysVehicule_setMajor_SERIALIZE OM_NO_OP

#define _MonPkg__SysVehicule_setMinus_SERIALIZE OM_NO_OP

#define _MonPkg__SysVehicule_testCode_SERIALIZE OM_NO_OP

#define OMAnim__MonPkg__SysVehicule_setAccelPedal_double_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_accelPedal)

#define OMAnim__MonPkg__SysVehicule_setAccelPedal_double_SERIALIZE_RET_VAL

#define OMAnim__MonPkg__SysVehicule_setAccelPedal2_double_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_accelPedal2)

#define OMAnim__MonPkg__SysVehicule_setAccelPedal2_double_SERIALIZE_RET_VAL

#define OMAnim__MonPkg__SysVehicule_setAlpha_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_alpha)

#define OMAnim__MonPkg__SysVehicule_setAlpha_int_SERIALIZE_RET_VAL

#define OMAnim__MonPkg__SysVehicule_setBluetooth_bool_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_bluetooth)

#define OMAnim__MonPkg__SysVehicule_setBluetooth_bool_SERIALIZE_RET_VAL

#define OMAnim__MonPkg__SysVehicule_setBrakePedal_double_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_brakePedal)

#define OMAnim__MonPkg__SysVehicule_setBrakePedal_double_SERIALIZE_RET_VAL

#define OMAnim__MonPkg__SysVehicule_setBrakePedal2_double_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_brakePedal2)

#define OMAnim__MonPkg__SysVehicule_setBrakePedal2_double_SERIALIZE_RET_VAL

#define OMAnim__MonPkg__SysVehicule_setKey_bool_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_key)

#define OMAnim__MonPkg__SysVehicule_setKey_bool_SERIALIZE_RET_VAL

#define OMAnim__MonPkg__SysVehicule_setLim_bool_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_lim)

#define OMAnim__MonPkg__SysVehicule_setLim_bool_SERIALIZE_RET_VAL

#define OMAnim__MonPkg__SysVehicule_setReg_bool_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_reg)

#define OMAnim__MonPkg__SysVehicule_setReg_bool_SERIALIZE_RET_VAL

#define OMAnim__MonPkg__SysVehicule_setSecondVehicule_bool_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_secondVehicule)

#define OMAnim__MonPkg__SysVehicule_setSecondVehicule_bool_SERIALIZE_RET_VAL

#define OMAnim__MonPkg__SysVehicule_setSms_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_sms)

#define OMAnim__MonPkg__SysVehicule_setSms_int_SERIALIZE_RET_VAL

#define OMAnim__MonPkg__SysVehicule_setThrottle_double_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_throttle)

#define OMAnim__MonPkg__SysVehicule_setThrottle_double_SERIALIZE_RET_VAL

#define OMAnim__MonPkg__SysVehicule_setThrottle2_double_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_throttle2)

#define OMAnim__MonPkg__SysVehicule_setThrottle2_double_SERIALIZE_RET_VAL

#define OMAnim__MonPkg__SysVehicule_setUser_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_user)

#define OMAnim__MonPkg__SysVehicule_setUser_int_SERIALIZE_RET_VAL
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

_SysVehicule::_SysVehicule(IOxfActive* theActiveContext) : MAX_BRAKE(10), MAX_SPEED(120), MAX_THROTTLE(10.0), _simu(true), accelPedal(0.0), accelPedal2(0.0), airResistance(0.0), alpha(0), bluetooth(false), bluetoothCar(false), brakePedal(0.0), brakePedal2(0.0), code(0), distance(0), error(0.0), fdist(0.0), flag(false), fspeed(0.0), fspeed2(0.0), ignition(false), key(false), lim(false), phoneUnlocked(false), reg(false), secondVehicule(false), sms(0), sound(0), speed(0), speed2(0), steady(0.0), throttle(0.0), throttle2(0.0), user(0), vitesseConsigne(0.0) {
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

double _SysVehicule::getVitesseConsigne() {
    return vitesseConsigne;
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

void _SysVehicule::CalculVitesse2(double throttle) {
    NOTIFY_OPERATION(CalculVitesse2, CalculVitesse2(double), 1, _MonPkg__SysVehicule_CalculVitesse2_SERIALIZE);
    //#[ operation CalculVitesse2(double)
    
    fspeed2=fspeed2-1.5*sin(alpha*3.14/180)+((throttle2-fspeed2/airResistance))/5;
    
    if(fspeed2>MAX_SPEED) fspeed2=MAX_SPEED;
    if(fspeed2<0) fspeed2=0;
    
    speed2=(int)fspeed2;
    
    if(throttle2>0.0) throttle2-=(0.5/10.0);  
    
    
    
    //#]
}

double _SysVehicule::accelerer2(double accelPedal2) {
    NOTIFY_OPERATION(accelerer2, accelerer2(double), 1, _MonPkg__SysVehicule_accelerer2_SERIALIZE);
    //#[ operation accelerer2(double)
    if(throttle2<(MAX_THROTTLE-(accelPedal2/3)))
        		throttle2+=accelPedal2/3;	
        	else 
        		 throttle2=MAX_THROTTLE;   
        		 
    return throttle2;
    //#]
}

double _SysVehicule::freiner2(double brakePedal2) {
    NOTIFY_OPERATION(freiner2, freiner2(double), 1, _MonPkg__SysVehicule_freiner2_SERIALIZE);
    //#[ operation freiner2(double)
     //if(throttle2>(2.0*brakePedal2))
     if(throttle2>0.0)  
      {
        	throttle2 -= (brakePedal2/2);
      }
     else throttle2 = 0.0;       
      
     return throttle2;
    //#]
}

void _SysVehicule::limiteur() {
    NOTIFY_OPERATION(limiteur, limiteur(), 0, _MonPkg__SysVehicule_limiteur_SERIALIZE);
    //#[ operation limiteur()
    if(speed>=vitesseConsigne){
    	error  = (double) (5*(vitesseConsigne - speed) / 6.0);
    	steady = (double) (vitesseConsigne / 12.0);
    	throttle = steady+error;
    }
    //#]
}

void _SysVehicule::music() {
    NOTIFY_OPERATION(music, music(), 0, _MonPkg__SysVehicule_music_SERIALIZE);
    //#[ operation music()
    if(sound == 0){
    	PlaySound(NULL, 0, 0);
    }else if (sound ==1){
    	PlaySound(TEXT("alarm.wav"), NULL, SND_LOOP | SND_ASYNC);
    }else if (sound ==2){
    	PlaySound(TEXT("call.wav"), NULL, SND_LOOP | SND_ASYNC);
    }else if (sound ==3){
    	PlaySound(TEXT("speak.wav"), NULL, SND_LOOP | SND_ASYNC);
    }
    //#]
}

void _SysVehicule::regulateur() {
    NOTIFY_OPERATION(regulateur, regulateur(), 0, _MonPkg__SysVehicule_regulateur_SERIALIZE);
    //#[ operation regulateur()
    error  = (double) (5*(vitesseConsigne - speed) / 6.0);
    steady = (double) (vitesseConsigne / 12.0);
    throttle = steady+error;
    //#]
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

void _SysVehicule::testCode() {
    NOTIFY_OPERATION(testCode, testCode(), 0, _MonPkg__SysVehicule_testCode_SERIALIZE);
    //#[ operation testCode()
    if(code>10000){
    	code = 0;
    }
    //#]
}

double _SysVehicule::getAccelPedal2() {
    return accelPedal2;
}

void _SysVehicule::setAccelPedal2(double p_accelPedal2) {
    accelPedal2 = p_accelPedal2;
    NOTIFY_SET_OPERATION;
}

bool _SysVehicule::getBluetooth() {
    return bluetooth;
}

void _SysVehicule::setBluetooth(bool p_bluetooth) {
    bluetooth = p_bluetooth;
    NOTIFY_SET_OPERATION;
}

bool _SysVehicule::getBluetoothCar() {
    return bluetoothCar;
}

void _SysVehicule::setBluetoothCar(bool p_bluetoothCar) {
    bluetoothCar = p_bluetoothCar;
}

double _SysVehicule::getBrakePedal2() {
    return brakePedal2;
}

void _SysVehicule::setBrakePedal2(double p_brakePedal2) {
    brakePedal2 = p_brakePedal2;
    NOTIFY_SET_OPERATION;
}

int _SysVehicule::getCode() {
    return code;
}

void _SysVehicule::setCode(int p_code) {
    code = p_code;
    NOTIFY_SET_OPERATION;
}

bool _SysVehicule::getFlag() {
    return flag;
}

void _SysVehicule::setFlag(bool p_flag) {
    flag = p_flag;
}

double _SysVehicule::getFspeed2() {
    return fspeed2;
}

void _SysVehicule::setFspeed2(double p_fspeed2) {
    fspeed2 = p_fspeed2;
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

bool _SysVehicule::getLim() {
    return lim;
}

void _SysVehicule::setLim(bool p_lim) {
    lim = p_lim;
    NOTIFY_SET_OPERATION;
}

bool _SysVehicule::getPhoneUnlocked() {
    return phoneUnlocked;
}

void _SysVehicule::setPhoneUnlocked(bool p_phoneUnlocked) {
    phoneUnlocked = p_phoneUnlocked;
}

bool _SysVehicule::getReg() {
    return reg;
}

void _SysVehicule::setReg(bool p_reg) {
    reg = p_reg;
    NOTIFY_SET_OPERATION;
}

bool _SysVehicule::getSecondVehicule() {
    return secondVehicule;
}

void _SysVehicule::setSecondVehicule(bool p_secondVehicule) {
    secondVehicule = p_secondVehicule;
    NOTIFY_SET_OPERATION;
}

int _SysVehicule::getSms() {
    return sms;
}

void _SysVehicule::setSms(int p_sms) {
    sms = p_sms;
    NOTIFY_SET_OPERATION;
}

int _SysVehicule::getSound() {
    return sound;
}

void _SysVehicule::setSound(int p_sound) {
    sound = p_sound;
}

void _SysVehicule::setSpeed(int p_speed) {
    speed = p_speed;
    NOTIFY_SET_OPERATION;
}

int _SysVehicule::getSpeed2() {
    return speed2;
}

void _SysVehicule::setSpeed2(int p_speed2) {
    speed2 = p_speed2;
    NOTIFY_SET_OPERATION;
}

void _SysVehicule::setThrottle(double p_throttle) {
    throttle = p_throttle;
    NOTIFY_SET_OPERATION;
}

double _SysVehicule::getThrottle2() {
    return throttle2;
}

void _SysVehicule::setThrottle2(double p_throttle2) {
    throttle2 = p_throttle2;
    NOTIFY_SET_OPERATION;
}

int _SysVehicule::getUser() {
    return user;
}

void _SysVehicule::setUser(int p_user) {
    user = p_user;
    NOTIFY_SET_OPERATION;
}

void _SysVehicule::setVitesseConsigne(double p_vitesseConsigne) {
    vitesseConsigne = p_vitesseConsigne;
    NOTIFY_SET_OPERATION;
}

void _SysVehicule::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_9_subState = OMNonState;
    state_9_active = OMNonState;
    state_9_timeout = NULL;
    state_89_subState = OMNonState;
    state_89_active = OMNonState;
    state_80_subState = OMNonState;
    state_80_active = OMNonState;
    state_80_timeout = NULL;
    state_77_subState = OMNonState;
    state_77_active = OMNonState;
    state_73_subState = OMNonState;
    state_73_active = OMNonState;
    state_73_timeout = NULL;
    state_68_subState = OMNonState;
    state_68_active = OMNonState;
    state_68_timeout = NULL;
    state_67_subState = OMNonState;
    state_67_active = OMNonState;
    state_67_timeout = NULL;
    state_58_subState = OMNonState;
    state_58_active = OMNonState;
    state_57_subState = OMNonState;
    state_57_active = OMNonState;
    state_57_timeout = NULL;
    state_54_subState = OMNonState;
    state_54_active = OMNonState;
    state_51_subState = OMNonState;
    state_51_active = OMNonState;
    state_51_timeout = NULL;
    state_47_subState = OMNonState;
    state_47_active = OMNonState;
    state_47_timeout = NULL;
    state_33_subState = OMNonState;
    state_33_active = OMNonState;
    state_33_timeout = NULL;
    state_2_subState = OMNonState;
    state_2_active = OMNonState;
    state_2_timeout = NULL;
    state_1_subState = OMNonState;
    state_1_active = OMNonState;
    state_1_timeout = NULL;
}

void _SysVehicule::cancelTimeouts() {
    cancel(state_9_timeout);
    cancel(state_80_timeout);
    cancel(state_73_timeout);
    cancel(state_68_timeout);
    cancel(state_67_timeout);
    cancel(state_57_timeout);
    cancel(state_51_timeout);
    cancel(state_47_timeout);
    cancel(state_33_timeout);
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
    if(state_80_timeout == arg)
        {
            state_80_timeout = NULL;
            res = true;
        }
    if(state_73_timeout == arg)
        {
            state_73_timeout = NULL;
            res = true;
        }
    if(state_68_timeout == arg)
        {
            state_68_timeout = NULL;
            res = true;
        }
    if(state_67_timeout == arg)
        {
            state_67_timeout = NULL;
            res = true;
        }
    if(state_57_timeout == arg)
        {
            state_57_timeout = NULL;
            res = true;
        }
    if(state_51_timeout == arg)
        {
            state_51_timeout = NULL;
            res = true;
        }
    if(state_47_timeout == arg)
        {
            state_47_timeout = NULL;
            res = true;
        }
    if(state_33_timeout == arg)
        {
            state_33_timeout = NULL;
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
    state_33_entDef();
    state_47_entDef();
    state_51_entDef();
    state_54_entDef();
    state_57_entDef();
    state_58_entDef();
    state_67_entDef();
    state_68_entDef();
    state_73_entDef();
    state_77_entDef();
    state_80_entDef();
    state_89_entDef();
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
            //#[ state state_0.state_1.motorOff.(Exit) 
            bluetoothCar = false;
            //#]
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
    state_33_exit();
    state_47_exit();
    state_51_exit();
    switch (state_54_subState) {
        // State bluetoothOff
        case bluetoothOff:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_54.bluetoothOff");
        }
        break;
        // State bluetoothOn
        case bluetoothOn:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_54.bluetoothOn");
        }
        break;
        default:
            break;
    }
    state_54_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.state_0.state_54");
    state_57_exit();
    state_58_exit();
    state_67_exit();
    switch (state_68_subState) {
        // State Accelerartion2
        case Accelerartion2:
        {
            popNullTransition();
            cancel(state_68_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_68.Accelerartion2");
        }
        break;
        // State Neutre2
        case Neutre2:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_68.Neutre2");
        }
        break;
        // State Freint2
        case Freint2:
        {
            popNullTransition();
            cancel(state_68_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_68.Freint2");
        }
        break;
        default:
            break;
    }
    state_68_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.state_0.state_68");
    switch (state_73_subState) {
        // State vehiculeABS
        case vehiculeABS:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_73.vehiculeABS");
        }
        break;
        // State vehiculePresent
        case vehiculePresent:
        {
            popNullTransition();
            cancel(state_73_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_73.vehiculePresent");
        }
        break;
        default:
            break;
    }
    state_73_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.state_0.state_73");
    switch (state_77_subState) {
        // State safeSpeed
        case safeSpeed:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_77.safeSpeed");
        }
        break;
        // State dangerBrake
        case dangerBrake:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_77.dangerBrake");
        }
        break;
        default:
            break;
    }
    state_77_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.state_0.state_77");
    state_80_exit();
    switch (state_89_subState) {
        // State SMS
        case SMS:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_89.SMS");
        }
        break;
        // State SmsNotReadyToShow
        case SmsNotReadyToShow:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_89.SmsNotReadyToShow");
        }
        break;
        default:
            break;
    }
    state_89_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.state_0.state_89");
    
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
    // State state_33
    if(state_33_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_0))
                {
                    return res;
                }
        }
    // State state_47
    if(state_47_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_0))
                {
                    return res;
                }
        }
    // State state_51
    if(state_51_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_0))
                {
                    return res;
                }
        }
    // State state_54
    if(state_54_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_0))
                {
                    return res;
                }
        }
    // State state_57
    if(state_57_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_0))
                {
                    return res;
                }
        }
    // State state_58
    if(state_58_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_0))
                {
                    return res;
                }
        }
    // State state_67
    if(state_67_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_0))
                {
                    return res;
                }
        }
    // State state_68
    if(state_68_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_0))
                {
                    return res;
                }
        }
    // State state_73
    if(state_73_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_0))
                {
                    return res;
                }
        }
    // State state_77
    if(state_77_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_0))
                {
                    return res;
                }
        }
    // State state_80
    if(state_80_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_0))
                {
                    return res;
                }
        }
    // State state_89
    if(state_89_processEvent() != eventNotConsumed)
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
                            state_9_timeout = scheduleTimeout(200, "ROOT.state_0.state_9.Accelerartion");
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
                            state_9_timeout = scheduleTimeout(200, "ROOT.state_0.state_9.Accelerartion");
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

void _SysVehicule::state_89_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_89");
    NOTIFY_TRANSITION_STARTED("112");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_89.SmsNotReadyToShow");
    pushNullTransition();
    state_89_subState = SmsNotReadyToShow;
    state_89_active = SmsNotReadyToShow;
    NOTIFY_TRANSITION_TERMINATED("112");
}

IOxfReactive::TakeEventStatus _SysVehicule::state_89_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_89_active) {
        // State SMS
        case SMS:
        {
            res = SMS_handleEvent();
        }
        break;
        // State SmsNotReadyToShow
        case SmsNotReadyToShow:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 113 
                    if(IS_IN(unlockedPhone))
                        {
                            NOTIFY_TRANSITION_STARTED("113");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_89.SmsNotReadyToShow");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_89.SMS");
                            pushNullTransition();
                            state_89_subState = SMS;
                            state_89_active = SMS;
                            NOTIFY_TRANSITION_TERMINATED("113");
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

IOxfReactive::TakeEventStatus _SysVehicule::SMS_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evSMS__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("110");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_89.SMS");
            //#[ transition 110 
            sms = sms + 1;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_0.state_89.SMS");
            pushNullTransition();
            state_89_subState = SMS;
            state_89_active = SMS;
            NOTIFY_TRANSITION_TERMINATED("110");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 114 
            if(IS_IN(bluetoothWaiting))
                {
                    NOTIFY_TRANSITION_STARTED("114");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_89.SMS");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_89.SmsNotReadyToShow");
                    pushNullTransition();
                    state_89_subState = SmsNotReadyToShow;
                    state_89_active = SmsNotReadyToShow;
                    NOTIFY_TRANSITION_TERMINATED("114");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(evRead__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("111");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_89.SMS");
            //#[ transition 111 
            sms = 0;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_0.state_89.SMS");
            pushNullTransition();
            state_89_subState = SMS;
            state_89_active = SMS;
            NOTIFY_TRANSITION_TERMINATED("111");
            res = eventConsumed;
        }
    
    
    return res;
}

void _SysVehicule::state_80_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_80");
    NOTIFY_TRANSITION_STARTED("96");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_80.musicoff");
    pushNullTransition();
    state_80_subState = musicoff;
    state_80_active = musicoff;
    //#[ state state_0.state_80.musicoff.(Entry) 
    music();
    //#]
    NOTIFY_TRANSITION_TERMINATED("96");
}

void _SysVehicule::state_80_exit() {
    switch (state_80_subState) {
        // State musicoff
        case musicoff:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_80.musicoff");
        }
        break;
        // State song1
        case song1:
        {
            popNullTransition();
            //#[ state state_0.state_80.song1.(Exit) 
            sound =0;
            //#]
            NOTIFY_STATE_EXITED("ROOT.state_0.state_80.song1");
        }
        break;
        // State song2
        case song2:
        {
            popNullTransition();
            //#[ state state_0.state_80.song2.(Exit) 
            sound = 0;
            //#]
            NOTIFY_STATE_EXITED("ROOT.state_0.state_80.song2");
        }
        break;
        // State song3
        case song3:
        {
            popNullTransition();
            //#[ state state_0.state_80.song3.(Exit) 
            sound = 0;
            //#]
            NOTIFY_STATE_EXITED("ROOT.state_0.state_80.song3");
        }
        break;
        // State song1_2
        case song1_2:
        {
            cancel(state_80_timeout);
            //#[ state state_0.state_80.song1_2.(Exit) 
            sound = 0;
            //#]
            NOTIFY_STATE_EXITED("ROOT.state_0.state_80.song1_2");
        }
        break;
        default:
            break;
    }
    state_80_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_0.state_80");
}

IOxfReactive::TakeEventStatus _SysVehicule::state_80_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_80_active) {
        // State musicoff
        case musicoff:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 89 
                    if(IS_IN(dangerBrake))
                        {
                            NOTIFY_TRANSITION_STARTED("89");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_80.musicoff");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_80.song1");
                            pushNullTransition();
                            state_80_subState = song1;
                            state_80_active = song1;
                            //#[ state state_0.state_80.song1.(Entry) 
                            sound = 1;
                            music();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("89");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 90 
                            if(IS_IN(phone2Calling))
                                {
                                    NOTIFY_TRANSITION_STARTED("90");
                                    popNullTransition();
                                    NOTIFY_STATE_EXITED("ROOT.state_0.state_80.musicoff");
                                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_80.song2");
                                    pushNullTransition();
                                    state_80_subState = song2;
                                    state_80_active = song2;
                                    //#[ state state_0.state_80.song2.(Entry) 
                                    sound = 2;
                                    music();
                                    //#]
                                    NOTIFY_TRANSITION_TERMINATED("90");
                                    res = eventConsumed;
                                }
                            else
                                {
                                    //## transition 102 
                                    if(IS_IN(limOffInatendu))
                                        {
                                            NOTIFY_TRANSITION_STARTED("102");
                                            popNullTransition();
                                            NOTIFY_STATE_EXITED("ROOT.state_0.state_80.musicoff");
                                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_80.song1_2");
                                            state_80_subState = song1_2;
                                            state_80_active = song1_2;
                                            //#[ state state_0.state_80.song1_2.(Entry) 
                                            sound = 1;
                                            music();
                                            //#]
                                            state_80_timeout = scheduleTimeout(5000, "ROOT.state_0.state_80.song1_2");
                                            NOTIFY_TRANSITION_TERMINATED("102");
                                            res = eventConsumed;
                                        }
                                }
                        }
                }
            
            
        }
        break;
        // State song1
        case song1:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 101 
                    if(IS_IN(safeSpeed) || ignition == false)
                        {
                            NOTIFY_TRANSITION_STARTED("101");
                            popNullTransition();
                            //#[ state state_0.state_80.song1.(Exit) 
                            sound =0;
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_80.song1");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_80.musicoff");
                            pushNullTransition();
                            state_80_subState = musicoff;
                            state_80_active = musicoff;
                            //#[ state state_0.state_80.musicoff.(Entry) 
                            music();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("101");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State song2
        case song2:
        {
            res = song2_handleEvent();
        }
        break;
        // State song3
        case song3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 92 
                    if(IS_IN(CallingDeny) || ignition == false)
                        {
                            NOTIFY_TRANSITION_STARTED("92");
                            popNullTransition();
                            //#[ state state_0.state_80.song3.(Exit) 
                            sound = 0;
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_80.song3");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_80.musicoff");
                            pushNullTransition();
                            state_80_subState = musicoff;
                            state_80_active = musicoff;
                            //#[ state state_0.state_80.musicoff.(Entry) 
                            music();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("92");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 95 
                            if(IS_IN(dangerBrake))
                                {
                                    NOTIFY_TRANSITION_STARTED("95");
                                    popNullTransition();
                                    //#[ state state_0.state_80.song3.(Exit) 
                                    sound = 0;
                                    //#]
                                    NOTIFY_STATE_EXITED("ROOT.state_0.state_80.song3");
                                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_80.song1");
                                    pushNullTransition();
                                    state_80_subState = song1;
                                    state_80_active = song1;
                                    //#[ state state_0.state_80.song1.(Entry) 
                                    sound = 1;
                                    music();
                                    //#]
                                    NOTIFY_TRANSITION_TERMINATED("95");
                                    res = eventConsumed;
                                }
                            else
                                {
                                    //## transition 103 
                                    if(IS_IN(limOffInatendu))
                                        {
                                            NOTIFY_TRANSITION_STARTED("103");
                                            popNullTransition();
                                            //#[ state state_0.state_80.song3.(Exit) 
                                            sound = 0;
                                            //#]
                                            NOTIFY_STATE_EXITED("ROOT.state_0.state_80.song3");
                                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_80.song1_2");
                                            state_80_subState = song1_2;
                                            state_80_active = song1_2;
                                            //#[ state state_0.state_80.song1_2.(Entry) 
                                            sound = 1;
                                            music();
                                            //#]
                                            state_80_timeout = scheduleTimeout(5000, "ROOT.state_0.state_80.song1_2");
                                            NOTIFY_TRANSITION_TERMINATED("103");
                                            res = eventConsumed;
                                        }
                                }
                        }
                }
            
            
        }
        break;
        // State song1_2
        case song1_2:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_80_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("105");
                            cancel(state_80_timeout);
                            //#[ state state_0.state_80.song1_2.(Exit) 
                            sound = 0;
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_80.song1_2");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_80.musicoff");
                            pushNullTransition();
                            state_80_subState = musicoff;
                            state_80_active = musicoff;
                            //#[ state state_0.state_80.musicoff.(Entry) 
                            music();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("105");
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

IOxfReactive::TakeEventStatus _SysVehicule::song2TakeNull() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    //## transition 91 
    if(IS_IN(CallingDeny) || ignition == false)
        {
            NOTIFY_TRANSITION_STARTED("91");
            popNullTransition();
            //#[ state state_0.state_80.song2.(Exit) 
            sound = 0;
            //#]
            NOTIFY_STATE_EXITED("ROOT.state_0.state_80.song2");
            NOTIFY_STATE_ENTERED("ROOT.state_0.state_80.musicoff");
            pushNullTransition();
            state_80_subState = musicoff;
            state_80_active = musicoff;
            //#[ state state_0.state_80.musicoff.(Entry) 
            music();
            //#]
            NOTIFY_TRANSITION_TERMINATED("91");
            res = eventConsumed;
        }
    else
        {
            //## transition 93 
            if(IS_IN(callingAccept))
                {
                    NOTIFY_TRANSITION_STARTED("93");
                    popNullTransition();
                    //#[ state state_0.state_80.song2.(Exit) 
                    sound = 0;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_80.song2");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_80.song3");
                    pushNullTransition();
                    state_80_subState = song3;
                    state_80_active = song3;
                    //#[ state state_0.state_80.song3.(Entry) 
                    sound = 3;
                    music();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("93");
                    res = eventConsumed;
                }
            else
                {
                    //## transition 94 
                    if(IS_IN(dangerBrake))
                        {
                            NOTIFY_TRANSITION_STARTED("94");
                            popNullTransition();
                            //#[ state state_0.state_80.song2.(Exit) 
                            sound = 0;
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_80.song2");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_80.song1");
                            pushNullTransition();
                            state_80_subState = song1;
                            state_80_active = song1;
                            //#[ state state_0.state_80.song1.(Entry) 
                            sound = 1;
                            music();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("94");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 104 
                            if(IS_IN(limOffInatendu))
                                {
                                    NOTIFY_TRANSITION_STARTED("104");
                                    popNullTransition();
                                    //#[ state state_0.state_80.song2.(Exit) 
                                    sound = 0;
                                    //#]
                                    NOTIFY_STATE_EXITED("ROOT.state_0.state_80.song2");
                                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_80.song1_2");
                                    state_80_subState = song1_2;
                                    state_80_active = song1_2;
                                    //#[ state state_0.state_80.song1_2.(Entry) 
                                    sound = 1;
                                    music();
                                    //#]
                                    state_80_timeout = scheduleTimeout(5000, "ROOT.state_0.state_80.song1_2");
                                    NOTIFY_TRANSITION_TERMINATED("104");
                                    res = eventConsumed;
                                }
                        }
                }
        }
    return res;
}

IOxfReactive::TakeEventStatus _SysVehicule::song2_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            res = song2TakeNull();
        }
    
    
    return res;
}

void _SysVehicule::state_77_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_77");
    NOTIFY_TRANSITION_STARTED("86");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_77.safeSpeed");
    pushNullTransition();
    state_77_subState = safeSpeed;
    state_77_active = safeSpeed;
    NOTIFY_TRANSITION_TERMINATED("86");
}

IOxfReactive::TakeEventStatus _SysVehicule::state_77_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_77_active) {
        // State safeSpeed
        case safeSpeed:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 87 
                    if(IS_IN(regAdaptatif) && brakePedal2 > 8)
                        {
                            NOTIFY_TRANSITION_STARTED("87");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_77.safeSpeed");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_77.dangerBrake");
                            pushNullTransition();
                            state_77_subState = dangerBrake;
                            state_77_active = dangerBrake;
                            NOTIFY_TRANSITION_TERMINATED("87");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State dangerBrake
        case dangerBrake:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 88 
                    if(brakePedal2 < 8)
                        {
                            NOTIFY_TRANSITION_STARTED("88");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_77.dangerBrake");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_77.safeSpeed");
                            pushNullTransition();
                            state_77_subState = safeSpeed;
                            state_77_active = safeSpeed;
                            NOTIFY_TRANSITION_TERMINATED("88");
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

void _SysVehicule::state_73_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_73");
    NOTIFY_TRANSITION_STARTED("82");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_73.vehiculeABS");
    pushNullTransition();
    state_73_subState = vehiculeABS;
    state_73_active = vehiculeABS;
    NOTIFY_TRANSITION_TERMINATED("82");
}

IOxfReactive::TakeEventStatus _SysVehicule::state_73_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_73_active) {
        // State vehiculeABS
        case vehiculeABS:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 79 
                    if(secondVehicule == true)
                        {
                            NOTIFY_TRANSITION_STARTED("79");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_73.vehiculeABS");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_73.vehiculePresent");
                            pushNullTransition();
                            state_73_subState = vehiculePresent;
                            state_73_active = vehiculePresent;
                            state_73_timeout = scheduleTimeout(200, "ROOT.state_0.state_73.vehiculePresent");
                            NOTIFY_TRANSITION_TERMINATED("79");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State vehiculePresent
        case vehiculePresent:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_73_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("81");
                            popNullTransition();
                            cancel(state_73_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_73.vehiculePresent");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_73.vehiculePresent");
                            pushNullTransition();
                            state_73_subState = vehiculePresent;
                            state_73_active = vehiculePresent;
                            state_73_timeout = scheduleTimeout(200, "ROOT.state_0.state_73.vehiculePresent");
                            NOTIFY_TRANSITION_TERMINATED("81");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 80 
                    if(secondVehicule == false)
                        {
                            NOTIFY_TRANSITION_STARTED("80");
                            popNullTransition();
                            cancel(state_73_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_73.vehiculePresent");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_73.vehiculeABS");
                            pushNullTransition();
                            state_73_subState = vehiculeABS;
                            state_73_active = vehiculeABS;
                            NOTIFY_TRANSITION_TERMINATED("80");
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

void _SysVehicule::state_68_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_68");
    NOTIFY_TRANSITION_STARTED("71");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_68.Neutre2");
    pushNullTransition();
    state_68_subState = Neutre2;
    state_68_active = Neutre2;
    NOTIFY_TRANSITION_TERMINATED("71");
}

IOxfReactive::TakeEventStatus _SysVehicule::state_68_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_68_active) {
        // State Accelerartion2
        case Accelerartion2:
        {
            res = Accelerartion2_handleEvent();
        }
        break;
        // State Neutre2
        case Neutre2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 73 
                    if(accelPedal2>0.2 && secondVehicule==true)
                        {
                            NOTIFY_TRANSITION_STARTED("73");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_68.Neutre2");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_68.Accelerartion2");
                            pushNullTransition();
                            state_68_subState = Accelerartion2;
                            state_68_active = Accelerartion2;
                            //#[ state state_0.state_68.Accelerartion2.(Entry) 
                            accelerer2(accelPedal2);
                            //#]
                            state_68_timeout = scheduleTimeout(200, "ROOT.state_0.state_68.Accelerartion2");
                            NOTIFY_TRANSITION_TERMINATED("73");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 77 
                            if(brakePedal2>0.2)
                                {
                                    NOTIFY_TRANSITION_STARTED("77");
                                    popNullTransition();
                                    NOTIFY_STATE_EXITED("ROOT.state_0.state_68.Neutre2");
                                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_68.Freint2");
                                    pushNullTransition();
                                    state_68_subState = Freint2;
                                    state_68_active = Freint2;
                                    //#[ state state_0.state_68.Freint2.(Entry) 
                                    freiner2(brakePedal2);
                                    //#]
                                    state_68_timeout = scheduleTimeout(200, "ROOT.state_0.state_68.Freint2");
                                    NOTIFY_TRANSITION_TERMINATED("77");
                                    res = eventConsumed;
                                }
                        }
                }
            
            
        }
        break;
        // State Freint2
        case Freint2:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_68_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("78");
                            popNullTransition();
                            cancel(state_68_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_68.Freint2");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_68.Freint2");
                            pushNullTransition();
                            state_68_subState = Freint2;
                            state_68_active = Freint2;
                            //#[ state state_0.state_68.Freint2.(Entry) 
                            freiner2(brakePedal2);
                            //#]
                            state_68_timeout = scheduleTimeout(200, "ROOT.state_0.state_68.Freint2");
                            NOTIFY_TRANSITION_TERMINATED("78");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 75 
                    if(brakePedal2<0.2)
                        {
                            NOTIFY_TRANSITION_STARTED("75");
                            popNullTransition();
                            cancel(state_68_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_68.Freint2");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_68.Neutre2");
                            pushNullTransition();
                            state_68_subState = Neutre2;
                            state_68_active = Neutre2;
                            NOTIFY_TRANSITION_TERMINATED("75");
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

IOxfReactive::TakeEventStatus _SysVehicule::Accelerartion2_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == state_68_timeout)
                {
                    //## transition 72 
                    if(IS_IN(vehiculePresent))
                        {
                            NOTIFY_TRANSITION_STARTED("72");
                            popNullTransition();
                            cancel(state_68_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_68.Accelerartion2");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_68.Accelerartion2");
                            pushNullTransition();
                            state_68_subState = Accelerartion2;
                            state_68_active = Accelerartion2;
                            //#[ state state_0.state_68.Accelerartion2.(Entry) 
                            accelerer2(accelPedal2);
                            //#]
                            state_68_timeout = scheduleTimeout(200, "ROOT.state_0.state_68.Accelerartion2");
                            NOTIFY_TRANSITION_TERMINATED("72");
                            res = eventConsumed;
                        }
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 74 
            if(accelPedal2<0.2 || secondVehicule==false )
                {
                    NOTIFY_TRANSITION_STARTED("74");
                    popNullTransition();
                    cancel(state_68_timeout);
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_68.Accelerartion2");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_68.Neutre2");
                    pushNullTransition();
                    state_68_subState = Neutre2;
                    state_68_active = Neutre2;
                    NOTIFY_TRANSITION_TERMINATED("74");
                    res = eventConsumed;
                }
            else
                {
                    //## transition 76 
                    if(brakePedal2>0.2)
                        {
                            NOTIFY_TRANSITION_STARTED("76");
                            popNullTransition();
                            cancel(state_68_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_68.Accelerartion2");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_68.Freint2");
                            pushNullTransition();
                            state_68_subState = Freint2;
                            state_68_active = Freint2;
                            //#[ state state_0.state_68.Freint2.(Entry) 
                            freiner2(brakePedal2);
                            //#]
                            state_68_timeout = scheduleTimeout(200, "ROOT.state_0.state_68.Freint2");
                            NOTIFY_TRANSITION_TERMINATED("76");
                            res = eventConsumed;
                        }
                }
        }
    
    
    return res;
}

void _SysVehicule::state_67_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_67");
    NOTIFY_TRANSITION_STARTED("69");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_67.Calcul_Vitesse_Distance2");
    state_67_subState = Calcul_Vitesse_Distance2;
    state_67_active = Calcul_Vitesse_Distance2;
    state_67_timeout = scheduleTimeout(50, "ROOT.state_0.state_67.Calcul_Vitesse_Distance2");
    NOTIFY_TRANSITION_TERMINATED("69");
}

void _SysVehicule::state_67_exit() {
    // State Calcul_Vitesse_Distance2
    if(state_67_subState == Calcul_Vitesse_Distance2)
        {
            cancel(state_67_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_67.Calcul_Vitesse_Distance2");
        }
    state_67_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_0.state_67");
}

IOxfReactive::TakeEventStatus _SysVehicule::state_67_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State Calcul_Vitesse_Distance2
    if(state_67_active == Calcul_Vitesse_Distance2)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_67_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("70");
                            cancel(state_67_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_67.Calcul_Vitesse_Distance2");
                            //#[ transition 70 
                            CalculVitesse2(throttle2);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_67.Calcul_Vitesse_Distance2");
                            state_67_subState = Calcul_Vitesse_Distance2;
                            state_67_active = Calcul_Vitesse_Distance2;
                            state_67_timeout = scheduleTimeout(50, "ROOT.state_0.state_67.Calcul_Vitesse_Distance2");
                            NOTIFY_TRANSITION_TERMINATED("70");
                            res = eventConsumed;
                        }
                }
            
            
        }
    return res;
}

void _SysVehicule::state_58_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_58");
    NOTIFY_TRANSITION_STARTED("59");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_58.bluetoothWaiting");
    pushNullTransition();
    state_58_subState = bluetoothWaiting;
    state_58_active = bluetoothWaiting;
    NOTIFY_TRANSITION_TERMINATED("59");
}

void _SysVehicule::state_58_exit() {
    switch (state_58_subState) {
        // State phoneCode
        case phoneCode:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_58.phoneCode");
        }
        break;
        // State unlockedPhone
        case unlockedPhone:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_58.unlockedPhone");
        }
        break;
        // State bluetoothWaiting
        case bluetoothWaiting:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_58.bluetoothWaiting");
        }
        break;
        // State bluetoothOn
        case state_58_bluetoothOn:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_58.bluetoothOn");
        }
        break;
        default:
            break;
    }
    state_58_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_0.state_58");
}

IOxfReactive::TakeEventStatus _SysVehicule::state_58_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_58_active) {
        // State phoneCode
        case phoneCode:
        {
            res = phoneCode_handleEvent();
        }
        break;
        // State unlockedPhone
        case unlockedPhone:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 64 
                    if(bluetooth== false || ignition == false)
                        {
                            NOTIFY_TRANSITION_STARTED("64");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_58.unlockedPhone");
                            //#[ transition 64 
                            bluetooth = false;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_58.bluetoothWaiting");
                            pushNullTransition();
                            state_58_subState = bluetoothWaiting;
                            state_58_active = bluetoothWaiting;
                            NOTIFY_TRANSITION_TERMINATED("64");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State bluetoothWaiting
        case bluetoothWaiting:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 61 
                    if(bluetooth == true && ignition == true)
                        {
                            NOTIFY_TRANSITION_STARTED("61");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_58.bluetoothWaiting");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_58.bluetoothOn");
                            pushNullTransition();
                            state_58_subState = state_58_bluetoothOn;
                            state_58_active = state_58_bluetoothOn;
                            NOTIFY_TRANSITION_TERMINATED("61");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State bluetoothOn
        case state_58_bluetoothOn:
        {
            if(IS_EVENT_TYPE_OF(evBTVehicule__MonPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("60");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_58.bluetoothOn");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_58.phoneCode");
                    pushNullTransition();
                    state_58_subState = phoneCode;
                    state_58_active = phoneCode;
                    //#[ state state_0.state_58.phoneCode.(Entry) 
                    testCode();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("60");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 62 
                    if(bluetooth == false || ignition == false)
                        {
                            NOTIFY_TRANSITION_STARTED("62");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_58.bluetoothOn");
                            //#[ transition 62 
                            bluetooth = false;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_58.bluetoothWaiting");
                            pushNullTransition();
                            state_58_subState = bluetoothWaiting;
                            state_58_active = bluetoothWaiting;
                            NOTIFY_TRANSITION_TERMINATED("62");
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

IOxfReactive::TakeEventStatus _SysVehicule::phoneCode_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(ev3__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("50");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_58.phoneCode");
            //#[ transition 50 
            code = (code*10)+3;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_0.state_58.phoneCode");
            pushNullTransition();
            state_58_subState = phoneCode;
            state_58_active = phoneCode;
            //#[ state state_0.state_58.phoneCode.(Entry) 
            testCode();
            //#]
            NOTIFY_TRANSITION_TERMINATED("50");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(ev4__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("51");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_58.phoneCode");
            //#[ transition 51 
            code = (code*10)+4;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_0.state_58.phoneCode");
            pushNullTransition();
            state_58_subState = phoneCode;
            state_58_active = phoneCode;
            //#[ state state_0.state_58.phoneCode.(Entry) 
            testCode();
            //#]
            NOTIFY_TRANSITION_TERMINATED("51");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(ev5__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("52");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_58.phoneCode");
            //#[ transition 52 
            code = (code*10)+5;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_0.state_58.phoneCode");
            pushNullTransition();
            state_58_subState = phoneCode;
            state_58_active = phoneCode;
            //#[ state state_0.state_58.phoneCode.(Entry) 
            testCode();
            //#]
            NOTIFY_TRANSITION_TERMINATED("52");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(ev6__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("53");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_58.phoneCode");
            //#[ transition 53 
            code = (code*10)+6;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_0.state_58.phoneCode");
            pushNullTransition();
            state_58_subState = phoneCode;
            state_58_active = phoneCode;
            //#[ state state_0.state_58.phoneCode.(Entry) 
            testCode();
            //#]
            NOTIFY_TRANSITION_TERMINATED("53");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(ev7__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("54");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_58.phoneCode");
            //#[ transition 54 
            code = (code*10)+7;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_0.state_58.phoneCode");
            pushNullTransition();
            state_58_subState = phoneCode;
            state_58_active = phoneCode;
            //#[ state state_0.state_58.phoneCode.(Entry) 
            testCode();
            //#]
            NOTIFY_TRANSITION_TERMINATED("54");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 58 
            if(code == 1234)
                {
                    NOTIFY_TRANSITION_STARTED("58");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_58.phoneCode");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_58.unlockedPhone");
                    pushNullTransition();
                    state_58_subState = unlockedPhone;
                    state_58_active = unlockedPhone;
                    //#[ state state_0.state_58.unlockedPhone.(Entry) 
                    code = 0;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("58");
                    res = eventConsumed;
                }
            else
                {
                    //## transition 63 
                    if(bluetooth == false || ignition == false)
                        {
                            NOTIFY_TRANSITION_STARTED("63");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_58.phoneCode");
                            //#[ transition 63 
                            bluetooth = false;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_58.bluetoothWaiting");
                            pushNullTransition();
                            state_58_subState = bluetoothWaiting;
                            state_58_active = bluetoothWaiting;
                            NOTIFY_TRANSITION_TERMINATED("63");
                            res = eventConsumed;
                        }
                }
        }
    else if(IS_EVENT_TYPE_OF(ev8__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("55");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_58.phoneCode");
            //#[ transition 55 
            code = (code*10)+8;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_0.state_58.phoneCode");
            pushNullTransition();
            state_58_subState = phoneCode;
            state_58_active = phoneCode;
            //#[ state state_0.state_58.phoneCode.(Entry) 
            testCode();
            //#]
            NOTIFY_TRANSITION_TERMINATED("55");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(ev9__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("56");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_58.phoneCode");
            //#[ transition 56 
            code = (code*10)+9;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_0.state_58.phoneCode");
            pushNullTransition();
            state_58_subState = phoneCode;
            state_58_active = phoneCode;
            //#[ state state_0.state_58.phoneCode.(Entry) 
            testCode();
            //#]
            NOTIFY_TRANSITION_TERMINATED("56");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evReset__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("57");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_58.phoneCode");
            //#[ transition 57 
            code=0;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_0.state_58.phoneCode");
            pushNullTransition();
            state_58_subState = phoneCode;
            state_58_active = phoneCode;
            //#[ state state_0.state_58.phoneCode.(Entry) 
            testCode();
            //#]
            NOTIFY_TRANSITION_TERMINATED("57");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(ev0__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("47");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_58.phoneCode");
            //#[ transition 47 
            code = (code*10)+0;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_0.state_58.phoneCode");
            pushNullTransition();
            state_58_subState = phoneCode;
            state_58_active = phoneCode;
            //#[ state state_0.state_58.phoneCode.(Entry) 
            testCode();
            //#]
            NOTIFY_TRANSITION_TERMINATED("47");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(ev1__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("48");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_58.phoneCode");
            //#[ transition 48 
            code = (code*10)+1;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_0.state_58.phoneCode");
            pushNullTransition();
            state_58_subState = phoneCode;
            state_58_active = phoneCode;
            //#[ state state_0.state_58.phoneCode.(Entry) 
            testCode();
            //#]
            NOTIFY_TRANSITION_TERMINATED("48");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(ev2__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("49");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_58.phoneCode");
            //#[ transition 49 
            code = (code*10)+2;
            //#]
            NOTIFY_STATE_ENTERED("ROOT.state_0.state_58.phoneCode");
            pushNullTransition();
            state_58_subState = phoneCode;
            state_58_active = phoneCode;
            //#[ state state_0.state_58.phoneCode.(Entry) 
            testCode();
            //#]
            NOTIFY_TRANSITION_TERMINATED("49");
            res = eventConsumed;
        }
    
    
    return res;
}

void _SysVehicule::state_57_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_57");
    NOTIFY_TRANSITION_STARTED("65");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_57.phone2Initial");
    pushNullTransition();
    state_57_subState = phone2Initial;
    state_57_active = phone2Initial;
    //#[ state state_0.state_57.phone2Initial.(Entry) 
    music();
    //#]
    NOTIFY_TRANSITION_TERMINATED("65");
}

void _SysVehicule::state_57_exit() {
    switch (state_57_subState) {
        // State phone2Initial
        case phone2Initial:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_57.phone2Initial");
        }
        break;
        // State phone2Calling
        case phone2Calling:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_57.phone2Calling");
        }
        break;
        // State callingAccept
        case callingAccept:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_57.callingAccept");
        }
        break;
        // State CallingDeny
        case CallingDeny:
        {
            cancel(state_57_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_57.CallingDeny");
        }
        break;
        // State Phone2Ready
        case Phone2Ready:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_57.Phone2Ready");
        }
        break;
        default:
            break;
    }
    state_57_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_0.state_57");
}

IOxfReactive::TakeEventStatus _SysVehicule::state_57_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_57_active) {
        // State phone2Initial
        case phone2Initial:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 106 
                    if(IS_IN(unlockedPhone))
                        {
                            NOTIFY_TRANSITION_STARTED("106");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_57.phone2Initial");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_57.Phone2Ready");
                            pushNullTransition();
                            state_57_subState = Phone2Ready;
                            state_57_active = Phone2Ready;
                            NOTIFY_TRANSITION_TERMINATED("106");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State phone2Calling
        case phone2Calling:
        {
            res = phone2Calling_handleEvent();
        }
        break;
        // State callingAccept
        case callingAccept:
        {
            if(IS_EVENT_TYPE_OF(evCallingDeny__MonPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("97");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_57.callingAccept");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_57.CallingDeny");
                    state_57_subState = CallingDeny;
                    state_57_active = CallingDeny;
                    //#[ state state_0.state_57.CallingDeny.(Entry) 
                    user=2;
                    //#]
                    state_57_timeout = scheduleTimeout(200, "ROOT.state_0.state_57.CallingDeny");
                    NOTIFY_TRANSITION_TERMINATED("97");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 109 
                    if(IS_IN(bluetoothWaiting))
                        {
                            NOTIFY_TRANSITION_STARTED("109");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_57.callingAccept");
                            //#[ transition 109 
                            sound = 0;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_57.phone2Initial");
                            pushNullTransition();
                            state_57_subState = phone2Initial;
                            state_57_active = phone2Initial;
                            //#[ state state_0.state_57.phone2Initial.(Entry) 
                            music();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("109");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State CallingDeny
        case CallingDeny:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_57_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("98");
                            cancel(state_57_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_57.CallingDeny");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_57.phone2Initial");
                            pushNullTransition();
                            state_57_subState = phone2Initial;
                            state_57_active = phone2Initial;
                            //#[ state state_0.state_57.phone2Initial.(Entry) 
                            music();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("98");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State Phone2Ready
        case Phone2Ready:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 107 
                    if(IS_IN(bluetoothWaiting))
                        {
                            NOTIFY_TRANSITION_STARTED("107");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_57.Phone2Ready");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_57.phone2Initial");
                            pushNullTransition();
                            state_57_subState = phone2Initial;
                            state_57_active = phone2Initial;
                            //#[ state state_0.state_57.phone2Initial.(Entry) 
                            music();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("107");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(evCalling__MonPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("66");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_57.Phone2Ready");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_57.phone2Calling");
                    pushNullTransition();
                    state_57_subState = phone2Calling;
                    state_57_active = phone2Calling;
                    //#[ state state_0.state_57.phone2Calling.(Entry) 
                    user = 1;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("66");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus _SysVehicule::phone2Calling_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(evCallingDeny__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("68");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_57.phone2Calling");
            NOTIFY_STATE_ENTERED("ROOT.state_0.state_57.CallingDeny");
            state_57_subState = CallingDeny;
            state_57_active = CallingDeny;
            //#[ state state_0.state_57.CallingDeny.(Entry) 
            user=2;
            //#]
            state_57_timeout = scheduleTimeout(200, "ROOT.state_0.state_57.CallingDeny");
            NOTIFY_TRANSITION_TERMINATED("68");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(evCallingAccept__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("67");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_57.phone2Calling");
            NOTIFY_STATE_ENTERED("ROOT.state_0.state_57.callingAccept");
            pushNullTransition();
            state_57_subState = callingAccept;
            state_57_active = callingAccept;
            //#[ state state_0.state_57.callingAccept.(Entry) 
            user = 3;
            //#]
            NOTIFY_TRANSITION_TERMINATED("67");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 108 
            if(IS_IN(bluetoothWaiting))
                {
                    NOTIFY_TRANSITION_STARTED("108");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_57.phone2Calling");
                    //#[ transition 108 
                    sound = 0;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_57.phone2Initial");
                    pushNullTransition();
                    state_57_subState = phone2Initial;
                    state_57_active = phone2Initial;
                    //#[ state state_0.state_57.phone2Initial.(Entry) 
                    music();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("108");
                    res = eventConsumed;
                }
        }
    
    
    return res;
}

void _SysVehicule::state_54_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_54");
    NOTIFY_TRANSITION_STARTED("44");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_54.bluetoothOff");
    pushNullTransition();
    state_54_subState = bluetoothOff;
    state_54_active = bluetoothOff;
    NOTIFY_TRANSITION_TERMINATED("44");
}

IOxfReactive::TakeEventStatus _SysVehicule::state_54_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_54_active) {
        // State bluetoothOff
        case bluetoothOff:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 45 
                    if(bluetooth == true && ignition == true)
                        {
                            NOTIFY_TRANSITION_STARTED("45");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_54.bluetoothOff");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_54.bluetoothOn");
                            pushNullTransition();
                            state_54_subState = bluetoothOn;
                            state_54_active = bluetoothOn;
                            NOTIFY_TRANSITION_TERMINATED("45");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State bluetoothOn
        case bluetoothOn:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 46 
                    if(bluetooth == false || ignition == false)
                        {
                            NOTIFY_TRANSITION_STARTED("46");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_54.bluetoothOn");
                            //#[ transition 46 
                            bluetooth = false;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_54.bluetoothOff");
                            pushNullTransition();
                            state_54_subState = bluetoothOff;
                            state_54_active = bluetoothOff;
                            NOTIFY_TRANSITION_TERMINATED("46");
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

void _SysVehicule::state_51_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_51");
    NOTIFY_TRANSITION_STARTED("40");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_51.setoff");
    pushNullTransition();
    state_51_subState = setoff;
    state_51_active = setoff;
    state_51_timeout = scheduleTimeout(200, "ROOT.state_0.state_51.setoff");
    NOTIFY_TRANSITION_TERMINATED("40");
}

void _SysVehicule::state_51_exit() {
    switch (state_51_subState) {
        // State Major
        case Major:
        {
            cancel(state_51_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_51.Major");
        }
        break;
        // State Minus
        case Minus:
        {
            cancel(state_51_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_51.Minus");
        }
        break;
        // State minusPlus
        case minusPlus:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_51.minusPlus");
        }
        break;
        // State MajorPlus
        case MajorPlus:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_51.MajorPlus");
        }
        break;
        // State NeutreSet
        case NeutreSet:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_51.NeutreSet");
        }
        break;
        // State setoff
        case setoff:
        {
            popNullTransition();
            cancel(state_51_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_51.setoff");
        }
        break;
        default:
            break;
    }
    state_51_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_0.state_51");
}

IOxfReactive::TakeEventStatus _SysVehicule::state_51_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_51_active) {
        // State Major
        case Major:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_51_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("37");
                            cancel(state_51_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_51.Major");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_51.NeutreSet");
                            pushNullTransition();
                            state_51_subState = NeutreSet;
                            state_51_active = NeutreSet;
                            NOTIFY_TRANSITION_TERMINATED("37");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(setMaj__MonPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("33");
                    cancel(state_51_timeout);
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_51.Major");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_51.MajorPlus");
                    pushNullTransition();
                    state_51_subState = MajorPlus;
                    state_51_active = MajorPlus;
                    //#[ state state_0.state_51.MajorPlus.(Entry) 
                    vitesseConsigne = vitesseConsigne +9;
                    flag = true;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("33");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Minus
        case Minus:
        {
            if(IS_EVENT_TYPE_OF(setMin__MonPkg_id))
                {
                    NOTIFY_TRANSITION_STARTED("32");
                    cancel(state_51_timeout);
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_51.Minus");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_51.minusPlus");
                    pushNullTransition();
                    state_51_subState = minusPlus;
                    state_51_active = minusPlus;
                    //#[ state state_0.state_51.minusPlus.(Entry) 
                    vitesseConsigne = vitesseConsigne-9;
                    flag = true;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("32");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_51_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("36");
                            cancel(state_51_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_51.Minus");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_51.NeutreSet");
                            pushNullTransition();
                            state_51_subState = NeutreSet;
                            state_51_active = NeutreSet;
                            NOTIFY_TRANSITION_TERMINATED("36");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State minusPlus
        case minusPlus:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 38 
                    if(flag==true)
                        {
                            NOTIFY_TRANSITION_STARTED("38");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_51.minusPlus");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_51.NeutreSet");
                            pushNullTransition();
                            state_51_subState = NeutreSet;
                            state_51_active = NeutreSet;
                            NOTIFY_TRANSITION_TERMINATED("38");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State MajorPlus
        case MajorPlus:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 39 
                    if(flag==true)
                        {
                            NOTIFY_TRANSITION_STARTED("39");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_51.MajorPlus");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_51.NeutreSet");
                            pushNullTransition();
                            state_51_subState = NeutreSet;
                            state_51_active = NeutreSet;
                            NOTIFY_TRANSITION_TERMINATED("39");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State NeutreSet
        case NeutreSet:
        {
            res = NeutreSet_handleEvent();
        }
        break;
        // State setoff
        case setoff:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_51_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("42");
                            popNullTransition();
                            cancel(state_51_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_51.setoff");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_51.setoff");
                            pushNullTransition();
                            state_51_subState = setoff;
                            state_51_active = setoff;
                            state_51_timeout = scheduleTimeout(200, "ROOT.state_0.state_51.setoff");
                            NOTIFY_TRANSITION_TERMINATED("42");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 41 
                    if(IS_IN(limOn)||IS_IN(regOn))
                        {
                            NOTIFY_TRANSITION_STARTED("41");
                            popNullTransition();
                            cancel(state_51_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_51.setoff");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_51.NeutreSet");
                            pushNullTransition();
                            state_51_subState = NeutreSet;
                            state_51_active = NeutreSet;
                            NOTIFY_TRANSITION_TERMINATED("41");
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

IOxfReactive::TakeEventStatus _SysVehicule::NeutreSet_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(setMin__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("34");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_51.NeutreSet");
            NOTIFY_STATE_ENTERED("ROOT.state_0.state_51.Minus");
            state_51_subState = Minus;
            state_51_active = Minus;
            //#[ state state_0.state_51.Minus.(Entry) 
            vitesseConsigne = vitesseConsigne-1;
            //#]
            state_51_timeout = scheduleTimeout(500, "ROOT.state_0.state_51.Minus");
            NOTIFY_TRANSITION_TERMINATED("34");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 43 
            if(IS_IN(limOff)&&IS_IN(regOff))
                {
                    NOTIFY_TRANSITION_STARTED("43");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_51.NeutreSet");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_51.setoff");
                    pushNullTransition();
                    state_51_subState = setoff;
                    state_51_active = setoff;
                    state_51_timeout = scheduleTimeout(200, "ROOT.state_0.state_51.setoff");
                    NOTIFY_TRANSITION_TERMINATED("43");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(setMaj__MonPkg_id))
        {
            NOTIFY_TRANSITION_STARTED("35");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_0.state_51.NeutreSet");
            NOTIFY_STATE_ENTERED("ROOT.state_0.state_51.Major");
            state_51_subState = Major;
            state_51_active = Major;
            //#[ state state_0.state_51.Major.(Entry) 
            vitesseConsigne = vitesseConsigne +1;
            
            //#]
            state_51_timeout = scheduleTimeout(500, "ROOT.state_0.state_51.Major");
            NOTIFY_TRANSITION_TERMINATED("35");
            res = eventConsumed;
        }
    
    
    return res;
}

void _SysVehicule::state_47_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_47");
    NOTIFY_TRANSITION_STARTED("25");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_47.limOff");
    pushNullTransition();
    state_47_subState = limOff;
    state_47_active = limOff;
    state_47_timeout = scheduleTimeout(200, "ROOT.state_0.state_47.limOff");
    NOTIFY_TRANSITION_TERMINATED("25");
}

void _SysVehicule::state_47_exit() {
    switch (state_47_subState) {
        // State limOff
        case limOff:
        {
            popNullTransition();
            cancel(state_47_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_47.limOff");
        }
        break;
        // State limWaiting
        case limWaiting:
        {
            popNullTransition();
            cancel(state_47_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_47.limWaiting");
        }
        break;
        // State limOn
        case limOn:
        {
            popNullTransition();
            cancel(state_47_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_47.limOn");
        }
        break;
        // State limOffInatendu
        case limOffInatendu:
        {
            cancel(state_47_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_47.limOffInatendu");
        }
        break;
        default:
            break;
    }
    state_47_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_0.state_47");
}

IOxfReactive::TakeEventStatus _SysVehicule::state_47_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_47_active) {
        // State limOff
        case limOff:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_47_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("28");
                            popNullTransition();
                            cancel(state_47_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_47.limOff");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_47.limOff");
                            pushNullTransition();
                            state_47_subState = limOff;
                            state_47_active = limOff;
                            state_47_timeout = scheduleTimeout(200, "ROOT.state_0.state_47.limOff");
                            NOTIFY_TRANSITION_TERMINATED("28");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 26 
                    if(lim==true&&ignition ==true)
                        {
                            NOTIFY_TRANSITION_STARTED("26");
                            popNullTransition();
                            cancel(state_47_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_47.limOff");
                            //#[ transition 26 
                            vitesseConsigne = 60;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_47.limWaiting");
                            pushNullTransition();
                            state_47_subState = limWaiting;
                            state_47_active = limWaiting;
                            //#[ state state_0.state_47.limWaiting.(Entry) 
                            reg = false;
                            //#]
                            state_47_timeout = scheduleTimeout(200, "ROOT.state_0.state_47.limWaiting");
                            NOTIFY_TRANSITION_TERMINATED("26");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State limWaiting
        case limWaiting:
        {
            res = limWaiting_handleEvent();
        }
        break;
        // State limOn
        case limOn:
        {
            res = limOn_handleEvent();
        }
        break;
        // State limOffInatendu
        case limOffInatendu:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_47_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("100");
                            cancel(state_47_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_47.limOffInatendu");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_47.limOff");
                            pushNullTransition();
                            state_47_subState = limOff;
                            state_47_active = limOff;
                            state_47_timeout = scheduleTimeout(200, "ROOT.state_0.state_47.limOff");
                            NOTIFY_TRANSITION_TERMINATED("100");
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

IOxfReactive::TakeEventStatus _SysVehicule::limWaiting_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == state_47_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("29");
                    popNullTransition();
                    cancel(state_47_timeout);
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_47.limWaiting");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_47.limWaiting");
                    pushNullTransition();
                    state_47_subState = limWaiting;
                    state_47_active = limWaiting;
                    //#[ state state_0.state_47.limWaiting.(Entry) 
                    reg = false;
                    //#]
                    state_47_timeout = scheduleTimeout(200, "ROOT.state_0.state_47.limWaiting");
                    NOTIFY_TRANSITION_TERMINATED("29");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 30 
            if(speed<vitesseConsigne)
                {
                    NOTIFY_TRANSITION_STARTED("30");
                    popNullTransition();
                    cancel(state_47_timeout);
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_47.limWaiting");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_47.limOn");
                    pushNullTransition();
                    state_47_subState = limOn;
                    state_47_active = limOn;
                    //#[ state state_0.state_47.limOn.(Entry) 
                    limiteur();
                    reg = false;
                    //#]
                    state_47_timeout = scheduleTimeout(200, "ROOT.state_0.state_47.limOn");
                    NOTIFY_TRANSITION_TERMINATED("30");
                    res = eventConsumed;
                }
            else
                {
                    //## transition 115 
                    if(lim==false)
                        {
                            NOTIFY_TRANSITION_STARTED("115");
                            popNullTransition();
                            cancel(state_47_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_47.limWaiting");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_47.limOff");
                            pushNullTransition();
                            state_47_subState = limOff;
                            state_47_active = limOff;
                            state_47_timeout = scheduleTimeout(200, "ROOT.state_0.state_47.limOff");
                            NOTIFY_TRANSITION_TERMINATED("115");
                            res = eventConsumed;
                        }
                }
        }
    
    
    return res;
}

IOxfReactive::TakeEventStatus _SysVehicule::limOn_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == state_47_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("31");
                    popNullTransition();
                    cancel(state_47_timeout);
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_47.limOn");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_47.limOn");
                    pushNullTransition();
                    state_47_subState = limOn;
                    state_47_active = limOn;
                    //#[ state state_0.state_47.limOn.(Entry) 
                    limiteur();
                    reg = false;
                    //#]
                    state_47_timeout = scheduleTimeout(200, "ROOT.state_0.state_47.limOn");
                    NOTIFY_TRANSITION_TERMINATED("31");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 27 
            if(lim==false || accelPedal>9)
                {
                    NOTIFY_TRANSITION_STARTED("27");
                    popNullTransition();
                    cancel(state_47_timeout);
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_47.limOn");
                    //#[ transition 27 
                    lim=false;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_47.limOff");
                    pushNullTransition();
                    state_47_subState = limOff;
                    state_47_active = limOff;
                    state_47_timeout = scheduleTimeout(200, "ROOT.state_0.state_47.limOff");
                    NOTIFY_TRANSITION_TERMINATED("27");
                    res = eventConsumed;
                }
            else
                {
                    //## transition 99 
                    if(alpha<-12)
                        {
                            NOTIFY_TRANSITION_STARTED("99");
                            popNullTransition();
                            cancel(state_47_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_47.limOn");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_47.limOffInatendu");
                            state_47_subState = limOffInatendu;
                            state_47_active = limOffInatendu;
                            state_47_timeout = scheduleTimeout(5000, "ROOT.state_0.state_47.limOffInatendu");
                            NOTIFY_TRANSITION_TERMINATED("99");
                            res = eventConsumed;
                        }
                }
        }
    
    
    return res;
}

void _SysVehicule::state_33_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_33");
    NOTIFY_TRANSITION_STARTED("17");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_33.regOff");
    pushNullTransition();
    state_33_subState = regOff;
    state_33_active = regOff;
    state_33_timeout = scheduleTimeout(200, "ROOT.state_0.state_33.regOff");
    NOTIFY_TRANSITION_TERMINATED("17");
}

void _SysVehicule::state_33_exit() {
    switch (state_33_subState) {
        // State regOn
        case regOn:
        {
            popNullTransition();
            cancel(state_33_timeout);
            //#[ state state_0.state_33.regOn.(Exit) 
            flag = false;
            //#]
            NOTIFY_STATE_EXITED("ROOT.state_0.state_33.regOn");
        }
        break;
        // State regOff
        case regOff:
        {
            popNullTransition();
            cancel(state_33_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_33.regOff");
        }
        break;
        // State regAccel
        case regAccel:
        {
            popNullTransition();
            cancel(state_33_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_33.regAccel");
        }
        break;
        // State regAdaptatif
        case regAdaptatif:
        {
            popNullTransition();
            cancel(state_33_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_0.state_33.regAdaptatif");
        }
        break;
        default:
            break;
    }
    state_33_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_0.state_33");
}

IOxfReactive::TakeEventStatus _SysVehicule::state_33_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_33_active) {
        // State regOn
        case regOn:
        {
            res = regOn_handleEvent();
        }
        break;
        // State regOff
        case regOff:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_33_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("20");
                            popNullTransition();
                            cancel(state_33_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_33.regOff");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_33.regOff");
                            pushNullTransition();
                            state_33_subState = regOff;
                            state_33_active = regOff;
                            state_33_timeout = scheduleTimeout(200, "ROOT.state_0.state_33.regOff");
                            NOTIFY_TRANSITION_TERMINATED("20");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 18 
                    if(reg==true && speed>=30 && brakePedal < 0.2)
                        {
                            NOTIFY_TRANSITION_STARTED("18");
                            popNullTransition();
                            cancel(state_33_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_33.regOff");
                            //#[ transition 18 
                            vitesseConsigne = speed ;
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_33.regOn");
                            pushNullTransition();
                            state_33_subState = regOn;
                            state_33_active = regOn;
                            //#[ state state_0.state_33.regOn.(Entry) 
                            regulateur();
                            lim = false;
                            //#]
                            state_33_timeout = scheduleTimeout(200, "ROOT.state_0.state_33.regOn");
                            NOTIFY_TRANSITION_TERMINATED("18");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State regAccel
        case regAccel:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_33_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("24");
                            popNullTransition();
                            cancel(state_33_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_33.regAccel");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_33.regAccel");
                            pushNullTransition();
                            state_33_subState = regAccel;
                            state_33_active = regAccel;
                            state_33_timeout = scheduleTimeout(200, "ROOT.state_0.state_33.regAccel");
                            NOTIFY_TRANSITION_TERMINATED("24");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 23 
                    if(accelPedal <0.2)
                        {
                            NOTIFY_TRANSITION_STARTED("23");
                            popNullTransition();
                            cancel(state_33_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_33.regAccel");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_33.regOn");
                            pushNullTransition();
                            state_33_subState = regOn;
                            state_33_active = regOn;
                            //#[ state state_0.state_33.regOn.(Entry) 
                            regulateur();
                            lim = false;
                            //#]
                            state_33_timeout = scheduleTimeout(200, "ROOT.state_0.state_33.regOn");
                            NOTIFY_TRANSITION_TERMINATED("23");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State regAdaptatif
        case regAdaptatif:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_33_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("83");
                            popNullTransition();
                            cancel(state_33_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_33.regAdaptatif");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_33.regAdaptatif");
                            pushNullTransition();
                            state_33_subState = regAdaptatif;
                            state_33_active = regAdaptatif;
                            //#[ state state_0.state_33.regAdaptatif.(Entry) 
                            lim = false;
                            //#]
                            state_33_timeout = scheduleTimeout(200, "ROOT.state_0.state_33.regAdaptatif");
                            NOTIFY_TRANSITION_TERMINATED("83");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 85 
                    if(IS_IN(vehiculeABS) || ignition == false)
                        {
                            NOTIFY_TRANSITION_STARTED("85");
                            popNullTransition();
                            cancel(state_33_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_33.regAdaptatif");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_33.regOn");
                            pushNullTransition();
                            state_33_subState = regOn;
                            state_33_active = regOn;
                            //#[ state state_0.state_33.regOn.(Entry) 
                            regulateur();
                            lim = false;
                            //#]
                            state_33_timeout = scheduleTimeout(200, "ROOT.state_0.state_33.regOn");
                            NOTIFY_TRANSITION_TERMINATED("85");
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

IOxfReactive::TakeEventStatus _SysVehicule::regOn_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
        {
            if(getCurrentEvent() == state_33_timeout)
                {
                    NOTIFY_TRANSITION_STARTED("21");
                    popNullTransition();
                    cancel(state_33_timeout);
                    //#[ state state_0.state_33.regOn.(Exit) 
                    flag = false;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_33.regOn");
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_33.regOn");
                    pushNullTransition();
                    state_33_subState = regOn;
                    state_33_active = regOn;
                    //#[ state state_0.state_33.regOn.(Entry) 
                    regulateur();
                    lim = false;
                    //#]
                    state_33_timeout = scheduleTimeout(200, "ROOT.state_0.state_33.regOn");
                    NOTIFY_TRANSITION_TERMINATED("21");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 19 
            if(reg==false || brakePedal>0.2 || speed <30)
                {
                    NOTIFY_TRANSITION_STARTED("19");
                    popNullTransition();
                    cancel(state_33_timeout);
                    //#[ state state_0.state_33.regOn.(Exit) 
                    flag = false;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_0.state_33.regOn");
                    //#[ transition 19 
                    reg=false;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_33.regOff");
                    pushNullTransition();
                    state_33_subState = regOff;
                    state_33_active = regOff;
                    state_33_timeout = scheduleTimeout(200, "ROOT.state_0.state_33.regOff");
                    NOTIFY_TRANSITION_TERMINATED("19");
                    res = eventConsumed;
                }
            else
                {
                    //## transition 22 
                    if(accelPedal > 0.2)
                        {
                            NOTIFY_TRANSITION_STARTED("22");
                            popNullTransition();
                            cancel(state_33_timeout);
                            //#[ state state_0.state_33.regOn.(Exit) 
                            flag = false;
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_33.regOn");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_33.regAccel");
                            pushNullTransition();
                            state_33_subState = regAccel;
                            state_33_active = regAccel;
                            state_33_timeout = scheduleTimeout(200, "ROOT.state_0.state_33.regAccel");
                            NOTIFY_TRANSITION_TERMINATED("22");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 84 
                            if(IS_IN(vehiculePresent))
                                {
                                    NOTIFY_TRANSITION_STARTED("84");
                                    popNullTransition();
                                    cancel(state_33_timeout);
                                    //#[ state state_0.state_33.regOn.(Exit) 
                                    flag = false;
                                    //#]
                                    NOTIFY_STATE_EXITED("ROOT.state_0.state_33.regOn");
                                    NOTIFY_STATE_ENTERED("ROOT.state_0.state_33.regAdaptatif");
                                    pushNullTransition();
                                    state_33_subState = regAdaptatif;
                                    state_33_active = regAdaptatif;
                                    //#[ state state_0.state_33.regAdaptatif.(Entry) 
                                    lim = false;
                                    //#]
                                    state_33_timeout = scheduleTimeout(200, "ROOT.state_0.state_33.regAdaptatif");
                                    NOTIFY_TRANSITION_TERMINATED("84");
                                    res = eventConsumed;
                                }
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
    NOTIFY_TRANSITION_STARTED("14");
    NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.motorOff");
    pushNullTransition();
    state_1_subState = motorOff;
    state_1_active = motorOff;
    //#[ state state_0.state_1.motorOff.(Entry) 
    arreter();
    lim = false;
    reg = false;
    bluetooth = false;
    //#]
    state_1_timeout = scheduleTimeout(500, "ROOT.state_0.state_1.motorOff");
    NOTIFY_TRANSITION_TERMINATED("14");
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
                            NOTIFY_TRANSITION_STARTED("16");
                            popNullTransition();
                            cancel(state_1_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_1.motorOn");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.motorOn");
                            pushNullTransition();
                            state_1_subState = motorOn;
                            state_1_active = motorOn;
                            //#[ state state_0.state_1.motorOn.(Entry) 
                            demarrer();
                            bluetoothCar = true;
                            //#]
                            state_1_timeout = scheduleTimeout(500, "ROOT.state_0.state_1.motorOn");
                            NOTIFY_TRANSITION_TERMINATED("16");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 12 
                    if(key == false)
                        {
                            NOTIFY_TRANSITION_STARTED("12");
                            popNullTransition();
                            cancel(state_1_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_1.motorOn");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.motorOff");
                            pushNullTransition();
                            state_1_subState = motorOff;
                            state_1_active = motorOff;
                            //#[ state state_0.state_1.motorOff.(Entry) 
                            arreter();
                            lim = false;
                            reg = false;
                            bluetooth = false;
                            //#]
                            state_1_timeout = scheduleTimeout(500, "ROOT.state_0.state_1.motorOff");
                            NOTIFY_TRANSITION_TERMINATED("12");
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
                            NOTIFY_TRANSITION_STARTED("15");
                            popNullTransition();
                            cancel(state_1_timeout);
                            //#[ state state_0.state_1.motorOff.(Exit) 
                            bluetoothCar = false;
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_1.motorOff");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.motorOff");
                            pushNullTransition();
                            state_1_subState = motorOff;
                            state_1_active = motorOff;
                            //#[ state state_0.state_1.motorOff.(Entry) 
                            arreter();
                            lim = false;
                            reg = false;
                            bluetooth = false;
                            //#]
                            state_1_timeout = scheduleTimeout(500, "ROOT.state_0.state_1.motorOff");
                            NOTIFY_TRANSITION_TERMINATED("15");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 13 
                    if(key == true)
                        {
                            NOTIFY_TRANSITION_STARTED("13");
                            popNullTransition();
                            cancel(state_1_timeout);
                            //#[ state state_0.state_1.motorOff.(Exit) 
                            bluetoothCar = false;
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.state_0.state_1.motorOff");
                            NOTIFY_STATE_ENTERED("ROOT.state_0.state_1.motorOn");
                            pushNullTransition();
                            state_1_subState = motorOn;
                            state_1_active = motorOn;
                            //#[ state state_0.state_1.motorOn.(Entry) 
                            demarrer();
                            bluetoothCar = true;
                            //#]
                            state_1_timeout = scheduleTimeout(500, "ROOT.state_0.state_1.motorOn");
                            NOTIFY_TRANSITION_TERMINATED("13");
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
    aomsAttributes->addAttribute("reg", x2String(myReal->reg));
    aomsAttributes->addAttribute("lim", x2String(myReal->lim));
    aomsAttributes->addAttribute("bluetooth", x2String(myReal->bluetooth));
    aomsAttributes->addAttribute("bluetoothCar", x2String(myReal->bluetoothCar));
    aomsAttributes->addAttribute("phoneUnlocked", x2String(myReal->phoneUnlocked));
    aomsAttributes->addAttribute("code", x2String(myReal->code));
    aomsAttributes->addAttribute("user", x2String(myReal->user));
    aomsAttributes->addAttribute("throttle2", x2String(myReal->throttle2));
    aomsAttributes->addAttribute("accelPedal2", x2String(myReal->accelPedal2));
    aomsAttributes->addAttribute("brakePedal2", x2String(myReal->brakePedal2));
    aomsAttributes->addAttribute("speed2", x2String(myReal->speed2));
    aomsAttributes->addAttribute("secondVehicule", x2String(myReal->secondVehicule));
    aomsAttributes->addAttribute("fspeed2", x2String(myReal->fspeed2));
    aomsAttributes->addAttribute("sound", x2String(myReal->sound));
    aomsAttributes->addAttribute("sms", x2String(myReal->sms));
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
    state_33_serializeStates(aomsState);
    state_47_serializeStates(aomsState);
    state_51_serializeStates(aomsState);
    state_54_serializeStates(aomsState);
    state_57_serializeStates(aomsState);
    state_58_serializeStates(aomsState);
    state_67_serializeStates(aomsState);
    state_68_serializeStates(aomsState);
    state_73_serializeStates(aomsState);
    state_77_serializeStates(aomsState);
    state_80_serializeStates(aomsState);
    state_89_serializeStates(aomsState);
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

void OMAnimated_SysVehicule::state_89_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_89");
    switch (myReal->state_89_subState) {
        case _SysVehicule::SMS:
        {
            SMS_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::SmsNotReadyToShow:
        {
            SmsNotReadyToShow_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimated_SysVehicule::SmsNotReadyToShow_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_89.SmsNotReadyToShow");
}

void OMAnimated_SysVehicule::SMS_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_89.SMS");
}

void OMAnimated_SysVehicule::state_80_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_80");
    switch (myReal->state_80_subState) {
        case _SysVehicule::musicoff:
        {
            musicoff_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::song1:
        {
            song1_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::song2:
        {
            song2_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::song3:
        {
            song3_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::song1_2:
        {
            song1_2_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimated_SysVehicule::song3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_80.song3");
}

void OMAnimated_SysVehicule::song2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_80.song2");
}

void OMAnimated_SysVehicule::song1_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_80.song1_2");
}

void OMAnimated_SysVehicule::song1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_80.song1");
}

void OMAnimated_SysVehicule::musicoff_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_80.musicoff");
}

void OMAnimated_SysVehicule::state_77_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_77");
    switch (myReal->state_77_subState) {
        case _SysVehicule::safeSpeed:
        {
            safeSpeed_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::dangerBrake:
        {
            dangerBrake_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimated_SysVehicule::safeSpeed_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_77.safeSpeed");
}

void OMAnimated_SysVehicule::dangerBrake_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_77.dangerBrake");
}

void OMAnimated_SysVehicule::state_73_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_73");
    switch (myReal->state_73_subState) {
        case _SysVehicule::vehiculeABS:
        {
            vehiculeABS_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::vehiculePresent:
        {
            vehiculePresent_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimated_SysVehicule::vehiculePresent_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_73.vehiculePresent");
}

void OMAnimated_SysVehicule::vehiculeABS_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_73.vehiculeABS");
}

void OMAnimated_SysVehicule::state_68_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_68");
    switch (myReal->state_68_subState) {
        case _SysVehicule::Accelerartion2:
        {
            Accelerartion2_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::Neutre2:
        {
            Neutre2_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::Freint2:
        {
            Freint2_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimated_SysVehicule::Neutre2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_68.Neutre2");
}

void OMAnimated_SysVehicule::Freint2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_68.Freint2");
}

void OMAnimated_SysVehicule::Accelerartion2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_68.Accelerartion2");
}

void OMAnimated_SysVehicule::state_67_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_67");
    if(myReal->state_67_subState == _SysVehicule::Calcul_Vitesse_Distance2)
        {
            Calcul_Vitesse_Distance2_serializeStates(aomsState);
        }
}

void OMAnimated_SysVehicule::Calcul_Vitesse_Distance2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_67.Calcul_Vitesse_Distance2");
}

void OMAnimated_SysVehicule::state_58_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_58");
    switch (myReal->state_58_subState) {
        case _SysVehicule::phoneCode:
        {
            phoneCode_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::unlockedPhone:
        {
            unlockedPhone_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::bluetoothWaiting:
        {
            bluetoothWaiting_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::state_58_bluetoothOn:
        {
            state_58_bluetoothOn_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimated_SysVehicule::unlockedPhone_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_58.unlockedPhone");
}

void OMAnimated_SysVehicule::phoneCode_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_58.phoneCode");
}

void OMAnimated_SysVehicule::bluetoothWaiting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_58.bluetoothWaiting");
}

void OMAnimated_SysVehicule::state_58_bluetoothOn_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_58.bluetoothOn");
}

void OMAnimated_SysVehicule::state_57_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_57");
    switch (myReal->state_57_subState) {
        case _SysVehicule::phone2Initial:
        {
            phone2Initial_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::phone2Calling:
        {
            phone2Calling_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::callingAccept:
        {
            callingAccept_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::CallingDeny:
        {
            CallingDeny_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::Phone2Ready:
        {
            Phone2Ready_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimated_SysVehicule::Phone2Ready_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_57.Phone2Ready");
}

void OMAnimated_SysVehicule::phone2Initial_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_57.phone2Initial");
}

void OMAnimated_SysVehicule::phone2Calling_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_57.phone2Calling");
}

void OMAnimated_SysVehicule::CallingDeny_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_57.CallingDeny");
}

void OMAnimated_SysVehicule::callingAccept_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_57.callingAccept");
}

void OMAnimated_SysVehicule::state_54_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_54");
    switch (myReal->state_54_subState) {
        case _SysVehicule::bluetoothOff:
        {
            bluetoothOff_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::bluetoothOn:
        {
            bluetoothOn_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimated_SysVehicule::bluetoothOn_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_54.bluetoothOn");
}

void OMAnimated_SysVehicule::bluetoothOff_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_54.bluetoothOff");
}

void OMAnimated_SysVehicule::state_51_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_51");
    switch (myReal->state_51_subState) {
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
        case _SysVehicule::minusPlus:
        {
            minusPlus_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::MajorPlus:
        {
            MajorPlus_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::NeutreSet:
        {
            NeutreSet_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::setoff:
        {
            setoff_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimated_SysVehicule::setoff_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_51.setoff");
}

void OMAnimated_SysVehicule::NeutreSet_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_51.NeutreSet");
}

void OMAnimated_SysVehicule::minusPlus_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_51.minusPlus");
}

void OMAnimated_SysVehicule::Minus_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_51.Minus");
}

void OMAnimated_SysVehicule::MajorPlus_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_51.MajorPlus");
}

void OMAnimated_SysVehicule::Major_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_51.Major");
}

void OMAnimated_SysVehicule::state_47_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_47");
    switch (myReal->state_47_subState) {
        case _SysVehicule::limOff:
        {
            limOff_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::limWaiting:
        {
            limWaiting_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::limOn:
        {
            limOn_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::limOffInatendu:
        {
            limOffInatendu_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimated_SysVehicule::limWaiting_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_47.limWaiting");
}

void OMAnimated_SysVehicule::limOn_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_47.limOn");
}

void OMAnimated_SysVehicule::limOffInatendu_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_47.limOffInatendu");
}

void OMAnimated_SysVehicule::limOff_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_47.limOff");
}

void OMAnimated_SysVehicule::state_33_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_33");
    switch (myReal->state_33_subState) {
        case _SysVehicule::regOn:
        {
            regOn_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::regOff:
        {
            regOff_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::regAccel:
        {
            regAccel_serializeStates(aomsState);
        }
        break;
        case _SysVehicule::regAdaptatif:
        {
            regAdaptatif_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimated_SysVehicule::regOn_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_33.regOn");
}

void OMAnimated_SysVehicule::regOff_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_33.regOff");
}

void OMAnimated_SysVehicule::regAdaptatif_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_33.regAdaptatif");
}

void OMAnimated_SysVehicule::regAccel_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0.state_33.regAccel");
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
//#]

IMPLEMENT_REACTIVE_META_P(_SysVehicule, _MonPkg, _MonPkg, false, OMAnimated_SysVehicule)

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setAccelPedal_double, "setAccelPedal", FALSE, "setAccelPedal(double)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setAccelPedal_double, _SysVehicule, setAccelPedal(p_accelPedal), NO_OP())

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setAccelPedal2_double, "setAccelPedal2", FALSE, "setAccelPedal2(double)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setAccelPedal2_double, _SysVehicule, setAccelPedal2(p_accelPedal2), NO_OP())

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setAlpha_int, "setAlpha", FALSE, "setAlpha(int)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setAlpha_int, _SysVehicule, setAlpha(p_alpha), NO_OP())

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setBluetooth_bool, "setBluetooth", FALSE, "setBluetooth(bool)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setBluetooth_bool, _SysVehicule, setBluetooth(p_bluetooth), NO_OP())

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setBrakePedal_double, "setBrakePedal", FALSE, "setBrakePedal(double)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setBrakePedal_double, _SysVehicule, setBrakePedal(p_brakePedal), NO_OP())

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setBrakePedal2_double, "setBrakePedal2", FALSE, "setBrakePedal2(double)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setBrakePedal2_double, _SysVehicule, setBrakePedal2(p_brakePedal2), NO_OP())

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setKey_bool, "setKey", FALSE, "setKey(bool)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setKey_bool, _SysVehicule, setKey(p_key), NO_OP())

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setLim_bool, "setLim", FALSE, "setLim(bool)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setLim_bool, _SysVehicule, setLim(p_lim), NO_OP())

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setReg_bool, "setReg", FALSE, "setReg(bool)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setReg_bool, _SysVehicule, setReg(p_reg), NO_OP())

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setSecondVehicule_bool, "setSecondVehicule", FALSE, "setSecondVehicule(bool)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setSecondVehicule_bool, _SysVehicule, setSecondVehicule(p_secondVehicule), NO_OP())

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setSms_int, "setSms", FALSE, "setSms(int)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setSms_int, _SysVehicule, setSms(p_sms), NO_OP())

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setThrottle_double, "setThrottle", FALSE, "setThrottle(double)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setThrottle_double, _SysVehicule, setThrottle(p_throttle), NO_OP())

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setThrottle2_double, "setThrottle2", FALSE, "setThrottle2(double)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setThrottle2_double, _SysVehicule, setThrottle2(p_throttle2), NO_OP())

IMPLEMENT_META_OP(OMAnimated_SysVehicule, _MonPkg__SysVehicule_setUser_int, "setUser", FALSE, "setUser(int)", 1)

IMPLEMENT_OP_CALL(_MonPkg__SysVehicule_setUser_int, _SysVehicule, setUser(p_user), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\_SysVehicule.cpp
*********************************************************************/
