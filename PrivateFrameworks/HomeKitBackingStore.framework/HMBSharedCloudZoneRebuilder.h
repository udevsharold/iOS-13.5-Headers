/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMBCloudZoneRebuilder.h>

@class HMBCloudZoneRebuilderStatus, NAFuture, HMBCloudZone, NSString;

@interface HMBSharedCloudZoneRebuilder : HMFObject <HMFLogging, HMBCloudZoneRebuilder> {

	HMBCloudZoneRebuilderStatus* _rebuilderStatus;
	NAFuture* _rebuildCompleteFuture;
	HMBCloudZone* _cloudZone;

}

@property (assign,nonatomic,__weak) HMBCloudZone * cloudZone;                                          //@synthesize cloudZone=_cloudZone - In the implementation block
@property (nonatomic,retain) NAFuture * rebuildCompleteFuture;                                         //@synthesize rebuildCompleteFuture=_rebuildCompleteFuture - In the implementation block
@property (copy) HMBCloudZoneRebuilderStatus * rebuilderStatus;                                        //@synthesize rebuilderStatus=_rebuilderStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isZoneRebuildInProgress,nonatomic,readonly) BOOL zoneRebuildInProgress; 
+(id)logCategory;
-(id)logIdentifier;
-(void)rebuild;
-(HMBCloudZoneRebuilderStatus *)rebuilderStatus;
-(NAFuture *)rebuildCompleteFuture;
-(id)zoneStartUp;
-(void)handleIdentityLost;
-(BOOL)isZoneRebuildInProgress;
-(void)handleZoneChanged;
-(id)initWithCloudZone:(id)arg1 ;
-(HMBCloudZone *)cloudZone;
-(void)setCloudZone:(HMBCloudZone *)arg1 ;
-(void)setRebuilderStatus:(HMBCloudZoneRebuilderStatus *)arg1 ;
-(void)setRebuildCompleteFuture:(NAFuture *)arg1 ;
@end

