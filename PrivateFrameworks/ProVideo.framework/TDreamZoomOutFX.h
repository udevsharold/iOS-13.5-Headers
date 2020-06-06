/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamZoomOutFX : TDreamProgramWrapper {

	int aspectRatioUniform;
	int radiusUniform;
	int centerUniform;
	int scaleUniform;
	int rotacionUniform;
	int _rotacion;
	double _aspectRatio;
	double _radius;
	double _scale;
	CGPoint _center;

}

@property (assign,nonatomic) double aspectRatio;              //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (assign,nonatomic) CGPoint center;                  //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) int rotacion;                    //@synthesize rotacion=_rotacion - In the implementation block
@property (assign,nonatomic) double radius;                   //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double scale;                    //@synthesize scale=_scale - In the implementation block
-(id)init;
-(double)scale;
-(void)setSize:(CGSize)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)aspectRatio;
-(void)setAspectRatio:(double)arg1 ;
-(void)setUniforms;
-(void)setRotacion:(int)arg1 ;
-(void)adjustAspectRatio;
-(int)rotacion;
@end

