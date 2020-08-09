/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMTypingIndicatorLayerProtocol <NSObject>
@property (assign,nonatomic) BOOL hasDarkBackground; 
@optional
-(void)setTraitCollection:(id)arg1;

@required
-(void)stopAnimation;
-(void)startPulseAnimation;
-(void)startGrowAnimation;
-(void)stopPulseAnimation;
-(void)startShrinkAnimationWithCompletionBlock:(/*^block*/id)arg1;
-(void)startGrowAnimationWithCompletionBlock:(/*^block*/id)arg1;
-(BOOL)hasDarkBackground;
-(void)setHasDarkBackground:(BOOL)arg1;

@end
