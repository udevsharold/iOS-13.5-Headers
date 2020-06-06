/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIImageView.h>

@class SVVideoPlayButton;

@interface SXPosterFrameView : UIImageView {

	SVVideoPlayButton* _playButton;

}

@property (nonatomic,retain) SVVideoPlayButton * playButton;              //@synthesize playButton=_playButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)accessibilityIgnoresInvertColors;
-(SVVideoPlayButton *)playButton;
-(void)setPlayButton:(SVVideoPlayButton *)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
@end

