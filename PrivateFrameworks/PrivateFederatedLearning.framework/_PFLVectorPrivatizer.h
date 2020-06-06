/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _PFLVectorPrivatizer : NSObject {

	double _r;
	double _nu;

}

@property (r) double r;                    //@synthesize r=_r - In the implementation block
@property (assign) double nu;              //@synthesize nu=_nu - In the implementation block
+(id)vectorPrivatizerWithGamma:(double)arg1 nu:(double)arg2 ;
-(id)init;
-(id)description;
-(double)r;
-(void)setR:(double)arg1 ;
-(id)initWithGamma:(double)arg1 nu:(double)arg2 ;
-(id)privatizeUnitWithVector:(id)arg1 maxRejection:(unsigned long long)arg2 minCDProduct:(double)arg3 precision:(double)arg4 ;
-(double)privMagn:(double)arg1 ;
-(double)nu;
-(id)sampleUnitSDPWithUnitVector:(id)arg1 gamma:(double)arg2 maxRejection:(unsigned long long)arg3 minCDProduct:(double)arg4 precision:(double)arg5 ;
-(double)biasWithD:(double)arg1 minCDProduct:(double)arg2 ;
-(id)sdpWithVector:(id)arg1 maxRejection:(unsigned long long)arg2 minCDProduct:(double)arg3 precision:(double)arg4 ;
-(void)setNu:(double)arg1 ;
@end

