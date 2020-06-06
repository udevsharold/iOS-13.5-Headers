/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PETEventTracker2;

@interface WFEventTracker : NSObject {

	PETEventTracker2* _proactiveTracker;

}

@property (nonatomic,readonly) PETEventTracker2 * proactiveTracker;              //@synthesize proactiveTracker=_proactiveTracker - In the implementation block
+(id)sharedTracker;
-(id)init;
-(void)trackEvent:(id)arg1 ;
-(id)initWithTracker:(id)arg1 ;
-(void)trackEvent:(id)arg1 count:(int)arg2 ;
-(PETEventTracker2 *)proactiveTracker;
@end

