/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, MPAVController;

@interface MPVideoPlaybackBackgroundView : UIView {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIEdgeInsets _edgeInsets;
	MPAVController* _player;

}

@property (nonatomic,retain) MPAVController * player;              //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(MPAVController *)player;
-(void)setPlayer:(MPAVController *)arg1 ;
-(void)_isExternalPlaybackActiveDidChange:(id)arg1 ;
-(void)_activeAudioRouteDidChange:(id)arg1 ;
-(void)_videoViewDidMoveToWindow:(id)arg1 ;
-(id)_imageNamed:(id)arg1 ;
-(void)_updateDisplay;
@end

