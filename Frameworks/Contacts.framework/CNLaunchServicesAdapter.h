/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNLaunchServicesAdapter
@required
-(void)applicationsForUserActivityType:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)applicationsAvailableForHandlingURLScheme:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)applicationForBundleIdentifier:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)openUserActivityData:(id)arg1 inApplication:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 withReply:(/*^block*/id)arg3;

@end

