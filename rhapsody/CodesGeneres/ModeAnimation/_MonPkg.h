/*********************************************************************
	Rhapsody	: 9.0.2 
	Login		: kumarass
	Component	: CodesGeneres 
	Configuration 	: ModeAnimation
	Model Element	: _MonPkg
//!	Generated Date	: Tue, 7, Oct 2025  
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
#define regOff__MonPkg_id 13401

#define regOn__MonPkg_id 13402

#define setMinus__MonPkg_id 13403

#define setMajor__MonPkg_id 13404

#define setMin__MonPkg_id 13405

#define setMaj__MonPkg_id 13406
//#]

//## package _MonPkg



//## event regOff()
class regOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedregOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    regOff();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedregOff : virtual public AOMEvent {
    DECLARE_META_EVENT(regOff)
};
//#]
#endif // _OMINSTRUMENT

//## event regOn()
class regOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedregOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    regOn();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedregOn : virtual public AOMEvent {
    DECLARE_META_EVENT(regOn)
};
//#]
#endif // _OMINSTRUMENT

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

#endif
/*********************************************************************
	File Path	: CodesGeneres\ModeAnimation\_MonPkg.h
*********************************************************************/
