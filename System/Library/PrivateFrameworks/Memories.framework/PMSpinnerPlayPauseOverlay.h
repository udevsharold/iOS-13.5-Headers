/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface PMSpinnerPlayPauseOverlay : UIView {

	unsigned long long _displayState;
	UIView* _spinnerView;
	UIView* _playPauseButton;

}

@property (nonatomic,retain) UIView * spinnerView;                         //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) UIView * playPauseButton;                     //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (assign,nonatomic) unsigned long long displayState;              //@synthesize displayState=_displayState - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setup;
-(UIView *)spinnerView;
-(void)setSpinnerView:(UIView *)arg1 ;
-(void)setPlayPauseButton:(UIView *)arg1 ;
-(UIView *)playPauseButton;
-(void)setShowAsPause:(BOOL)arg1 ;
-(unsigned long long)displayState;
-(void)setDisplayState:(unsigned long long)arg1 ;
@end

