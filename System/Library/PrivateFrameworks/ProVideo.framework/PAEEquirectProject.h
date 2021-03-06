/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAEEquirectProject : PAEGeneratorDefaultBase
-(void)dealloc;
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)variesOverTime;
-(BOOL)frameSetup:(SCD_Struct_PA79*)arg1 hardware:(BOOL*)arg2 software:(BOOL*)arg3 ;
-(PCMatrix44Tmpl<float>)getViewMatrix:(/*function pointer*/void**)arg1 ;
-(BOOL)frameCleanup;
-(double)getProjectionFOVYDegrees:(/*function pointer*/void**)arg1 ;
-(HGEquirectProjectParams)getParams:(SCD_Struct_PA79*)arg1 :(id)arg2 :(id)arg3 :(id)arg4 ;
-(BOOL)renderOutput:(id)arg1 withInfo:(SCD_Struct_PA79*)arg2 ;
@end

