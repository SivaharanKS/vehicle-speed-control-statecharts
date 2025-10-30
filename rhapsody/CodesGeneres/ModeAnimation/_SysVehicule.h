/*********************************************************************
	Rhapsody	: 9.0.2 
	Login		: student
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: _SysVehicule
//!	Generated Date	: Tue, 28, Oct 2025  
	File Path	: CodesGeneres\ModeAnimation\_SysVehicule.h
*********************************************************************/

#ifndef _SysVehicule_H
#define _SysVehicule_H

//## dependency math
#include <math.h>
//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Windows.h"
//## auto_generated
#include "stdlib.h"
//## auto_generated
#include "stdio.h"
//## auto_generated
#include "string.h"
//## auto_generated
#include "stdint.h"
//## auto_generated
#include "tchar.h"
//## auto_generated
#include "_MonPkg.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//#[ ignore
#define OMAnim__MonPkg__SysVehicule_setAccelPedal_double_ARGS_DECLARATION double p_accelPedal;

#define OMAnim__MonPkg__SysVehicule_setAccelPedal2_double_ARGS_DECLARATION double p_accelPedal2;

#define OMAnim__MonPkg__SysVehicule_setAlpha_int_ARGS_DECLARATION int p_alpha;

#define OMAnim__MonPkg__SysVehicule_setBluetooth_bool_ARGS_DECLARATION bool p_bluetooth;

#define OMAnim__MonPkg__SysVehicule_setBrakePedal_double_ARGS_DECLARATION double p_brakePedal;

#define OMAnim__MonPkg__SysVehicule_setBrakePedal2_double_ARGS_DECLARATION double p_brakePedal2;

#define OMAnim__MonPkg__SysVehicule_setKey_bool_ARGS_DECLARATION bool p_key;

#define OMAnim__MonPkg__SysVehicule_setLim_bool_ARGS_DECLARATION bool p_lim;

#define OMAnim__MonPkg__SysVehicule_setReg_bool_ARGS_DECLARATION bool p_reg;

#define OMAnim__MonPkg__SysVehicule_setSecondVehicule_bool_ARGS_DECLARATION bool p_secondVehicule;

#define OMAnim__MonPkg__SysVehicule_setThrottle_double_ARGS_DECLARATION double p_throttle;

#define OMAnim__MonPkg__SysVehicule_setThrottle2_double_ARGS_DECLARATION double p_throttle2;

#define OMAnim__MonPkg__SysVehicule_setUser_int_ARGS_DECLARATION int p_user;
//#]

//## package _MonPkg

//## class _SysVehicule
class _SysVehicule : public OMThread, public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimated_SysVehicule;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
    //## operation accelerer(double)
    double accelerer(double accelPedal);
    
    //## operation arreter()
    void arreter();
    
    //## operation demarrer()
    void demarrer();
    
    //## operation calcul_vitesse_distance(double)
    void calcul_vitesse_distance(double& throttle);
    
    //## operation freiner(double)
    double freiner(double brakePedal);
    
    ////    Additional operations    ////
    
    ////    Attributes    ////

protected :

    int MAX_BRAKE;		//## attribute MAX_BRAKE
    
    int MAX_SPEED;		//## attribute MAX_SPEED
    
    double MAX_THROTTLE;		//## attribute MAX_THROTTLE
    
    double airResistance;		//## attribute airResistance
    
    double brakePedal;		//## attribute brakePedal
    
    int distance;		//## attribute distance
    
    double fdist;		//## attribute fdist
    
    double fspeed;		//## attribute fspeed
    
    bool ignition;		//## attribute ignition
    
    int speed;		//## attribute speed
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
    double throttle;		//## attribute throttle

public :

    //## operation init()
    void init();

protected :

    bool _simu;		//## attribute _simu
    
    double accelPedal;		//## attribute accelPedal
    
    int alpha;		//## attribute alpha
    
    double error;		//## attribute error
    
    double steady;		//## attribute steady
    
    double vitesseConsigne;		//## attribute vitesseConsigne

