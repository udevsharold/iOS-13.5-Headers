/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface WLKRottenTomatoesRating : NSObject {

	unsigned long long _freshness;
	NSNumber* _freshnessPercentage;

}

@property (nonatomic,readonly) unsigned long long freshness;                     //@synthesize freshness=_freshness - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * freshnessPercentage;              //@synthesize freshnessPercentage=_freshnessPercentage - In the implementation block
+(unsigned long long)freshnessForString:(id)arg1 ;
-(id)init;
-(unsigned long long)freshness;
-(id)initWithFreshness:(unsigned long long)arg1 freshnessPercentage:(id)arg2 ;
-(NSNumber *)freshnessPercentage;
@end

