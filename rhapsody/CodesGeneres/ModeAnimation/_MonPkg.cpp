/********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: _MonPkg
//!	Generated Date	: Tue, 7, Oct 2025  
	File Path	: CodesGeneres\ModeAnimation\_MonPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "_MonPkg.h"
//## auto_generated
#include "_SysVehicule.h"
//#[ ignore
#define regOff_SERIALIZE OM_NO_OP

#define regOff_UNSERIALIZE OM_NO_OP

#define regOff_CONSTRUCTOR regOff()

#define regOn_SERIALIZE OM_NO_OP

#define regOn_UNSERIALIZE OM_NO_OP

#define regOn_CONSTRUCTOR regOn()

#define setMinus_SERIALIZE OM_NO_OP

#define setMinus_UNSERIALIZE OM_NO_OP

#define setMinus_CONSTRUCTOR setMinus()

#define setMajor_SERIALIZE OM_NO_OP

#define setMajor_UNSERIALIZE OM_NO_OP

#define setMajor_CONSTRUCTOR setMajor()

#define setMin_SERIALIZE OM_NO_OP

#define setMin_UNSERIALIZE OM_NO_OP

#define setMin_CONSTRUCTOR setMin()

#define setMaj_SERIALIZE OM_NO_OP

#define setMaj_UNSERIALIZE OM_NO_OP

#define setMaj_CONSTRUCTOR setMaj()
//#]

//## package _MonPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(_MonPkg, _MonPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event regOff()
regOff::regOff() {
    NOTIFY_EVENT_CONSTRUCTOR(regOff)
    setId(regOff__MonPkg_id);
}

bool regOff::isTypeOf(const short id) const {
    return (regOff__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(regOff, _MonPkg, _MonPkg, regOff())

//## event regOn()
regOn::regOn() {
    NOTIFY_EVENT_CONSTRUCTOR(regOn)
    setId(regOn__MonPkg_id);
}

bool regOn::isTypeOf(const short id) const {
    return (regOn__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(regOn, _MonPkg, _MonPkg, regOn())

//## event setMinus()
setMinus::setMinus() {
    NOTIFY_EVENT_CONSTRUCTOR(setMinus)
    setId(setMinus__MonPkg_id);
}

bool setMinus::isTypeOf(const short id) const {
    return (setMinus__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(setMinus, _MonPkg, _MonPkg, setMinus())

//## event setMajor()
setMajor::setMajor() {
    NOTIFY_EVENT_CONSTRUCTOR(setMajor)
    setId(setMajor__MonPkg_id);
}

bool setMajor::isTypeOf(const short id) const {
    return (setMajor__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(setMajor, _MonPkg, _MonPkg, setMajor())

//## event setMin()
setMin::setMin() {
    NOTIFY_EVENT_CONSTRUCTOR(setMin)
    setId(setMin__MonPkg_id);
}

bool setMin::isTypeOf(const short id) const {
    return (setMin__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(setMin, _MonPkg, _MonPkg, setMin())

//## event setMaj()
setMaj::setMaj() {
    NOTIFY_EVENT_CONSTRUCTOR(setMaj)
    setId(setMaj__MonPkg_id);
}

bool setMaj::isTypeOf(const short id) const {
    return (setMaj__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(setMaj, _MonPkg, _MonPkg, setMaj())

/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\_MonPkg.cpp
*********************************************************************/
