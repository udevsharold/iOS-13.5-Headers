/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NUAVPlayerViewDelegate;
@class AVPlayer;

@interface NUAVPlayerView : UIView {

	Ai _updateReadyForDisplayID;
	BOOL _observerDetached;
	BOOL _readyForDisplay;
	AVPlayer* _player;
	id<NUAVPlayerViewDelegate> _delegate;

}

@property (assign,setter=_setReadyForDisplay:,getter=isReadyForDisplay,nonatomic) BOOL readyForDisplay;              //@synthesize readyForDisplay=_readyForDisplay - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                                      //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<NUAVPlayerViewDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
+(Class)layerClass;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<NUAVPlayerViewDelegate>)delegate;
-(void)setDelegate:(id<NUAVPlayerViewDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(BOOL)isReadyForDisplay;
-(void)dispose;
-(void)_setReadyForDisplay:(BOOL)arg1 ;
-(void)_updateReadyForDisplayWithID:(A)arg1 :(int)arg2 ;
@end

