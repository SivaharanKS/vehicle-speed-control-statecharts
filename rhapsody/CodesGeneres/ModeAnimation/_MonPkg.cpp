/********************************************************************
	Rhapsody	: 9.0.2 
	Login		: student
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: _MonPkg
//!	Generated Date	: Mon, 27, Oct 2025  
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

#define f_SERIALIZE OM_NO_OP

#define f_UNSERIALIZE OM_NO_OP

#define f_CONSTRUCTOR f()

#define d_SERIALIZE OM_NO_OP

#define d_UNSERIALIZE OM_NO_OP

#define d_CONSTRUCTOR d()

#define ev0_SERIALIZE OM_NO_OP

#define ev0_UNSERIALIZE OM_NO_OP

#define ev0_CONSTRUCTOR ev0()

#define ev1_SERIALIZE OM_NO_OP

#define ev1_UNSERIALIZE OM_NO_OP

#define ev1_CONSTRUCTOR ev1()

#define ev2_SERIALIZE OM_NO_OP

#define ev2_UNSERIALIZE OM_NO_OP

#define ev2_CONSTRUCTOR ev2()

#define ev3_SERIALIZE OM_NO_OP

#define ev3_UNSERIALIZE OM_NO_OP

#define ev3_CONSTRUCTOR ev3()

#define ev4_SERIALIZE OM_NO_OP

#define ev4_UNSERIALIZE OM_NO_OP

#define ev4_CONSTRUCTOR ev4()

#define ev5_SERIALIZE OM_NO_OP

#define ev5_UNSERIALIZE OM_NO_OP

#define ev5_CONSTRUCTOR ev5()

#define ev6_SERIALIZE OM_NO_OP

#define ev6_UNSERIALIZE OM_NO_OP

#define ev6_CONSTRUCTOR ev6()

#define ev7_SERIALIZE OM_NO_OP

#define ev7_UNSERIALIZE OM_NO_OP

#define ev7_CONSTRUCTOR ev7()

#define ev8_SERIALIZE OM_NO_OP

#define ev8_UNSERIALIZE OM_NO_OP

#define ev8_CONSTRUCTOR ev8()

#define ev9_SERIALIZE OM_NO_OP

#define ev9_UNSERIALIZE OM_NO_OP

#define ev9_CONSTRUCTOR ev9()

#define evReset_SERIALIZE OM_NO_OP

#define evReset_UNSERIALIZE OM_NO_OP

#define evReset_CONSTRUCTOR evReset()

#define evBTVehicule_SERIALIZE OM_NO_OP

#define evBTVehicule_UNSERIALIZE OM_NO_OP

#define evBTVehicule_CONSTRUCTOR evBTVehicule()

#define evCalling_SERIALIZE OM_NO_OP

#define evCalling_UNSERIALIZE OM_NO_OP

#define evCalling_CONSTRUCTOR evCalling()

#define evCallingAccept_SERIALIZE OM_NO_OP

#define evCallingAccept_UNSERIALIZE OM_NO_OP

#define evCallingAccept_CONSTRUCTOR evCallingAccept()

#define evCallingDeny_SERIALIZE OM_NO_OP

#define evCallingDeny_UNSERIALIZE OM_NO_OP

#define evCallingDeny_CONSTRUCTOR evCallingDeny()
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

//## event f()
f::f() {
    NOTIFY_EVENT_CONSTRUCTOR(f)
    setId(f__MonPkg_id);
}

bool f::isTypeOf(const short id) const {
    return (f__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(f, _MonPkg, _MonPkg, f())

//## event d()
d::d() {
    NOTIFY_EVENT_CONSTRUCTOR(d)
    setId(d__MonPkg_id);
}

bool d::isTypeOf(const short id) const {
    return (d__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(d, _MonPkg, _MonPkg, d())

//## event ev0()
ev0::ev0() {
    NOTIFY_EVENT_CONSTRUCTOR(ev0)
    setId(ev0__MonPkg_id);
}

bool ev0::isTypeOf(const short id) const {
    return (ev0__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev0, _MonPkg, _MonPkg, ev0())

//## event ev1()
ev1::ev1() {
    NOTIFY_EVENT_CONSTRUCTOR(ev1)
    setId(ev1__MonPkg_id);
}

bool ev1::isTypeOf(const short id) const {
    return (ev1__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev1, _MonPkg, _MonPkg, ev1())

//## event ev2()
ev2::ev2() {
    NOTIFY_EVENT_CONSTRUCTOR(ev2)
    setId(ev2__MonPkg_id);
}

bool ev2::isTypeOf(const short id) const {
    return (ev2__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev2, _MonPkg, _MonPkg, ev2())

//## event ev3()
ev3::ev3() {
    NOTIFY_EVENT_CONSTRUCTOR(ev3)
    setId(ev3__MonPkg_id);
}

bool ev3::isTypeOf(const short id) const {
    return (ev3__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev3, _MonPkg, _MonPkg, ev3())

//## event ev4()
ev4::ev4() {
    NOTIFY_EVENT_CONSTRUCTOR(ev4)
    setId(ev4__MonPkg_id);
}

bool ev4::isTypeOf(const short id) const {
    return (ev4__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev4, _MonPkg, _MonPkg, ev4())

//## event ev5()
ev5::ev5() {
    NOTIFY_EVENT_CONSTRUCTOR(ev5)
    setId(ev5__MonPkg_id);
}

bool ev5::isTypeOf(const short id) const {
    return (ev5__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev5, _MonPkg, _MonPkg, ev5())

//## event ev6()
ev6::ev6() {
    NOTIFY_EVENT_CONSTRUCTOR(ev6)
    setId(ev6__MonPkg_id);
}

bool ev6::isTypeOf(const short id) const {
    return (ev6__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev6, _MonPkg, _MonPkg, ev6())

//## event ev7()
ev7::ev7() {
    NOTIFY_EVENT_CONSTRUCTOR(ev7)
    setId(ev7__MonPkg_id);
}

bool ev7::isTypeOf(const short id) const {
    return (ev7__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev7, _MonPkg, _MonPkg, ev7())

//## event ev8()
ev8::ev8() {
    NOTIFY_EVENT_CONSTRUCTOR(ev8)
    setId(ev8__MonPkg_id);
}

bool ev8::isTypeOf(const short id) const {
    return (ev8__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev8, _MonPkg, _MonPkg, ev8())

//## event ev9()
ev9::ev9() {
    NOTIFY_EVENT_CONSTRUCTOR(ev9)
    setId(ev9__MonPkg_id);
}

bool ev9::isTypeOf(const short id) const {
    return (ev9__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(ev9, _MonPkg, _MonPkg, ev9())

//## event evReset()
evReset::evReset() {
    NOTIFY_EVENT_CONSTRUCTOR(evReset)
    setId(evReset__MonPkg_id);
}

bool evReset::isTypeOf(const short id) const {
    return (evReset__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evReset, _MonPkg, _MonPkg, evReset())

//## event evBTVehicule()
evBTVehicule::evBTVehicule() {
    NOTIFY_EVENT_CONSTRUCTOR(evBTVehicule)
    setId(evBTVehicule__MonPkg_id);
}

bool evBTVehicule::isTypeOf(const short id) const {
    return (evBTVehicule__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evBTVehicule, _MonPkg, _MonPkg, evBTVehicule())

//## event evCalling()
evCalling::evCalling() {
    NOTIFY_EVENT_CONSTRUCTOR(evCalling)
    setId(evCalling__MonPkg_id);
}

bool evCalling::isTypeOf(const short id) const {
    return (evCalling__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evCalling, _MonPkg, _MonPkg, evCalling())

//## event evCallingAccept()
evCallingAccept::evCallingAccept() {
    NOTIFY_EVENT_CONSTRUCTOR(evCallingAccept)
    setId(evCallingAccept__MonPkg_id);
}

bool evCallingAccept::isTypeOf(const short id) const {
    return (evCallingAccept__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evCallingAccept, _MonPkg, _MonPkg, evCallingAccept())

//## event evCallingDeny()
evCallingDeny::evCallingDeny() {
    NOTIFY_EVENT_CONSTRUCTOR(evCallingDeny)
    setId(evCallingDeny__MonPkg_id);
}

bool evCallingDeny::isTypeOf(const short id) const {
    return (evCallingDeny__MonPkg_id==id);
}

IMPLEMENT_META_EVENT_P(evCallingDeny, _MonPkg, _MonPkg, evCallingDeny())

/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\_MonPkg.cpp
*********************************************************************/
