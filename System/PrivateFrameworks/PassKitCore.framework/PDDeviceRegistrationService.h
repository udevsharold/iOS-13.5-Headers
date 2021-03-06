/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PDXPCService.h>
#import <libobjc.A.dylib/PDDeviceRegistrationServiceExportedInterface.h>

@class PKEntitlementWhitelist, PDDeviceRegistrationServiceCoordinator, NSString;

@interface PDDeviceRegistrationService : PDXPCService <PDDeviceRegistrationServiceExportedInterface> {

	PKEntitlementWhitelist* _whitelist;
	PDDeviceRegistrationServiceCoordinator* _deviceRegistrationServiceCoordinator;

}

@property (nonatomic,retain) PDDeviceRegistrationServiceCoordinator * deviceRegistrationServiceCoordinator;              //@synthesize deviceRegistrationServiceCoordinator=_deviceRegistrationServiceCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(id)arg1 ;
-(void)performDeviceRegistrationForReason:(id)arg1 actionType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(PDDeviceRegistrationServiceCoordinator *)deviceRegistrationServiceCoordinator;
-(void)setDeviceRegistrationServiceCoordinator:(PDDeviceRegistrationServiceCoordinator *)arg1 ;
@end

