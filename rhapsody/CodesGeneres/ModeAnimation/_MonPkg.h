/*********************************************************************
	Rhapsody	: 9.0.2 
	Login		: student
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: _MonPkg
//!	Generated Date	: Fri, 14, Nov 2025  
	File Path	: CodesGeneres\ModeAnimation\_MonPkg.h
*********************************************************************/

#ifndef _MonPkg_H
#define _MonPkg_H

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
#include <oxf\event.h>
//## auto_generated
class _SysVehicule;

//#[ ignore
#define setMinus__MonPkg_id 13401

#define setMajor__MonPkg_id 13402

#define setMin__MonPkg_id 13403

#define setMaj__MonPkg_id 13404

#define setMinLim__MonPkg_id 13405

#define setMajLim__MonPkg_id 13406

#define f__MonPkg_id 13407

#define d__MonPkg_id 13408

#define ev0__MonPkg_id 13409

#define ev1__MonPkg_id 13410

#define ev2__MonPkg_id 13411

#define ev3__MonPkg_id 13412

#define ev4__MonPkg_id 13413

#define ev5__MonPkg_id 13414

#define ev6__MonPkg_id 13415

#define ev7__MonPkg_id 13416

#define ev8__MonPkg_id 13417

#define ev9__MonPkg_id 13418

#define evReset__MonPkg_id 13419

#define evBTVehicule__MonPkg_id 13420

#define evCalling__MonPkg_id 13421

#define evCallingAccept__MonPkg_id 13422

#define evCallingDeny__MonPkg_id 13423

#define evSMS__MonPkg_id 13424

#define evRead__MonPkg_id 13425
//#]

//## package _MonPkg



//## event setMinus()
class setMinus : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedsetMinus;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    setMinus();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsetMinus : virtual public AOMEvent {
    DECLARE_META_EVENT(setMinus)
};
//#]
#endif // _OMINSTRUMENT

//## event setMajor()
class setMajor : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedsetMajor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    setMajor();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsetMajor : virtual public AOMEvent {
    DECLARE_META_EVENT(setMajor)
};
//#]
#endif // _OMINSTRUMENT

//## event setMin()
class setMin : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedsetMin;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    setMin();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsetMin : virtual public AOMEvent {
    DECLARE_META_EVENT(setMin)
};
//#]
#endif // _OMINSTRUMENT

//## event setMaj()
class setMaj : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedsetMaj;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    setMaj();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsetMaj : virtual public AOMEvent {
    DECLARE_META_EVENT(setMaj)
};
//#]
#endif // _OMINSTRUMENT

//## event setMinLim()
class setMinLim : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedsetMinLim;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    setMinLim();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsetMinLim : virtual public AOMEvent {
    DECLARE_META_EVENT(setMinLim)
};
//#]
#endif // _OMINSTRUMENT

//## event setMajLim()
class setMajLim : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedsetMajLim;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    setMajLim();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsetMajLim : virtual public AOMEvent {
    DECLARE_META_EVENT(setMajLim)
};
//#]
#endif // _OMINSTRUMENT

//## event f()
class f : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedf;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    f();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedf : virtual public AOMEvent {
    DECLARE_META_EVENT(f)
};
//#]
#endif // _OMINSTRUMENT

//## event d()
class d : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedd;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    d();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedd : virtual public AOMEvent {
    DECLARE_META_EVENT(d)
};
//#]
#endif // _OMINSTRUMENT

//## event ev0()
class ev0 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev0;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev0();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev0 : virtual public AOMEvent {
    DECLARE_META_EVENT(ev0)
};
//#]
#endif // _OMINSTRUMENT

//## event ev1()
class ev1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev1();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev1 : virtual public AOMEvent {
    DECLARE_META_EVENT(ev1)
};
//#]
#endif // _OMINSTRUMENT

//## event ev2()
class ev2 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev2;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev2();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev2 : virtual public AOMEvent {
    DECLARE_META_EVENT(ev2)
};
//#]
#endif // _OMINSTRUMENT

//## event ev3()
class ev3 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev3;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev3();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev3 : virtual public AOMEvent {
    DECLARE_META_EVENT(ev3)
};
//#]
#endif // _OMINSTRUMENT

//## event ev4()
class ev4 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev4;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev4();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev4 : virtual public AOMEvent {
    DECLARE_META_EVENT(ev4)
};
//#]
#endif // _OMINSTRUMENT

//## event ev5()
class ev5 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev5;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev5();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev5 : virtual public AOMEvent {
    DECLARE_META_EVENT(ev5)
};
//#]
#endif // _OMINSTRUMENT

//## event ev6()
class ev6 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev6;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev6();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev6 : virtual public AOMEvent {
    DECLARE_META_EVENT(ev6)
};
//#]
#endif // _OMINSTRUMENT

//## event ev7()
class ev7 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev7;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev7();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev7 : virtual public AOMEvent {
    DECLARE_META_EVENT(ev7)
};
//#]
#endif // _OMINSTRUMENT

//## event ev8()
class ev8 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev8;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev8();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev8 : virtual public AOMEvent {
    DECLARE_META_EVENT(ev8)
};
//#]
#endif // _OMINSTRUMENT

//## event ev9()
class ev9 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedev9;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ev9();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedev9 : virtual public AOMEvent {
    DECLARE_META_EVENT(ev9)
};
//#]
#endif // _OMINSTRUMENT

//## event evReset()
class evReset : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevReset;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evReset();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevReset : virtual public AOMEvent {
    DECLARE_META_EVENT(evReset)
};
//#]
#endif // _OMINSTRUMENT

//## event evBTVehicule()
class evBTVehicule : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevBTVehicule;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evBTVehicule();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevBTVehicule : virtual public AOMEvent {
    DECLARE_META_EVENT(evBTVehicule)
};
//#]
#endif // _OMINSTRUMENT

//## event evCalling()
class evCalling : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevCalling;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evCalling();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevCalling : virtual public AOMEvent {
    DECLARE_META_EVENT(evCalling)
};
//#]
#endif // _OMINSTRUMENT

//## event evCallingAccept()
class evCallingAccept : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevCallingAccept;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evCallingAccept();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevCallingAccept : virtual public AOMEvent {
    DECLARE_META_EVENT(evCallingAccept)
};
//#]
#endif // _OMINSTRUMENT

//## event evCallingDeny()
class evCallingDeny : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevCallingDeny;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evCallingDeny();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevCallingDeny : virtual public AOMEvent {
    DECLARE_META_EVENT(evCallingDeny)
};
//#]
#endif // _OMINSTRUMENT

//## event evSMS()
class evSMS : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevSMS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evSMS();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevSMS : virtual public AOMEvent {
    DECLARE_META_EVENT(evSMS)
};
//#]
#endif // _OMINSTRUMENT

//## event evRead()
class evRead : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevRead;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evRead();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevRead : virtual public AOMEvent {
    DECLARE_META_EVENT(evRead)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\_MonPkg.h
*********************************************************************/
