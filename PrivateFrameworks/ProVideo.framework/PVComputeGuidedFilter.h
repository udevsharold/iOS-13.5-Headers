/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class PVImageBuffer;

@interface PVComputeGuidedFilter : NSObject {

	PVImageBuffer* _guide;
	int _radius;
	float _epsilon;

}

@property (nonatomic,readonly) int radius;                 //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) float epsilon;              //@synthesize epsilon=_epsilon - In the implementation block
-(int)radius;
-(float)epsilon;
-(BOOL)runCPUPathOnInput:(HGBitmap*)arg1 guide:(HGBitmap*)arg2 output:(HGBitmap*)arg3 radius:(int)arg4 epsilon:(float)arg5 ;
-(void)processStage1Float32Input:(float*)arg1 inputRowBytes:(unsigned long long)arg2 guide:(float*)arg3 guideRowBytes:(unsigned long long)arg4 output:(float*)arg5 outputRowBytes:(unsigned long long)arg6 width:(int)arg7 height:(int)arg8 radius:(int)arg9 ;
-(void)processStage1UInt8Input:(char*)arg1 inputRowBytes:(unsigned long long)arg2 guide:(char*)arg3 guideRowBytes:(unsigned long long)arg4 output:(float*)arg5 outputRowBytes:(unsigned long long)arg6 width:(int)arg7 height:(int)arg8 radius:(int)arg9 ;
-(void)processStage5Float32Guide:(float*)arg1 guideRowBytes:(unsigned long long)arg2 stats:(float*)arg3 statsRowBytes:(unsigned long long)arg4 output:(float*)arg5 outputRowBytes:(unsigned long long)arg6 width:(int)arg7 height:(int)arg8 radius:(int)arg9 ;
-(void)processStage5UInt6Guide:(char*)arg1 guideRowBytes:(unsigned long long)arg2 stats:(float*)arg3 statsRowBytes:(unsigned long long)arg4 output:(char*)arg5 outputRowBytes:(unsigned long long)arg6 width:(int)arg7 height:(int)arg8 radius:(int)arg9 ;
-(id)initWithGuide:(id)arg1 radius:(int)arg2 epsilon:(float)arg3 ;
-(BOOL)applyFilterToInput:(id)arg1 output:(id)arg2 ;
@end

