/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _DPLaplaceNoiseGenerator;

@interface _DPNumberRandomizer : NSObject {

	unsigned long long _range;
	double _epsilon;
	_DPLaplaceNoiseGenerator* _generator;

}

@property (nonatomic,readonly) unsigned long long range;                          //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) double epsilon;                                    //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,readonly) _DPLaplaceNoiseGenerator * generator;              //@synthesize generator=_generator - In the implementation block
+(id)numberRandomizerWithRange:(unsigned long long)arg1 epsilon:(double)arg2 ;
-(id)init;
-(id)description;
-(unsigned long long)range;
-(double)epsilon;
-(_DPLaplaceNoiseGenerator *)generator;
-(id)randomize:(id)arg1 ;
-(id)initWithRange:(unsigned long long)arg1 epsilon:(double)arg2 ;
@end

