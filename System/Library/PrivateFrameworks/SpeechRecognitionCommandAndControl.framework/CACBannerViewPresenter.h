/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, CACBannerView;

@interface CACBannerViewPresenter : NSObject {

	UIView* _containingView;
	CACBannerView* _bannerView;

}

@property (nonatomic,retain) CACBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,readonly) UIView * containingView;               //@synthesize containingView=_containingView - In the implementation block
+(double)durationToDisplayMessageString:(id)arg1 ;
-(UIView *)containingView;
-(CACBannerView *)bannerView;
-(void)setBannerView:(CACBannerView *)arg1 ;
-(void)_hideBannerView;
-(void)presentBannerViewWithText:(id)arg1 type:(long long)arg2 duration:(double)arg3 ;
-(id)initWithContainingView:(id)arg1 ;
-(void)presentBannerViewWithText:(id)arg1 type:(long long)arg2 ;
-(void)dismissBannerView;
@end

