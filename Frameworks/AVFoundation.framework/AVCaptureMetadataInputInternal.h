/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureInputPort, NSString;

@interface AVCaptureMetadataInputInternal : NSObject {

	AVCaptureInputPort* metadataPort;
	NSString* sourceID;
	opaqueCMFormatDescriptionRef desc;
	OpaqueCMClockRef clock;
	OpaqueCMBlockBufferRef emptyBoxedMetadata;

}
@end
