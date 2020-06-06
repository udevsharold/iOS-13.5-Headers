/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LKLoginDaemonProtocol <LKLoginControllerProtocol,LKLoginPerformanceTestProtocol>
@required
-(void)checkInWithCurrentEnvironment:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)isReadyToLoginWithCompletionHandler:(/*^block*/id)arg1;
-(void)isReadyToLogoutWithCompletionHandler:(/*^block*/id)arg1;
-(void)updateGlobalDefaultsValue:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end

