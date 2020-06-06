/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASDServiceBroker;

@interface ASDTestFlightFeedback : NSObject {

	ASDServiceBroker* _serviceBroker;

}
+(id)sharedInstance;
+(id)interface;
-(id)init;
-(id)_initWithServiceBroker:(id)arg1 ;
-(void)getFeedbackMetadataForBundleID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getLaunchInfoForBundleID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setFeedbackEnabled:(BOOL)arg1 forVersion:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setLaunchScreenEnabled:(BOOL)arg1 forVersion:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setLaunchInfo:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)submitFeedback:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateTestNotes:(id)arg1 forVersion:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)getDisplayNamesForBundleID:(id)arg1 ;
-(id)getEmailAddressForBundleID:(id)arg1 ;
-(id)getLaunchInfoForBundleID:(id)arg1 ;
-(id)getLaunchInfoForVersion:(id)arg1 ;
-(BOOL)isFeedbackEnabledForBundleID:(id)arg1 ;
-(BOOL)isLaunchScreenEnabledForBundleID:(id)arg1 ;
@end

