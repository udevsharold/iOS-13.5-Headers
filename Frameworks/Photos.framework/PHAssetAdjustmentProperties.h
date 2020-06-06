/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@class NSString;

@interface PHAssetAdjustmentProperties : PHAssetPropertySet {

	NSString* _formatIdentifier;
	NSString* _formatVersion;
	unsigned long long _originalResourceChoice;

}

@property (nonatomic,readonly) NSString * formatIdentifier;                            //@synthesize formatIdentifier=_formatIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * formatVersion;                               //@synthesize formatVersion=_formatVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long originalResourceChoice;              //@synthesize originalResourceChoice=_originalResourceChoice - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(NSString *)formatVersion;
-(unsigned long long)originalResourceChoice;
-(NSString *)formatIdentifier;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
@end

