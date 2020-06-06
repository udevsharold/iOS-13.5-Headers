/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface GEOPNRStringsFileReaderResult : NSObject {

	NSString* _country;
	NSString* _region;
	NSString* _city;

}

@property (nonatomic,retain) NSString * country;              //@synthesize country=_country - In the implementation block
@property (nonatomic,retain) NSString * region;               //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) NSString * city;                 //@synthesize city=_city - In the implementation block
@property (nonatomic,readonly) long long score; 
+(long long)maxPossibleScore;
-(long long)score;
-(NSString *)region;
-(NSString *)city;
-(NSString *)country;
-(void)setRegion:(NSString *)arg1 ;
-(BOOL)shouldOrderCityFirstForLanguage:(id)arg1 phoneNumberInCC:(id)arg2 ;
-(id)separatorForLanguage:(id)arg1 ;
-(id)initWithCountry:(id)arg1 region:(id)arg2 city:(id)arg3 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(id)aggregateStringWhileInCountry:(id)arg1 forLanguage:(id)arg2 ccOfNumber:(id)arg3 ;
-(BOOL)isPlaceHolderForEmpty;
-(void)setCountry:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
@end

