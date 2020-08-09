/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UMUserSwitchManagement_Private <NSObject>
@required
-(void)suspendQuotasWithCompletionHandler:(/*^block*/id)arg1;
-(void)resumeQuotas;
-(void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)registerCriticalUserSwitchStakeHolder:(id)arg1;
-(void)userInteractionIsEnabled;

@end
