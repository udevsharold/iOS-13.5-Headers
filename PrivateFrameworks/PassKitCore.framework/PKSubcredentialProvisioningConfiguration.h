/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PKSubcredentialProvisioningConfiguration : NSObject {

	long long _configurationType;

}

@property (nonatomic,readonly) long long configurationType;              //@synthesize configurationType=_configurationType - In the implementation block
-(id)remoteDeviceInvitation;
-(id)ownerConfiguration;
-(id)acceptInvitationConfiguration;
-(id)localDeviceConfiguration;
-(id)initWithConfigurationType:(long long)arg1 ;
-(id)remoteDeviceConfiguration;
-(id)transitionTable;
-(long long)startingState;
-(long long)configurationType;
@end

