/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class BSMachPortSendRight, NSString;

@interface BKSAnimationFenceHandle : NSObject <BSXPCCoding, NSSecureCoding, NSCopying, BSInvalidatable> {

	unsigned long long _fenceName;
	BSMachPortSendRight* _caFence;
	BSMachPortSendRight* _preFence;
	BSMachPortSendRight* _preFenceTrigger;
	unsigned long long _handleName;
	int _valid;
	BOOL _shouldTrace;

}

@property (nonatomic,copy,readonly) NSString * _trace; 
@property (nonatomic,readonly) BSMachPortSendRight * trigger;              //@synthesize preFenceTrigger=_preFenceTrigger - In the implementation block
@property (nonatomic,readonly) unsigned long long fenceName; 
@property (getter=isUsable,nonatomic,readonly) BOOL usable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newSystemFenceHandle;
+(id)newFenceHandleForContext:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isUsable;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)_trace;
-(unsigned)CAPort;
-(BSMachPortSendRight *)trigger;
-(unsigned long long)fenceName;
-(id)_initWithFenceName:(unsigned long long)arg1 fence:(id)arg2 preFence:(id)arg3 preFenceTrigger:(id)arg4 shouldTrace:(BOOL)arg5 ;
@end

