/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol PLClickPresentationInteractionPresentable <NSObject>
@property (assign,nonatomic,__weak) id<PLClickPresentationInteractionPresenting> presenter; 
@property (nonatomic,readonly) UIView * viewWithContent; 
@property (nonatomic,readonly) UIView * viewForTouchContinuation; 
@optional
-(UIView *)viewForTouchContinuation;
-(UIView *)viewWithContent;

@required
-(id<PLClickPresentationInteractionPresenting>)presenter;
-(void)setPresenter:(id)arg1;

@end

