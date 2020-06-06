/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIButton, UIImage, UIActivityIndicatorView;

@interface SXAudioComponentOverlayView : UIImageView {

	UIButton* _playButton;
	UIImage* _audioIndicatorImage;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,readonly) UIImage * audioIndicatorImage;                            //@synthesize audioIndicatorImage=_audioIndicatorImage - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) UIButton * playButton;                                    //@synthesize playButton=_playButton - In the implementation block
-(id)image;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)stopActivityIndicator;
-(void)startActivityIndicator;
-(UIButton *)playButton;
-(UIImage *)audioIndicatorImage;
@end

