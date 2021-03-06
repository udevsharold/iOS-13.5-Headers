/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVWeakReferencingDelegateStorage, NSObject, AVVideoOutputSettings;

@interface AVPlayerItemVideoOutputInternal : NSObject {

	OpaqueCMTimebaseRef timebase;
	double currentRate;
	OpaqueFigVisualContextRef vc;
	AVWeakReference* playerItemWeakReference;
	AVWeakReferencingDelegateStorage* delegateStorage;
	OpaqueVTPixelBufferConformerRef pixelBufferConformer;
	NSObject*<OS_dispatch_queue> stateQueue;
	NSObject*<OS_dispatch_source> delegateWakeupSource;
	double advanceWakeUpInterval;
	BOOL advanceWakeUpIntervalIsValid;
	SCD_Struct_AV7 wakeUpImageTime;
	BOOL immediateWakeUp;
	long long clientStateOnRequestedMediaDataChangeNotification;
	BOOL suppressesPlayerRendering;
	BOOL shouldTagBuffersWithInfo;
	AVVideoOutputSettings* videoSettings;

}
@end

