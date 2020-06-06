/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VideosExtrasBorderedImageView;

@interface VideosExtrasZoomingImageTransitionContext : NSObject {

	BOOL _interactive;
	VideosExtrasBorderedImageView* _zoomingImageView;
	unsigned long long _itemIndex;
	unsigned long long _appearState;

}

@property (nonatomic,retain) VideosExtrasBorderedImageView * zoomingImageView;              //@synthesize zoomingImageView=_zoomingImageView - In the implementation block
@property (assign,nonatomic) unsigned long long itemIndex;                                  //@synthesize itemIndex=_itemIndex - In the implementation block
@property (assign,nonatomic) unsigned long long appearState;                                //@synthesize appearState=_appearState - In the implementation block
@property (assign,getter=isInteractive,nonatomic) BOOL interactive;                         //@synthesize interactive=_interactive - In the implementation block
-(BOOL)isInteractive;
-(unsigned long long)itemIndex;
-(void)setItemIndex:(unsigned long long)arg1 ;
-(void)setInteractive:(BOOL)arg1 ;
-(void)setAppearState:(unsigned long long)arg1 ;
-(unsigned long long)appearState;
-(void)setZoomingImageView:(VideosExtrasBorderedImageView *)arg1 ;
-(id)initWithZoomingImageView:(id)arg1 itemIndex:(unsigned long long)arg2 appearState:(unsigned long long)arg3 isInteractive:(BOOL)arg4 ;
-(VideosExtrasBorderedImageView *)zoomingImageView;
@end

