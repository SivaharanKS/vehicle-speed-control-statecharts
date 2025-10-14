/*********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: _SysVehicule
//!	Generated Date	: Tue, 14, Oct 2025  
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

#define OMAnim__MonPkg__SysVehicule_setAlpha_int_ARGS_DECLARATION int p_alpha;

#define OMAnim__MonPkg__SysVehicule_setBrakePedal_double_ARGS_DECLARATION double p_brakePedal;

#define OMAnim__MonPkg__SysVehicule_setKey_bool_ARGS_DECLARATION bool p_key;

#define OMAnim__MonPkg__SysVehicule_setReg_bool_ARGS_DECLARATION bool p_reg;

#define OMAnim__MonPkg__SysVehicule_setThrottle_double_ARGS_DECLARATION double p_throttle;
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
    
    //## operation regulateur()
    void regulateur();
    
    //## operation setMajor()
    void setMajor();
    
    //## operation setMinus()
    void setMinus();
    
    //## auto_generated
    bool getFlag();
    
    //## auto_generated
    void setFlag(bool p_flag);
    
    //## auto_generated
    void setIgnition(bool p_ignition);
    
    //## auto_generated
    bool getKey();
    
    //## auto_generated
    void setKey(bool p_key);
    
    //## auto_generated
    bool getReg();
    
    //## auto_generated
    void setReg(bool p_reg);
    
    //## auto_generated
    void setSpeed(int p_speed);
    
    //## auto_generated
    void setThrottle(double p_throttle);
    
    //## auto_generated
    void setVitesseConsigne(double p_vitesseConsigne);

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    bool flag;		//## attribute flag
    
    bool key;		//## attribute key
    
    bool reg;		//## attribute reg

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
    
    // regAccel:
    //## statechart_method
    inline bool regAccel_IN() const;
    
    // Minus:
    //## statechart_method
    inline bool Minus_IN() const;
    
    // Major:
    //## statechart_method
    inline bool Major_IN() const;
    
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
        state_33 = 7,
        regOn = 8,
        regOff = 9,
        regAccel = 10,
        Minus = 11,
        Major = 12,
        state_2 = 13,
        Calcul_Vitesse_Distance = 14,
        state_1 = 15,
        motorOn = 16,
        motorOff = 17
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_9_subState;
    
    int state_9_active;
    
    IOxfTimeout* state_9_timeout;
    
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

DECLARE_OPERATION_CLASS(_MonPkg__SysVehicule_setAlpha_int)

DECLARE_OPERATION_CLASS(_MonPkg__SysVehicule_setBrakePedal_double)

DECLARE_OPERATION_CLASS(_MonPkg__SysVehicule_setKey_bool)

DECLARE_OPERATION_CLASS(_MonPkg__SysVehicule_setReg_bool)

DECLARE_OPERATION_CLASS(_MonPkg__SysVehicule_setThrottle_double)

//#[ ignore
class OMAnimated_SysVehicule : virtual public AOMInstance {
    DECLARE_REACTIVE_META(_SysVehicule, OMAnimated_SysVehicule)
    
    DECLARE_META_OP(_MonPkg__SysVehicule_setAccelPedal_double)
    
    DECLARE_META_OP(_MonPkg__SysVehicule_setAlpha_int)
    
    DECLARE_META_OP(_MonPkg__SysVehicule_setBrakePedal_double)
    
    DECLARE_META_OP(_MonPkg__SysVehicule_setKey_bool)
    
    DECLARE_META_OP(_MonPkg__SysVehicule_setReg_bool)
    
    DECLARE_META_OP(_MonPkg__SysVehicule_setThrottle_double)
    
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
    void state_33_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void regOn_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void regOff_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void regAccel_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Minus_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Major_serializeStates(AOMSState* aomsState) const;
    
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

inline bool _SysVehicule::state_33_IN() const {
    return state_0_IN();
}

inline bool _SysVehicule::regOn_IN() const {
    return state_33_subState == regOn;
}

inline bool _SysVehicule::regOff_IN() const {
    return state_33_subState == regOff;
}

inline bool _SysVehicule::regAccel_IN() const {
    return state_33_subState == regAccel;
}

inline bool _SysVehicule::Minus_IN() const {
    return state_33_subState == Minus;
}

inline bool _SysVehicule::Major_IN() const {
    return state_33_subState == Major;
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
