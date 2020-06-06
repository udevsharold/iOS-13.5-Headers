/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDCameraMetricsStreamLogEvent, NSError;

@interface HMDCameraStreamMetrics : HMFObject {

	HMDCameraMetricsStreamLogEvent* _cameraStreamMetricsLogEvent;
	NSError* _error;

}

@property (nonatomic,readonly) HMDCameraMetricsStreamLogEvent * cameraStreamMetricsLogEvent;              //@synthesize cameraStreamMetricsLogEvent=_cameraStreamMetricsLogEvent - In the implementation block
@property (nonatomic,retain) NSError * error;                                                             //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(BOOL)arg3 ;
-(HMDCameraMetricsStreamLogEvent *)cameraStreamMetricsLogEvent;
@end

