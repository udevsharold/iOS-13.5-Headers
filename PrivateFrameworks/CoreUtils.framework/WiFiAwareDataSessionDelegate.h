/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WiFiAwareDataSessionDelegate <NSObject>
@required
-(void)dataSessionRequestStarted:(id)arg1;
-(void)dataSession:(id)arg1 failedToStartWithError:(long long)arg2;
-(void)dataSession:(id)arg1 confirmedForPeerDataAddress:(id)arg2 serviceSpecificInfo:(id)arg3;
-(void)dataSession:(id)arg1 terminatedWithReason:(long long)arg2;

@end

