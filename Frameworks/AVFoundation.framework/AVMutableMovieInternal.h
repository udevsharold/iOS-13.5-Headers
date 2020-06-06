/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSURL, NSData, NSDictionary, NSObject, NSMutableArray, AVDispatchOnce;

@interface AVMutableMovieInternal : NSObject {

	OpaqueFigMutableMovieRef figMutableMovie;
	OpaqueFigFormatReaderRef formatReader;
	OpaqueFigAssetRef figAsset;
	NSURL* URL;
	NSData* data;
	NSDictionary* initializationOptions;
	NSObject*<OS_dispatch_semaphore> trackWaitingSemaphore;
	NSObject*<OS_dispatch_semaphore> metadataWaitingSemaphore;
	NSMutableArray* tracks;
	AVDispatchOnce* makeTracksArrayOnce;

}
@end

