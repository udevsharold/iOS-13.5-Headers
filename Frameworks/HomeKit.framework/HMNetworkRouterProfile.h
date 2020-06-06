/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMAccessoryProfile.h>
#import <libobjc.A.dylib/_HMNetworkRouterProfileDelegate.h>

@protocol HMNetworkRouterProfileDelegate;
@class NSArray, NSString;

@interface HMNetworkRouterProfile : HMAccessoryProfile <_HMNetworkRouterProfileDelegate> {

	id<HMNetworkRouterProfileDelegate> _delegate;

}

@property (readonly) unsigned long long networkStatus; 
@property (__weak) id<HMNetworkRouterProfileDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isSatellite,readonly) BOOL satellite; 
@property (readonly) NSArray * satelliteProfiles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<HMNetworkRouterProfileDelegate>)delegate;
-(void)setDelegate:(id<HMNetworkRouterProfileDelegate>)arg1 ;
-(id)services;
-(unsigned long long)networkStatus;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(id)initWithNetworkRouterProfile:(id)arg1 ;
-(id)networkRouterProfile;
-(id)identifiersForSatelliteProfiles;
-(void)setIdentifiersForSatelliteProfiles:(id)arg1 ;
-(void)routerProfileDidUpdateIdentifiersForSatellites:(id)arg1 ;
-(void)routerProfileDidUpdateNetworkStatus:(id)arg1 ;
-(BOOL)isSatellite;
-(NSArray *)satelliteProfiles;
@end

