/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCopying.h>

@interface FCPaywallTopOffsetConfiguration : NSObject <NSCopying> {

	double _compactPortraitTopOffsetRatio;
	double _compactLandscapeTopOffsetRatio;
	double _regularPortraitTopOffsetRatio;
	double _regularLandscapeTopOffsetRatio;

}

@property (nonatomic,readonly) double compactPortraitTopOffsetRatio;               //@synthesize compactPortraitTopOffsetRatio=_compactPortraitTopOffsetRatio - In the implementation block
@property (nonatomic,readonly) double compactLandscapeTopOffsetRatio;              //@synthesize compactLandscapeTopOffsetRatio=_compactLandscapeTopOffsetRatio - In the implementation block
@property (nonatomic,readonly) double regularPortraitTopOffsetRatio;               //@synthesize regularPortraitTopOffsetRatio=_regularPortraitTopOffsetRatio - In the implementation block
@property (nonatomic,readonly) double regularLandscapeTopOffsetRatio;              //@synthesize regularLandscapeTopOffsetRatio=_regularLandscapeTopOffsetRatio - In the implementation block
-(id)init;
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)initWithCompactPortraitTopOffsetRatio:(double)arg1 compactLandscapeTopOffsetRatio:(double)arg2 regularPortraitTopOffsetRatio:(double)arg3 regularLandscapeTopOffsetRatio:(double)arg4 ;
-(double)compactPortraitTopOffsetRatio;
-(double)compactLandscapeTopOffsetRatio;
-(double)regularPortraitTopOffsetRatio;
-(double)regularLandscapeTopOffsetRatio;
@end

