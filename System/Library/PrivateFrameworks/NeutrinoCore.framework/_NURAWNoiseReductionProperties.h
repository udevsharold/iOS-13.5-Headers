/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NURAWNoiseReductionProperties.h>

@class NSString;

@interface _NURAWNoiseReductionProperties : NSObject <NURAWNoiseReductionProperties> {

	double _luminance;
	double _color;
	double _sharpness;
	double _contrast;
	double _detail;

}

@property (assign) double luminance;                                //@synthesize luminance=_luminance - In the implementation block
@property (assign) double color;                                    //@synthesize color=_color - In the implementation block
@property (assign) double sharpness;                                //@synthesize sharpness=_sharpness - In the implementation block
@property (assign) double contrast;                                 //@synthesize contrast=_contrast - In the implementation block
@property (assign) double detail;                                   //@synthesize detail=_detail - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(double)color;
-(void)setColor:(double)arg1 ;
-(double)sharpness;
-(void)setSharpness:(double)arg1 ;
-(double)contrast;
-(void)setContrast:(double)arg1 ;
-(void)setDetail:(double)arg1 ;
-(double)detail;
-(double)luminance;
-(void)setLuminance:(double)arg1 ;
@end

