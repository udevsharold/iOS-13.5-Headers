/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAEOverlappingCircles : PAEGeneratorDefaultBase
-(void)dealloc;
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(id)multiplyMatrix:(id)arg1 byMatrix:(id)arg2 ;
-(void)getTransformMatrix:(double*)arg1 forCenterX:(double)arg2 centerY:(double)arg3 angle:(double)arg4 andOutputImage:(id)arg5 ;
-(BOOL)variesOverTime;
-(BOOL)frameSetup:(SCD_Struct_PA79*)arg1 hardware:(BOOL*)arg2 software:(BOOL*)arg3 ;
-(BOOL)frameCleanup;
-(BOOL)parameterChanged:(unsigned)arg1 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInfo:(SCD_Struct_PA79*)arg2 ;
@end

