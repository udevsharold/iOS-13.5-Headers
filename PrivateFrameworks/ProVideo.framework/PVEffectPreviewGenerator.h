/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVRendererBase.h>

@interface PVEffectPreviewGenerator : PVRendererBase
+(id)sharedGenerator;
+(void)cleanupCaches;
-(id)initWithOptions:(id)arg1 ;
-(void)generatePreviewForEffect:(id)arg1 atTime:(SCD_Struct_PV20)arg2 inputImage:(CGImageRef)arg3 outputSize:(CGSize)arg4 waitForFinish:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)cancelAllPendingPreviewRequests;
@end

