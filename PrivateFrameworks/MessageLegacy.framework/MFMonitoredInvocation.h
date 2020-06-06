/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSInvocation.h>

@class MFActivityMonitor, NSString;

@interface MFMonitoredInvocation : NSInvocation {

	MFActivityMonitor* _monitor;
	BOOL _shouldLogInvocation;
	NSString* _powerAssertionId;

}

@property (nonatomic,readonly) MFActivityMonitor * monitor;              //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,copy) NSString * powerAssertionId;                  //@synthesize powerAssertionId=_powerAssertionId - In the implementation block
+(id)invocationWithMethodSignature:(id)arg1 ;
+(id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3 taskName:(id)arg4 priority:(int)arg5 canBeCancelled:(BOOL)arg6 ;
+(id)invocationWithSelector:(SEL)arg1 target:(id)arg2 taskName:(id)arg3 priority:(int)arg4 canBeCancelled:(BOOL)arg5 ;
+(id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 taskName:(id)arg5 priority:(int)arg6 canBeCancelled:(BOOL)arg7 ;
-(void)dealloc;
-(id)description;
-(void)invoke;
-(MFActivityMonitor *)monitor;
-(BOOL)mf_shouldLogInvocation;
-(void)setPowerAssertionId:(NSString *)arg1 ;
-(void)setShouldLogInvocation:(BOOL)arg1 ;
-(NSString *)powerAssertionId;
@end

