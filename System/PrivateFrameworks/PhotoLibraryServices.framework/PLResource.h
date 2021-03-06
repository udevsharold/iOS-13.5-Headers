/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol PLResource <PLResourceIdentity>
@property (nonatomic,readonly) unsigned orientation; 
@property (nonatomic,readonly) long long unorientedWidth; 
@property (nonatomic,readonly) long long unorientedHeight; 
@property (nonatomic,readonly) long long orientedWidth; 
@property (nonatomic,readonly) long long orientedHeight; 
@property (nonatomic,readonly) float scale; 
@property (nonatomic,copy,readonly) id<PLAssetID> assetID; 
@property (nonatomic,readonly) unsigned long long cplType; 
@property (nonatomic,readonly) id<PLResourceDataStore> dataStore; 
@property (nonatomic,readonly) long long dataStoreSubtype; 
@property (nonatomic,readonly) id<PLResourceDataStoreKey> dataStoreKey; 
@property (nonatomic,readonly) unsigned recipeID; 
@property (nonatomic,readonly) short localAvailability; 
@property (nonatomic,readonly) short localAvailabilityTarget; 
@property (nonatomic,readonly) short remoteAvailability; 
@property (nonatomic,readonly) short remoteAvailabilityTarget; 
@property (nonatomic,readonly) int qualitySortValue; 
@property (nonatomic,readonly) id<PLCodecIdentity> codecID; 
@property (nonatomic,readonly) long long dataLength; 
@property (nonatomic,readonly) long long estimatedDataLength; 
@property (nonatomic,readonly) short trashedState; 
@property (nonatomic,readonly) NSDate * trashedDate; 
@required
-(float)scale;
-(unsigned)orientation;
-(id<PLResourceDataStore>)dataStore;
-(long long)dataLength;
-(unsigned long long)cplType;
-(short)trashedState;
-(unsigned)recipeID;
-(short)localAvailability;
-(BOOL)isDerivative;
-(long long)unorientedHeight;
-(long long)unorientedWidth;
-(id<PLResourceDataStoreKey>)dataStoreKey;
-(id<PLAssetID>)assetID;
-(NSDate *)trashedDate;
-(short)remoteAvailability;
-(int)qualitySortValue;
-(id<PLCodecIdentity>)codecID;
-(short)localAvailabilityTarget;
-(long long)estimatedDataLength;
-(BOOL)isDefaultOrientation;
-(BOOL)isPlayableVideo;
-(long long)orientedWidth;
-(long long)orientedHeight;
-(long long)dataStoreSubtype;
-(short)remoteAvailabilityTarget;

@end

