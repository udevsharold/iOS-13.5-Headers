/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PPPeopleSuggesterCacheEntry : NSObject {

	double _cacheTimeSecondsSince1970;
	NSArray* _identifiers;

}

@property (assign,nonatomic) double cacheTimeSecondsSince1970;              //@synthesize cacheTimeSecondsSince1970=_cacheTimeSecondsSince1970 - In the implementation block
@property (nonatomic,retain) NSArray * identifiers;                         //@synthesize identifiers=_identifiers - In the implementation block
-(NSArray *)identifiers;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(double)cacheTimeSecondsSince1970;
-(void)setCacheTimeSecondsSince1970:(double)arg1 ;
@end
