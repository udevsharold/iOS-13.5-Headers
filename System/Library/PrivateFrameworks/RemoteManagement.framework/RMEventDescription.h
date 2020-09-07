/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RMStatusPublisherDescription, RMConfigurationSubscriberDescription;

@interface RMEventDescription : NSObject {

	RMStatusPublisherDescription* _statusPublisherDescription;
	RMConfigurationSubscriberDescription* _configurationSubscriberDescription;

}

@property (nonatomic,readonly) RMStatusPublisherDescription * statusPublisherDescription;                              //@synthesize statusPublisherDescription=_statusPublisherDescription - In the implementation block
@property (nonatomic,readonly) RMConfigurationSubscriberDescription * configurationSubscriberDescription;              //@synthesize configurationSubscriberDescription=_configurationSubscriberDescription - In the implementation block
+(id)eventDescriptionWithEventsDictionary:(id)arg1 ;
+(id)eventDescriptionWithExtensionDictionary:(id)arg1 ;
-(RMConfigurationSubscriberDescription *)configurationSubscriberDescription;
-(id)initWithStatusPublisherDescription:(id)arg1 configurationSubscriberDescription:(id)arg2 ;
-(RMStatusPublisherDescription *)statusPublisherDescription;
@end
