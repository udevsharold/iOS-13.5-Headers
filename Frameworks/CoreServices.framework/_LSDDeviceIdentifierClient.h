/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSDClient.h>
#import <libobjc.A.dylib/_LSDDeviceIdentifierProtocol.h>

@interface _LSDDeviceIdentifierClient : _LSDClient <_LSDDeviceIdentifierProtocol>
-(void)clearAllIdentifiersOfType:(long long)arg1 ;
-(void)getIdentifierOfType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)generateIdentifiersWithVendorName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(BOOL)hasUninstallEntitlement;
-(unsigned)findAppBundleForExecutableURL:(id)arg1 withContext:(LSContext*)arg2 ;
-(void)getClientProcessVendorNameBundleIdentifierAndRestrictedIDAccessWithType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)hasEntitlementToClearAllIdentifiersOfType:(long long)arg1 ;
@end

