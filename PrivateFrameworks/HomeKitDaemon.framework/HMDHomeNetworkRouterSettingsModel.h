/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString;

@interface HMDHomeNetworkRouterSettingsModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSString * activeNetworkRouterAccessoryUUID; 
@property (nonatomic,retain) NSString * minimumNetworkRouterSupportHomeKitVersion; 
@property (nonatomic,retain) NSString * minHomeKitVersionForAccessoryNetworkProtectionChange; 
+(id)properties;
+(id)modelIDForHome:(id)arg1 ;
+(id)defaultModelForHome:(id)arg1 ;
+(id)modelNamespace;
-(id)dependentUUIDs;
@end

