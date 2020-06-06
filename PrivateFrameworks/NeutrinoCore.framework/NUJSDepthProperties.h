/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUJSProxy.h>
#import <libobjc.A.dylib/NUJSDepthPropertiesExport.h>

@class NUJSAVCameraCalibrationData, NUJSCGImageMetadata;

@interface NUJSDepthProperties : NUJSProxy <NUJSDepthPropertiesExport>

@property (readonly) id<NUAuxiliaryImageProperties> depthProperties; 
@property (readonly) NUJSAVCameraCalibrationData * cameraCalibrationData; 
@property (readonly) NUJSCGImageMetadata * depthMetaData; 
-(NUJSAVCameraCalibrationData *)cameraCalibrationData;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id<NUAuxiliaryImageProperties>)depthProperties;
-(id)initWithDepthProperties:(id)arg1 context:(id)arg2 ;
-(NUJSCGImageMetadata *)depthMetaData;
@end

