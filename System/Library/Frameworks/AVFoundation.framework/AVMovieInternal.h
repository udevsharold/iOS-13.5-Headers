/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAssetInspectorLoader, NSURL, NSData, NSDictionary, NSArray, AVDispatchOnce;

@interface AVMovieInternal : NSObject {

	AVAssetInspectorLoader* loader;
	NSURL* URL;
	NSData* data;
	NSDictionary* initializationOptions;
	NSArray* tracks;
	AVDispatchOnce* makeTracksArrayOnce;

}
@end

