/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceLandmarkDetectorDNN.h>

@interface VNFaceLandmarkDetectorRevision3 : VNFaceLandmarkDetectorDNN
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg1 ;
+(unsigned char)landmarkDetectorDNNVersion;
-(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(CGRect)normalizedFaceBBoxForLandmarks:(id)arg1 ;
@end

