/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/FigBaseCALayer.h>

@class CALayer;

@interface FigVideoContainerLayer : FigBaseCALayer {

	CALayer* _videoLayer;
	BOOL _shouldResizeVideoLayer;
	BOOL _isForScrubbingOnly;

}

@property (nonatomic,retain) CALayer * videoLayer;                                         //@synthesize videoLayer=_videoLayer - In the implementation block
@property (assign,nonatomic) BOOL shouldResizeVideoLayer;                                  //@synthesize shouldResizeVideoLayer=_shouldResizeVideoLayer - In the implementation block
@property (assign,getter=isForScrubbingOnly,nonatomic) BOOL forScrubbingOnly;              //@synthesize isForScrubbingOnly=_isForScrubbingOnly - In the implementation block
+(id)defaultActionForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(CALayer *)videoLayer;
-(void)setVideoLayer:(CALayer *)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)layoutSublayers;
-(BOOL)isForScrubbingOnly;
-(BOOL)shouldResizeVideoLayer;
-(void)setShouldResizeVideoLayer:(BOOL)arg1 ;
-(void)setForScrubbingOnly:(BOOL)arg1 ;
@end

