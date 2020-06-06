/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKSApplicationStateMonitor;

@interface GKApplicationStateMonitor : NSObject {

	BKSApplicationStateMonitor* _applicationStateMonitor;

}

@property (nonatomic,retain) BKSApplicationStateMonitor * applicationStateMonitor;              //@synthesize applicationStateMonitor=_applicationStateMonitor - In the implementation block
@property (nonatomic,copy) id handler; 
-(id)init;
-(void)dealloc;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(BKSApplicationStateMonitor *)applicationStateMonitor;
-(void)setApplicationStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(BOOL)observingStateChangesForBundleID:(id)arg1 ;
-(void)startObservingStateChangesForBundleID:(id)arg1 ;
@end

