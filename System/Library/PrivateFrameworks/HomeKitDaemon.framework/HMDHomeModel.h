/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString, NSDate, NSNumber, NSData, HMDHomeKitVersion;

@interface HMDHomeModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * ownerName; 
@property (nonatomic,retain) NSString * ownerUserID; 
@property (nonatomic,retain) NSString * ownerUUID; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSString * defaultRoomUUID; 
@property (nonatomic,retain) NSNumber * presenceAuthorizationStatus; 
@property (nonatomic,retain) NSNumber * presenceComputeStatus; 
@property (nonatomic,retain) NSData * ownerPublicKey; 
@property (nonatomic,retain) NSData * homeLocationData; 
@property (nonatomic,retain) NSString * primaryResidentUUID; 
@property (nonatomic,copy) HMDHomeKitVersion * sharedHomeSourceVersion; 
@property (nonatomic,retain) NSNumber * networkProtectionMode; 
@property (nonatomic,retain) NSNumber * multiUserEnabled; 
@property (nonatomic,retain) NSNumber * hasAnyUserAcknowledgedCameraRecordingOnboarding; 
+(id)properties;
@end
