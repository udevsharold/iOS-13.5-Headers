/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EFScheduler;
@interface EFSchedulerTrampoline : NSObject {

	id<EFScheduler> _scheduler;
	id _object;

}
+(id)trampolineWithScheduler:(id)arg1 object:(id)arg2 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)_initWithScheduler:(id)arg1 object:(id)arg2 ;
@end

