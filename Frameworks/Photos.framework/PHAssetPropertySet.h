/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHAssetPropertySet.h>
@class PHAsset;


@protocol PHAssetPropertySet <PHObjectPropertySet>
@property (nonatomic,__weak,readonly) PHAsset * asset; 
@required
+(id)propertySetName;
-(PHAsset *)asset;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3;

@end


@class PHAsset, NSString;

@interface PHAssetPropertySet : NSObject <PHAssetPropertySet> {

	PHAsset* _asset;

}

@property (nonatomic,__weak,readonly) PHAsset * asset;              //@synthesize asset=_asset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertiesToFetch;
+(id)entityName;
+(BOOL)isToMany;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
+(id)propertiesToPrefetch;
-(PHAsset *)asset;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
@end

