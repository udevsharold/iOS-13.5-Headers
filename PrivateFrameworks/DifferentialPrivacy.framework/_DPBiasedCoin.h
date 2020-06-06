/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DPBiasedCoin : NSObject {

	double _bias;

}

@property (nonatomic,readonly) double bias;              //@synthesize bias=_bias - In the implementation block
+(id)coinWithBias:(double)arg1 ;
+(double)sanitizedProbability:(double)arg1 ;
-(id)init;
-(id)description;
-(double)bias;
-(BOOL)flip;
-(unsigned char)generateByte;
-(id)initWithBias:(double)arg1 ;
@end

