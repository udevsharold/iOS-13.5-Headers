/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DPRandomBitPositionGenerator : NSObject {

	unsigned long long _m;

}

@property (m,nonatomic,readonly) unsigned long long m;              //@synthesize m=_m - In the implementation block
+(id)generatorWithDimensionality:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)sample;
-(unsigned long long)m;
-(id)initWithDimensionality:(unsigned long long)arg1 ;
@end

