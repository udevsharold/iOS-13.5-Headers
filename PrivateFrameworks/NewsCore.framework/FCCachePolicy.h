/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FCCachePolicy : NSObject <NSCopying> {

	unsigned long long _cachePolicy;
	double _maximumCachedAge;

}

@property (assign,nonatomic) unsigned long long cachePolicy;              //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (assign,nonatomic) double maximumCachedAge;                     //@synthesize maximumCachedAge=_maximumCachedAge - In the implementation block
+(id)defaultCachePolicy;
+(id)ignoreCacheCachePolicy;
+(id)cachePolicyWithSoftMaxAge:(double)arg1 ;
+(id)cachedOnlyCachePolicy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(unsigned long long)cachePolicy;
-(void)setMaximumCachedAge:(double)arg1 ;
-(double)maximumCachedAge;
@end