public :

    //## auto_generated
    _SysVehicule(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~_SysVehicule();
    
    //## auto_generated
    int getMAX_BRAKE();
    
    //## auto_generated
    void setMAX_BRAKE(int p_MAX_BRAKE);
    
    //## auto_generated
    int getMAX_SPEED();
    
    //## auto_generated
    void setMAX_SPEED(int p_MAX_SPEED);
    
    //## auto_generated
    double getMAX_THROTTLE();
    
    //## auto_generated
    void setMAX_THROTTLE(double p_MAX_THROTTLE);
    
    //## auto_generated
    bool get_simu();
    
    //## auto_generated
    void set_simu(bool p__simu);
    
    //## auto_generated
    double getAccelPedal();
    
    //## auto_generated
    void setAccelPedal(double p_accelPedal);
    
    //## auto_generated
    double getAirResistance();
    
    //## auto_generated
    void setAirResistance(double p_airResistance);
    
    //## auto_generated
    int getAlpha();
    
    //## auto_generated
    void setAlpha(int p_alpha);
    
    //## auto_generated
    double getBrakePedal();
    
    //## auto_generated
    void setBrakePedal(double p_brakePedal);
    
    //## auto_generated
    int getDistance();
    
    //## auto_generated
    void setDistance(int p_distance);
    
    //## auto_generated
    double getError();
    
    //## auto_generated
    void setError(double p_error);
    
    //## auto_generated
    double getFdist();
    
    //## auto_generated
    void setFdist(double p_fdist);
    
    //## auto_generated
    double getFspeed();
    
    //## auto_generated
    void setFspeed(double p_fspeed);
    
    //## auto_generated
    bool getIgnition();
    
    //## auto_generated
    int getSpeed();
    
    //## auto_generated
    double getSteady();
    
    //## auto_generated
    void setSteady(double p_steady);
    
    //## auto_generated
    double getThrottle();
    
    //## auto_generated
    double getVitesseConsigne();
    
    //## auto_generated
    virtual bool startBehavior();
    
    //## operation CalculVitesse2(double)
    void CalculVitesse2(double throttle);
    
    //## operation accelerer2(double)
    double accelerer2(double accelPedal2);
    
    //## operation freiner2(double)
    double freiner2(double brakePedal2);
    
    //## operation limiteur()
    void limiteur();
    
    //## operation music()
    void music();
    
    //## operation regulateur()
    void regulateur();
    
    //## operation regulateurAdaptatif()
    void regulateurAdaptatif();
    
    //## operation setMajor()
    void setMajor();
    
    //## operation setMinus()
    void setMinus();
    
    //## operation testCode()
    void testCode();
    
    //## auto_generated
    double getDistanceEntreVoiture();
    
    //## auto_generated
    void setDistanceEntreVoiture(double p_DistanceEntreVoiture);
    
    //## auto_generated
    double getAccelPedal2();
    
    //## auto_generated
    void setAccelPedal2(double p_accelPedal2);
    
    //## auto_generated
    bool getBluetooth();
    
    //## auto_generated
    void setBluetooth(bool p_bluetooth);
    
    //## auto_generated
    bool getBluetoothCar();
    
    //## auto_generated
    void setBluetoothCar(bool p_bluetoothCar);
    
    //## auto_generated
    double getBrakePedal2();
    
    //## auto_generated
    void setBrakePedal2(double p_brakePedal2);
    
    //## auto_generated
    int getCode();
    
    //## auto_generated
    void setCode(int p_code);
    
    //## auto_generated
    int getDistance2();
    
    //## auto_generated
    void setDistance2(int p_distance2);
    
    //## auto_generated
    bool getFlag();
    
    //## auto_generated
    void setFlag(bool p_flag);
    
    //## auto_generated
    double getFspeed2();
    
    //## auto_generated
    void setFspeed2(double p_fspeed2);
    
    //## auto_generated
    void setIgnition(bool p_ignition);
    
    //## auto_generated
    bool getKey();
    
    //## auto_generated
    void setKey(bool p_key);
    
    //## auto_generated
    bool getLim();
    
    //## auto_generated
    void setLim(bool p_lim);
    
    //## auto_generated
    bool getPhoneUnlocked();
    
    //## auto_generated
    void setPhoneUnlocked(bool p_phoneUnlocked);
    
    //## auto_generated
    bool getReg();
    
    //## auto_generated
    void setReg(bool p_reg);
    
    //## auto_generated
    bool getSecondVehicule();
    
    //## auto_generated
    void setSecondVehicule(bool p_secondVehicule);
    
    //## auto_generated
    int getSound();
    
    //## auto_generated
    void setSound(int p_sound);
    
    //## auto_generated
    void setSpeed(int p_speed);
    
    //## auto_generated
    int getSpeed2();
    
    //## auto_generated
    void setSpeed2(int p_speed2);
    
    //## auto_generated
    void setThrottle(double p_throttle);
    
    //## auto_generated
    double getThrottle2();
    
    //## auto_generated
    void setThrottle2(double p_throttle2);
    
    //## auto_generated
    int getUser();
    
    //## auto_generated
    void setUser(int p_user);
    
    //## auto_generated
    void setVitesseConsigne(double p_vitesseConsigne);

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    double DistanceEntreVoiture;		//## attribute DistanceEntreVoiture
    
    double accelPedal2;		//## attribute accelPedal2
    
    bool bluetooth;		//## attribute bluetooth
    
    bool bluetoothCar;		//## attribute bluetoothCar
    
    double brakePedal2;		//## attribute brakePedal2
    
    int code;		//## attribute code
    
    int distance2;		//## attribute distance2
    
    bool flag;		//## attribute flag
    
    double fspeed2;		//## attribute fspeed2
    
    bool key;		//## attribute key
    
    bool lim;		//## attribute lim
    
    bool phoneUnlocked;		//## attribute phoneUnlocked
    
    bool reg;		//## attribute reg
    
    bool secondVehicule;		//## attribute secondVehicule
    
    int sound;		//## attribute sound
    
    int speed2;		//## attribute speed2
    
    double throttle2;		//## attribute throttle2
    
    int user;		//## attribute user

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // state_4:
    //## statechart_method
    inline bool state_4_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_4TakeNull();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_4_handleEvent();
    
    // state_0:
    //## statechart_method
    inline bool state_0_IN() const;
    
    //## statechart_method
    void state_0_entDef();
    
    //## statechart_method
    void state_0_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_0_processEvent();
    
    // state_9:
    //## statechart_method
    inline bool state_9_IN() const;
    
    //## statechart_method
    void state_9_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_9_processEvent();
    
    // Neutre:
    //## statechart_method
    inline bool Neutre_IN() const;
    
    // Freint:
    //## statechart_method
    inline bool Freint_IN() const;
    
    // Accelerartion:
    //## statechart_method
    inline bool Accelerartion_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Accelerartion_handleEvent();
    
    // state_80:
    //## statechart_method
    inline bool state_80_IN() const;
    
    //## statechart_method
    void state_80_entDef();
    
    //## statechart_method
    void state_80_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_80_processEvent();
    
    // song3:
    //## statechart_method
    inline bool song3_IN() const;
    
    // song2:
    //## statechart_method
    inline bool song2_IN() const;
    
    // Song1:
    //## statechart_method
    inline bool Song1_IN() const;
    
    // musicoff:
    //## statechart_method
    inline bool musicoff_IN() const;
    
    // state_77:
    //## statechart_method
    inline bool state_77_IN() const;
    
    //## statechart_method
    void state_77_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_77_processEvent();
    
    // safeSpeed:
    //## statechart_method
    inline bool safeSpeed_IN() const;
    
    // dangerBrake:
    //## statechart_method
    inline bool dangerBrake_IN() const;
    
    // state_73:
    //## statechart_method
    inline bool state_73_IN() const;
    
    //## statechart_method
    void state_73_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_73_processEvent();
    
    // vehiculePresent:
    //## statechart_method
    inline bool vehiculePresent_IN() const;
    
    // vehiculeABS:
    //## statechart_method
    inline bool vehiculeABS_IN() const;
    
    // state_68:
    //## statechart_method
    inline bool state_68_IN() const;
    
    //## statechart_method
    void state_68_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_68_processEvent();
    
    // Neutre2:
    //## statechart_method
    inline bool Neutre2_IN() const;
    
    // Freint2:
    //## statechart_method
    inline bool Freint2_IN() const;
    
    // Accelerartion2:
    //## statechart_method
    inline bool Accelerartion2_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus Accelerartion2_handleEvent();
    
    // state_67:
    //## statechart_method
    inline bool state_67_IN() const;
    
    //## statechart_method
    void state_67_entDef();
    
    //## statechart_method
    void state_67_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_67_processEvent();
    
    // Calcul_Vitesse_Distance2:
    //## statechart_method
    inline bool Calcul_Vitesse_Distance2_IN() const;
    
    // state_58:
    //## statechart_method
    inline bool state_58_IN() const;
    
    //## statechart_method
    void state_58_entDef();
    
    //## statechart_method
    void state_58_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_58_processEvent();
    
    // unlockedPhone:
    //## statechart_method
    inline bool unlockedPhone_IN() const;
    
    // phoneCode:
    //## statechart_method
    inline bool phoneCode_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus phoneCode_handleEvent();
    
    // bluetoothWaiting:
    //## statechart_method
    inline bool bluetoothWaiting_IN() const;
    
    // state_58_bluetoothOn:
    //## statechart_method
    inline bool state_58_bluetoothOn_IN() const;
    
    // state_57:
    //## statechart_method
    inline bool state_57_IN() const;
    
    //## statechart_method
    void state_57_entDef();
    
    //## statechart_method
    void state_57_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_57_processEvent();
    
    // phone2Initial:
    //## statechart_method
    inline bool phone2Initial_IN() const;
    
    // phone2Calling:
    //## statechart_method
    inline bool phone2Calling_IN() const;
    
    // callingDeny:
    //## statechart_method
    inline bool callingDeny_IN() const;
    
    // callingAccept:
    //## statechart_method
    inline bool callingAccept_IN() const;
    
    // state_54:
    //## statechart_method
    inline bool state_54_IN() const;
    
    //## statechart_method
    void state_54_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_54_processEvent();
    
    // bluetoothOn:
    //## statechart_method
    inline bool bluetoothOn_IN() const;
    
    // bluetoothOff:
    //## statechart_method
    inline bool bluetoothOff_IN() const;
    
    // state_51:
    //## statechart_method
    inline bool state_51_IN() const;
    
    //## statechart_method
    void state_51_entDef();
    
    //## statechart_method
    void state_51_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_51_processEvent();
    
    // setoff:
    //## statechart_method
    inline bool setoff_IN() const;
    
    // NeutreSet:
    //## statechart_method
    inline bool NeutreSet_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus NeutreSet_handleEvent();
    
    // minusPlus:
    //## statechart_method
    inline bool minusPlus_IN() const;
    
    // Minus:
    //## statechart_method
    inline bool Minus_IN() const;
    
    // MajorPlus:
    //## statechart_method
    inline bool MajorPlus_IN() const;
    
    // Major:
    //## statechart_method
    inline bool Major_IN() const;
    
    // state_47:
    //## statechart_method
    inline bool state_47_IN() const;
    
    //## statechart_method
    void state_47_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_47_processEvent();
    
    // limWaiting:
    //## statechart_method
    inline bool limWaiting_IN() const;
    
    // limOn:
    //## statechart_method
    inline bool limOn_IN() const;
    
    // limOff:
    //## statechart_method
    inline bool limOff_IN() const;
    
    // state_33:
    //## statechart_method
    inline bool state_33_IN() const;
    
    //## statechart_method
    void state_33_entDef();
    
    //## statechart_method
    void state_33_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_33_processEvent();
    
    // regOn:
    //## statechart_method
    inline bool regOn_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus regOn_handleEvent();
    
    // regOff:
    //## statechart_method
    inline bool regOff_IN() const;
    
    // regAdaptatif:
    //## statechart_method
    inline bool regAdaptatif_IN() const;
    
    // regAccel:
    //## statechart_method
    inline bool regAccel_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus regAccel_handleEvent();
    
    // state_2:
    //## statechart_method
    inline bool state_2_IN() const;
    
    //## statechart_method
    void state_2_entDef();
    
    //## statechart_method
    void state_2_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_2_processEvent();
    
    // Calcul_Vitesse_Distance:
    //## statechart_method
    inline bool Calcul_Vitesse_Distance_IN() const;
    
    // state_1:
    //## statechart_method
    inline bool state_1_IN() const;
    
    //## statechart_method
    void state_1_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_1_processEvent();
    
    // motorOn:
    //## statechart_method
    inline bool motorOn_IN() const;
    
    // motorOff:
    //## statechart_method
    inline bool motorOff_IN() const;

protected :

//#[ ignore
    enum _SysVehicule_Enum {
        OMNonState = 0,
        state_4 = 1,
        state_0 = 2,
        state_9 = 3,
        Neutre = 4,
        Freint = 5,
        Accelerartion = 6,
        state_80 = 7,
        song3 = 8,
        song2 = 9,
        Song1 = 10,
        musicoff = 11,
        state_77 = 12,
        safeSpeed = 13,
        dangerBrake = 14,
        state_73 = 15,
        vehiculePresent = 16,
        vehiculeABS = 17,
        state_68 = 18,
        Neutre2 = 19,
        Freint2 = 20,
        Accelerartion2 = 21,
        state_67 = 22,
        Calcul_Vitesse_Distance2 = 23,
        state_58 = 24,
        unlockedPhone = 25,
        phoneCode = 26,
        bluetoothWaiting = 27,
        state_58_bluetoothOn = 28,
        state_57 = 29,
        phone2Initial = 30,
        phone2Calling = 31,
        callingDeny = 32,
        callingAccept = 33,
        state_54 = 34,
        bluetoothOn = 35,
        bluetoothOff = 36,
        state_51 = 37,
        setoff = 38,
        NeutreSet = 39,
        minusPlus = 40,
        Minus = 41,
        MajorPlus = 42,
        Major = 43,
        state_47 = 44,
        limWaiting = 45,
        limOn = 46,
        limOff = 47,
        state_33 = 48,
        regOn = 49,
        regOff = 50,
        regAdaptatif = 51,
        regAccel = 52,
        state_2 = 53,
        Calcul_Vitesse_Distance = 54,
        state_1 = 55,
        motorOn = 56,
        motorOff = 57
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_9_subState;
    
    int state_9_active;
    
    IOxfTimeout* state_9_timeout;
    
    int state_80_subState;
    
    int state_80_active;
    
    int state_77_subState;
    
    int state_77_active;
    
    int state_73_subState;
    
    int state_73_active;
    
    IOxfTimeout* state_73_timeout;
    
    int state_68_subState;
    
    int state_68_active;
    
    IOxfTimeout* state_68_timeout;
    
    int state_67_subState;
    
    int state_67_active;
    
    IOxfTimeout* state_67_timeout;
    
    int state_58_subState;
    
    int state_58_active;
    
    int state_57_subState;
    
    int state_57_active;
    
    IOxfTimeout* state_57_timeout;
    
    int state_54_subState;
    
    int state_54_active;
    
    int state_51_subState;
    
    int state_51_active;
    
    IOxfTimeout* state_51_timeout;
    
    int state_47_subState;
    
    int state_47_active;
    
    IOxfTimeout* state_47_timeout;
    
    int state_33_subState;
    
    int state_33_active;
    
    IOxfTimeout* state_33_timeout;
    
    int state_2_subState;
    
    int state_2_active;
    
    IOxfTimeout* state_2_timeout;
    
    int state_1_subState;
    
    int state_1_active;
    
    IOxfTimeout* state_1_timeout;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(_MonPkg__SysVehicule_setAccelPedal_double)

DECLARE_OPERATION_CLASS(_MonPkg__SysVehicule_setAccelPedal2_double)

DECLARE_OPERATION_CLASS(_MonPkg__SysVehicule_setAlpha_int)

DECLARE_OPERATION_CLASS(_MonPkg__SysVehicule_setBluetooth_bool)

DECLARE_OPERATION_CLASS(_MonPkg__SysVehicule_setBrakePedal_double)

DECLARE_OPERATION_CLASS(_MonPkg__SysVehicule_setBrakePedal2_double)

DECLARE_OPERATION_CLASS(_MonPkg__SysVehicule_setKey_bool)

DECLARE_OPERATION_CLASS(_MonPkg__SysVehicule_setLim_bool)

DECLARE_OPERATION_CLASS(_MonPkg__SysVehicule_setReg_bool)

DECLARE_OPERATION_CLASS(_MonPkg__SysVehicule_setSecondVehicule_bool)

DECLARE_OPERATION_CLASS(_MonPkg__SysVehicule_setThrottle_double)

DECLARE_OPERATION_CLASS(_MonPkg__SysVehicule_setThrottle2_double)

DECLARE_OPERATION_CLASS(_MonPkg__SysVehicule_setUser_int)

//#[ ignore
class OMAnimated_SysVehicule : virtual public AOMInstance {
    DECLARE_REACTIVE_META(_SysVehicule, OMAnimated_SysVehicule)
    
    DECLARE_META_OP(_MonPkg__SysVehicule_setAccelPedal_double)
    
    DECLARE_META_OP(_MonPkg__SysVehicule_setAccelPedal2_double)
    
    DECLARE_META_OP(_MonPkg__SysVehicule_setAlpha_int)
    
    DECLARE_META_OP(_MonPkg__SysVehicule_setBluetooth_bool)
    
    DECLARE_META_OP(_MonPkg__SysVehicule_setBrakePedal_double)
    
    DECLARE_META_OP(_MonPkg__SysVehicule_setBrakePedal2_double)
    
    DECLARE_META_OP(_MonPkg__SysVehicule_setKey_bool)
    
    DECLARE_META_OP(_MonPkg__SysVehicule_setLim_bool)
    
    DECLARE_META_OP(_MonPkg__SysVehicule_setReg_bool)
    
    DECLARE_META_OP(_MonPkg__SysVehicule_setSecondVehicule_bool)
    
    DECLARE_META_OP(_MonPkg__SysVehicule_setThrottle_double)
    
    DECLARE_META_OP(_MonPkg__SysVehicule_setThrottle2_double)
    
    DECLARE_META_OP(_MonPkg__SysVehicule_setUser_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_0_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Neutre_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Freint_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Accelerartion_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_80_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void song3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void song2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Song1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void musicoff_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_77_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void safeSpeed_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void dangerBrake_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_73_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void vehiculePresent_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void vehiculeABS_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_68_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Neutre2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Freint2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Accelerartion2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_67_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Calcul_Vitesse_Distance2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_58_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void unlockedPhone_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void phoneCode_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void bluetoothWaiting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_58_bluetoothOn_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_57_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void phone2Initial_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void phone2Calling_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void callingDeny_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void callingAccept_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_54_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void bluetoothOn_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void bluetoothOff_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_51_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void setoff_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void NeutreSet_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void minusPlus_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Minus_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void MajorPlus_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Major_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_47_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void limWaiting_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void limOn_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void limOff_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_33_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void regOn_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void regOff_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void regAdaptatif_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void regAccel_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Calcul_Vitesse_Distance_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void motorOn_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void motorOff_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool _SysVehicule::rootState_IN() const {
    return true;
}

inline bool _SysVehicule::state_4_IN() const {
    return rootState_subState == state_4;
}

inline bool _SysVehicule::state_0_IN() const {
    return rootState_subState == state_0;
}

inline bool _SysVehicule::state_9_IN() const {
    return state_0_IN();
}

inline bool _SysVehicule::Neutre_IN() const {
    return state_9_subState == Neutre;
}

inline bool _SysVehicule::Freint_IN() const {
    return state_9_subState == Freint;
}

inline bool _SysVehicule::Accelerartion_IN() const {
    return state_9_subState == Accelerartion;
}

inline bool _SysVehicule::state_80_IN() const {
    return state_0_IN();
}

inline bool _SysVehicule::song3_IN() const {
    return state_80_subState == song3;
}

inline bool _SysVehicule::song2_IN() const {
    return state_80_subState == song2;
}

inline bool _SysVehicule::Song1_IN() const {
    return state_80_subState == Song1;
}

inline bool _SysVehicule::musicoff_IN() const {
    return state_80_subState == musicoff;
}

inline bool _SysVehicule::state_77_IN() const {
    return state_0_IN();
}

inline bool _SysVehicule::safeSpeed_IN() const {
    return state_77_subState == safeSpeed;
}

inline bool _SysVehicule::dangerBrake_IN() const {
    return state_77_subState == dangerBrake;
}

inline bool _SysVehicule::state_73_IN() const {
    return state_0_IN();
}

inline bool _SysVehicule::vehiculePresent_IN() const {
    return state_73_subState == vehiculePresent;
}

inline bool _SysVehicule::vehiculeABS_IN() const {
    return state_73_subState == vehiculeABS;
}

inline bool _SysVehicule::state_68_IN() const {
    return state_0_IN();
}

inline bool _SysVehicule::Neutre2_IN() const {
    return state_68_subState == Neutre2;
}

inline bool _SysVehicule::Freint2_IN() const {
    return state_68_subState == Freint2;
}

inline bool _SysVehicule::Accelerartion2_IN() const {
    return state_68_subState == Accelerartion2;
}

inline bool _SysVehicule::state_67_IN() const {
    return state_0_IN();
}

inline bool _SysVehicule::Calcul_Vitesse_Distance2_IN() const {
    return state_67_subState == Calcul_Vitesse_Distance2;
}

inline bool _SysVehicule::state_58_IN() const {
    return state_0_IN();
}

inline bool _SysVehicule::unlockedPhone_IN() const {
    return state_58_subState == unlockedPhone;
}

inline bool _SysVehicule::phoneCode_IN() const {
    return state_58_subState == phoneCode;
}

inline bool _SysVehicule::bluetoothWaiting_IN() const {
    return state_58_subState == bluetoothWaiting;
}

inline bool _SysVehicule::state_58_bluetoothOn_IN() const {
    return state_58_subState == state_58_bluetoothOn;
}

inline bool _SysVehicule::state_57_IN() const {
    return state_0_IN();
}

inline bool _SysVehicule::phone2Initial_IN() const {
    return state_57_subState == phone2Initial;
}

inline bool _SysVehicule::phone2Calling_IN() const {
    return state_57_subState == phone2Calling;
}

inline bool _SysVehicule::callingDeny_IN() const {
    return state_57_subState == callingDeny;
}

inline bool _SysVehicule::callingAccept_IN() const {
    return state_57_subState == callingAccept;
}

inline bool _SysVehicule::state_54_IN() const {
    return state_0_IN();
}

inline bool _SysVehicule::bluetoothOn_IN() const {
    return state_54_subState == bluetoothOn;
}

inline bool _SysVehicule::bluetoothOff_IN() const {
    return state_54_subState == bluetoothOff;
}

inline bool _SysVehicule::state_51_IN() const {
    return state_0_IN();
}

inline bool _SysVehicule::setoff_IN() const {
    return state_51_subState == setoff;
}

inline bool _SysVehicule::NeutreSet_IN() const {
    return state_51_subState == NeutreSet;
}

inline bool _SysVehicule::minusPlus_IN() const {
    return state_51_subState == minusPlus;
}

inline bool _SysVehicule::Minus_IN() const {
    return state_51_subState == Minus;
}

inline bool _SysVehicule::MajorPlus_IN() const {
    return state_51_subState == MajorPlus;
}

inline bool _SysVehicule::Major_IN() const {
    return state_51_subState == Major;
}

inline bool _SysVehicule::state_47_IN() const {
    return state_0_IN();
}

inline bool _SysVehicule::limWaiting_IN() const {
    return state_47_subState == limWaiting;
}

inline bool _SysVehicule::limOn_IN() const {
    return state_47_subState == limOn;
}

inline bool _SysVehicule::limOff_IN() const {
    return state_47_subState == limOff;
}

inline bool _SysVehicule::state_33_IN() const {
    return state_0_IN();
}

inline bool _SysVehicule::regOn_IN() const {
    return state_33_subState == regOn;
}

inline bool _SysVehicule::regOff_IN() const {
    return state_33_subState == regOff;
}

inline bool _SysVehicule::regAdaptatif_IN() const {
    return state_33_subState == regAdaptatif;
}

inline bool _SysVehicule::regAccel_IN() const {
    return state_33_subState == regAccel;
}

inline bool _SysVehicule::state_2_IN() const {
    return state_0_IN();
}

inline bool _SysVehicule::Calcul_Vitesse_Distance_IN() const {
    return state_2_subState == Calcul_Vitesse_Distance;
}

inline bool _SysVehicule::state_1_IN() const {
    return state_0_IN();
}

inline bool _SysVehicule::motorOn_IN() const {
    return state_1_subState == motorOn;
}

inline bool _SysVehicule::motorOff_IN() const {
    return state_1_subState == motorOff;
}

#endif
/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\_SysVehicule.h
*********************************************************************/
