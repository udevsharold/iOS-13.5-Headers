/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol OS_dispatch_queue, FigNeroLayerDelegate;
@class NSObject;

@interface FigNeroLayer : CALayer {

	NSObject*<OS_dispatch_queue> _neroQueue;
	OpaqueFigNeroidRef _neroid;
	id<FigNeroLayerDelegate> _neroDelegate;

}

@property (assign,nonatomic) id<FigNeroLayerDelegate> neroDelegate; 
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)_start;
-(void)setBounds:(CGRect)arg1 ;
-(id<FigNeroLayerDelegate>)neroDelegate;
-(void)setNeroDelegate:(id<FigNeroLayerDelegate>)arg1 ;
-(void)_dispatchNotification:(id)arg1 value:(id)arg2 ;
@end

