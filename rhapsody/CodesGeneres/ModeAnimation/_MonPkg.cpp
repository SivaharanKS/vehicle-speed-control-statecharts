/********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: _MonPkg
//!	Generated Date	: Tue, 14, Oct 2025  
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

#define setMinLim_SERIALIZE OM_NO_OP

#define setMinLim_UNSERIALIZE OM_NO_OP

#define setMinLim_CONSTRUCTOR setMinLim()

#define setMajLim_SERIALIZE OM_NO_OP

#define setMajLim_UNSERIALIZE OM_NO_OP

#define setMajLim_CONSTRUCTOR setMajLim()
//#]

//## package _MonPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(_MonPkg, _MonPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

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

//## event setMinLim()
setMinLim::setMinLim() {
    NOTIFY_EVENT_CONSTRUCTOR(setMinLim)
    setId(setMinLim__MonPkg_id);
}

bool setMinLim::isTypeOf(const short id) const {
    return (setMinLim__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(setMinLim, _MonPkg, _MonPkg, setMinLim())

//## event setMajLim()
setMajLim::setMajLim() {
    NOTIFY_EVENT_CONSTRUCTOR(setMajLim)
    setId(setMajLim__MonPkg_id);
}

bool setMajLim::isTypeOf(const short id) const {
    return (setMajLim__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(setMajLim, _MonPkg, _MonPkg, setMajLim())

/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\_MonPkg.cpp
*********************************************************************/
