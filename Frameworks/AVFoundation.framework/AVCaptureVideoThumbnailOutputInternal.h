/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSArray;

@interface AVCaptureVideoThumbnailOutputInternal : NSObject {

	AVWeakReference* weakReference;
	AVWeakReference* delegateWeakReference;
	BOOL didPropagateContents;
	NSArray* filters;
	CGSize thumbnailSize;

}
-(id)init;
-(void)dealloc;
@end

