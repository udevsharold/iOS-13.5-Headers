/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/FigCaptureCalibrationContext.h>

@interface FigCaptureAutoFocusCalibrationContext : FigCaptureCalibrationContext
+(void)initialize;
+(void)printDebugInfoForRawStreamCalibrationData:(id)arg1 ;
+(unsigned)calibrationStatusFromRawStreamCalibrationData:(id)arg1 ;
+(id)calibrationDataStringForInternalLogging:(id)arg1 ;
+(id)createRawStreamCalibrationDataWithFailureReasons:(int)arg1 ;
-(void)reportForAggdLoggingWithCalibrationData:(id)arg1 isValid:(BOOL)arg2 magneticFieldMagnitude:(double)arg3 ;
-(id)initWithSupportedDeviceNames:(id)arg1 ;
@end

