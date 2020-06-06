/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NBPhoneMetaData, NSString;

@interface NBMetadataHelper : NSObject {

	NBPhoneMetaData* _cachedMetaData;
	NSString* _cachedMetaDataKey;

}

@property (nonatomic,retain) NBPhoneMetaData * cachedMetaData;              //@synthesize cachedMetaData=_cachedMetaData - In the implementation block
@property (nonatomic,retain) NSString * cachedMetaDataKey;                  //@synthesize cachedMetaDataKey=_cachedMetaDataKey - In the implementation block
+(BOOL)hasValue:(id)arg1 ;
-(void)initializeHelper;
-(id)CCode2CNMap;
-(void)clearHelper;
-(id)getAllMetadata;
-(id)regionCodeFromCountryCode:(id)arg1 ;
-(id)countryCodeFromRegionCode:(id)arg1 ;
-(id)stringByTrimming:(id)arg1 ;
-(id)normalizeNonBreakingSpace:(id)arg1 ;
-(id)getMetadataForRegion:(id)arg1 ;
-(id)getMetadataForNonGeographicalRegion:(id)arg1 ;
-(NBPhoneMetaData *)cachedMetaData;
-(void)setCachedMetaData:(NBPhoneMetaData *)arg1 ;
-(NSString *)cachedMetaDataKey;
-(void)setCachedMetaDataKey:(NSString *)arg1 ;
@end

