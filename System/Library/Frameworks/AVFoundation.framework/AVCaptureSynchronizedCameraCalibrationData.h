/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureSynchronizedData.h>

@class AVCameraCalibrationData;

@interface AVCaptureSynchronizedCameraCalibrationData : AVCaptureSynchronizedData {

	AVCameraCalibrationData* _cameraCalibrationData;
	BOOL _cameraCalibrationDataWasDropped;
	long long _droppedReason;

}

@property (readonly) AVCameraCalibrationData * cameraCalibrationData; 
@property (readonly) BOOL cameraCalibrationDataWasDropped; 
@property (readonly) long long droppedReason; 
-(void)dealloc;
-(AVCameraCalibrationData *)cameraCalibrationData;
-(long long)droppedReason;
-(BOOL)cameraCalibrationDataWasDropped;
-(id)_initWithCameraCalibrationData:(id)arg1 timestamp:(SCD_Struct_AV7)arg2 cameraCalibrationDataWasDropped:(BOOL)arg3 droppedReason:(long long)arg4 ;
@end

