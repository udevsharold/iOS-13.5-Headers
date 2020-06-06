/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VSApplicationControllerResponseHandler : NSObject
-(void)handleJavascriptResponse:(id)arg1 requestType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_accountAuthenticationWithJavascriptResponse:(id)arg1 error:(id*)arg2 ;
-(void)_handleJavascriptResponseInternal:(id)arg1 requestType:(long long)arg2 accountAuthentication:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_parseSAMLResponseString:(id)arg1 error:(id*)arg2 ;
-(void)_setSubscriptionDataWithResponse:(id)arg1 forJavascriptResponse:(id)arg2 ;
@end

