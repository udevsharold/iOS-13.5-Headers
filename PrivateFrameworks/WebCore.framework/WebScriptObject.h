/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@class WebScriptObjectPrivate;

@interface WebScriptObject : NSObject {

	WebScriptObjectPrivate* _private;

}
+(void)initialize;
+(id)_convertValueToObjcValue:(JSValue*)arg1 originRootObject:(RootObject*)arg2 rootObject:(RootObject*)arg3 ;
+(id)scriptObjectForJSObject:(OpaqueJSValueRef)arg1 originRootObject:(RootObject*)arg2 rootObject:(RootObject*)arg3 ;
+(BOOL)throwException:(id)arg1 ;
-(id)_init;
-(void)_initializeScriptDOMNodeImp;
-(void)dealloc;
-(oneway void)release;
-(id)objectAtIndex:(unsigned)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(RootObject*)_rootObject;
-(id)stringRepresentation;
-(JSObject*)_imp;
-(void)setException:(id)arg1 ;
-(void)_setOriginRootObject:(RefPtr<JSC::Bindings::RootObject, WTF::DumbPtrTraits<JSC::Bindings::RootObject> >*)arg1 andRootObject:(RefPtr<JSC::Bindings::RootObject, WTF::DumbPtrTraits<JSC::Bindings::RootObject> >*)arg2 ;
-(id)_initWithJSObject:(JSObject*)arg1 originRootObject:(RefPtr<JSC::Bindings::RootObject, WTF::DumbPtrTraits<JSC::Bindings::RootObject> >*)arg2 rootObject:(RefPtr<JSC::Bindings::RootObject, WTF::DumbPtrTraits<JSC::Bindings::RootObject> >*)arg3 ;
-(BOOL)_hasImp;
-(void)_setImp:(JSObject*)arg1 originRootObject:(RefPtr<JSC::Bindings::RootObject, WTF::DumbPtrTraits<JSC::Bindings::RootObject> >*)arg2 rootObject:(RefPtr<JSC::Bindings::RootObject, WTF::DumbPtrTraits<JSC::Bindings::RootObject> >*)arg3 ;
-(BOOL)_isSafeScript;
-(RootObject*)_originRootObject;
-(OpaqueJSValueRef)JSObject;
-(OpaqueJSContextRef)_globalContextRef;
-(id)callWebScriptMethod:(id)arg1 withArguments:(id)arg2 ;
-(id)evaluateWebScript:(id)arg1 ;
-(void)removeWebScriptKey:(id)arg1 ;
-(BOOL)hasWebScriptKey:(id)arg1 ;
-(id)webScriptValueAtIndex:(unsigned)arg1 ;
-(void)setWebScriptValueAtIndex:(unsigned)arg1 value:(id)arg2 ;
-(id)JSValue;
@end

