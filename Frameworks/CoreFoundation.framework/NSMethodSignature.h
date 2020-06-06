/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSMethodSignature : NSObject {

	NSMethodFrameDescriptor* _frameDescriptor;
	char* _typeString;
	unsigned long long _flags;

}

@property (readonly) unsigned long long numberOfArguments; 
@property (readonly) unsigned long long frameLength; 
@property (readonly) const char* methodReturnType; 
@property (readonly) unsigned long long methodReturnLength; 
+(id)cd_signatureWithObjCTypes:(const char*)arg1 ;
+(id)signatureWithObjCTypes:(const char*)arg1 ;
-(const char*)cd_getArgumentTypeAtIndex:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(unsigned long long)_flags;
-(NSMethodFrameArgInfo*)_argInfo:(long long)arg1 ;
-(unsigned long long)numberOfArguments;
-(NSMethodFrameDescriptor*)_frameDescriptor;
-(const char*)_cTypeString;
-(id)_typeString;
-(id)_signatureForBlockAtArgumentIndex:(long long)arg1 ;
-(Class)_classForObjectAtArgumentIndex:(long long)arg1 ;
-(id)_protocolsForObjectAtArgumentIndex:(long long)arg1 ;
-(const char*)getArgumentTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)frameLength;
-(BOOL)isOneway;
-(const char*)methodReturnType;
-(unsigned long long)methodReturnLength;
-(BOOL)_isHiddenStructRet;
-(BOOL)_isAllObjects;
@end

