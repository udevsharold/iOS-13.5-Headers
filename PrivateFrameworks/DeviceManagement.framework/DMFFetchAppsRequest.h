/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSArray, NSNumber, NSURL;

@interface DMFFetchAppsRequest : DMFTaskRequest {

	BOOL _deleteFeedback;
	BOOL _managedAppsOnly;
	BOOL _advanceTransientStates;
	unsigned long long _type;
	NSArray* _bundleIdentifiers;
	NSNumber* _storeItemIdentifier;
	NSURL* _manifestURL;
	NSArray* _propertyKeys;

}

@property (assign,nonatomic) unsigned long long type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * bundleIdentifiers;                 //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL deleteFeedback;                       //@synthesize deleteFeedback=_deleteFeedback - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemIdentifier;              //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * manifestURL;                         //@synthesize manifestURL=_manifestURL - In the implementation block
@property (assign,nonatomic) BOOL managedAppsOnly;                      //@synthesize managedAppsOnly=_managedAppsOnly - In the implementation block
@property (assign,nonatomic) BOOL advanceTransientStates;               //@synthesize advanceTransientStates=_advanceTransientStates - In the implementation block
@property (nonatomic,copy) NSArray * propertyKeys;                      //@synthesize propertyKeys=_propertyKeys - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
-(id)init;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)bundleIdentifiers;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(NSNumber *)storeItemIdentifier;
-(void)setStoreItemIdentifier:(NSNumber *)arg1 ;
-(NSURL *)manifestURL;
-(void)setManifestURL:(NSURL *)arg1 ;
-(NSArray *)propertyKeys;
-(void)setPropertyKeys:(NSArray *)arg1 ;
-(BOOL)deleteFeedback;
-(void)setDeleteFeedback:(BOOL)arg1 ;
-(BOOL)managedAppsOnly;
-(BOOL)advanceTransientStates;
-(void)setManagedAppsOnly:(BOOL)arg1 ;
-(void)setAdvanceTransientStates:(BOOL)arg1 ;
@end

