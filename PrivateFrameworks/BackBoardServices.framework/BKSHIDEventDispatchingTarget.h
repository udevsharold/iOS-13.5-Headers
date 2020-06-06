/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventDispatchingTarget : NSObject <NSSecureCoding, NSCopying> {

	BKSHIDEventDeferringEnvironment* _environment;
	int _pid;

}

@property (nonatomic,readonly) int pid;                                                                  //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) BKSHIDEventDeferringEnvironment * deferringEnvironment;              //@synthesize environment=_environment - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)systemTarget;
+(id)keyboardFocusTarget;
+(id)targetForDeferringEnvironment:(id)arg1 ;
+(id)targetForPID:(int)arg1 environment:(id)arg2 ;
+(id)focusTargetForPID:(int)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)pid;
-(id)_initWithEnvironment:(id)arg1 pid:(int)arg2 ;
-(BKSHIDEventDeferringEnvironment *)deferringEnvironment;
@end

