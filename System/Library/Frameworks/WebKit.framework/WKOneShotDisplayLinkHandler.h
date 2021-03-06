/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class CADisplayLink;

@interface WKOneShotDisplayLinkHandler : NSObject {

	RemoteLayerTreeDrawingAreaProxy* _drawingAreaProxy;
	CADisplayLink* _displayLink;

}
-(void)dealloc;
-(void)invalidate;
-(void)pause;
-(void)schedule;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)displayLinkFired:(id)arg1 ;
-(id)initWithDrawingAreaProxy:(RemoteLayerTreeDrawingAreaProxy*)arg1 ;
@end

