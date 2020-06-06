/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDCameraStreamSessionID, NSString;

@interface HMDCameraParameterSelectionBase : HMFObject <HMFLogging> {

	HMDCameraStreamSessionID* _sessionID;

}

@property (nonatomic,readonly) HMDCameraStreamSessionID * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDCameraStreamSessionID *)sessionID;
-(id)initWithSessionID:(id)arg1 ;
-(id)_filterFor:(id)arg1 preferenceList:(id)arg2 deviceSupportedTypes:(id)arg3 cameraSupportedTypes:(id)arg4 localPreferences:(id)arg5 ;
-(id)_selectSRTPParameters:(id)arg1 ;
-(id)_selectCryptoSuite:(id)arg1 ;
@end

