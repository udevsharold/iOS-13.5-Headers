/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVNewsWidgetPlayerBehavior.h>

@protocol AVPlayerViewControllerContentTransitioning_NewsOnly;
@interface AVNewsWidgetPlayerLegacyBehavior : AVNewsWidgetPlayerBehavior {

	id<AVPlayerViewControllerContentTransitioning_NewsOnly> _legacyDelegate;

}

@property (assign,nonatomic,__weak) id<AVPlayerViewControllerContentTransitioning_NewsOnly> legacyDelegate;              //@synthesize legacyDelegate=_legacyDelegate - In the implementation block
-(id)playerForContentTransitionType:(long long)arg1 ;
-(void)willBeginContentTransition;
-(void)didUpdateContentTransitionProgress:(double)arg1 ;
-(void)willCompleteContentTransition;
-(void)didCompleteContentTransition;
-(void)willCancelContentTransition;
-(void)didCancelContentTransition;
-(id<AVPlayerViewControllerContentTransitioning_NewsOnly>)legacyDelegate;
-(void)setLegacyDelegate:(id<AVPlayerViewControllerContentTransitioning_NewsOnly>)arg1 ;
@end

