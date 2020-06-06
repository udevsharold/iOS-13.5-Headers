/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebVideoFullscreenController : NSObject {

	RefPtr<VideoFullscreenControllerContext, WTF::DumbPtrTraits<VideoFullscreenControllerContext> >* _context;
	RefPtr<WebCore::HTMLVideoElement, WTF::DumbPtrTraits<WebCore::HTMLVideoElement> >* _videoElement;

}
-(id)init;
-(void)setVideoElement:(HTMLVideoElement*)arg1 ;
-(HTMLVideoElement*)videoElement;
-(void)enterFullscreen:(id)arg1 mode:(unsigned)arg2 ;
-(void)exitFullscreen;
-(void)requestHideAndExitFullscreen;
-(void)didFinishFullscreen:(VideoFullscreenControllerContext*)arg1 ;
@end

