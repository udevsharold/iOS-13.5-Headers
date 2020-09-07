/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetDestinationAssetCopyProperties : PHAssetPropertySet {

	long long _destinationAssetCopyState;

}

@property (nonatomic,readonly) long long destinationAssetCopyState;              //@synthesize destinationAssetCopyState=_destinationAssetCopyState - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(long long)destinationAssetCopyState;
@end
