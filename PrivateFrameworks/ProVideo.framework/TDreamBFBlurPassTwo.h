/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/TDreamProgramWrapperTwoInput.h>

@interface TDreamBFBlurPassTwo : TDreamProgramWrapperTwoInput {

	int sigmaColorUniform;
	int sigmaUniform;
	double _sigma;
	double _sigmaColor;

}

@property (assign,nonatomic) double sigma;                   //@synthesize sigma=_sigma - In the implementation block
@property (assign,nonatomic) double sigmaColor;              //@synthesize sigmaColor=_sigmaColor - In the implementation block
-(id)init;
-(double)sigma;
-(void)setUniforms;
-(void)setSigma:(double)arg1 ;
-(double)sigmaColor;
-(void)setSigmaColor:(double)arg1 ;
@end

