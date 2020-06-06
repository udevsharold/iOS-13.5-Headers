/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class AVPlayer;

@interface _PNPPencilMovieView : UIView {

	AVPlayer* _player;
	BOOL _repeat;

}
+(Class)layerClass;
+(double)_playbackRate;
-(void)teardown;
-(void)prepare;
-(id)_playerLayer;
-(void)completeRevolutionWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_applyFilterToLayer;
-(void)_playbackEnded;
@end

