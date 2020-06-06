/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderJob.h>

@class NSArray, NUFaceDetectionRequest;

@interface NUFaceDetectionJob : NURenderJob {

	NSArray* _faces;
	SCD_Struct_NU7 _imageSize;

}

@property (readonly) NUFaceDetectionRequest * faceDetectionRequest; 
-(id)result;
-(id)cacheKey;
-(BOOL)render:(out id*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)cleanUp;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithFaceDetectionRequest:(id)arg1 ;
-(NUFaceDetectionRequest *)faceDetectionRequest;
-(id)detectFaceRectsInBuffer:(CVBufferRef)arg1 maxResultCount:(unsigned long long)arg2 error:(out id*)arg3 ;
-(id)detectFaceLandmarksInBuffer:(CVBufferRef)arg1 withFaceRects:(id)arg2 error:(out id*)arg3 ;
@end

