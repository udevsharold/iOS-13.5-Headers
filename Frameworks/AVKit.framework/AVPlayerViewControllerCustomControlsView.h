/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UILayoutGuide, UIView;

@interface AVPlayerViewControllerCustomControlsView : UIView {

	BOOL _needsInitialConstraints;
	NSLayoutConstraint* _transportControlsVisibleConstraint;
	NSLayoutConstraint* _transportControlsHiddenConstraint;
	NSLayoutConstraint* _volumeControlsVisibleConstraint;
	NSLayoutConstraint* _volumeControlsHiddenConstraint;
	BOOL _areTransportControlsVisible;
	BOOL _areVolumeControlsVisible;
	UILayoutGuide* _transportControlsAreaLayoutGuide;
	UILayoutGuide* _displayModeControlsAreaLayoutGuide;
	UILayoutGuide* _volumeControlsAreaLayoutGuide;
	UILayoutGuide* _unobscuredCenterAreaLayoutGuide;
	UILayoutGuide* _animatedUnobscuredCenterAreaLayoutGuide;
	UILayoutGuide* _unobscuredTopAreaLayoutGuide;
	UIView* _transportControlsAreaLayoutGuideProvidingView;
	UIView* _displayModeControlsAreaLayoutGuideProvidingView;
	UIView* _volumeControlsAreaLayoutGuideProvidingView;
	UIView* _unobscuredTopAreaLayoutGuideProvidingView;
	UIView* _unobscuredCenterAreaLayoutGuideProvidingView;
	UIView* _animatedUnobscuredCenterAreaLayoutGuideProvidingView;

}

@property (nonatomic,readonly) UIView * transportControlsAreaLayoutGuideProvidingView;                     //@synthesize transportControlsAreaLayoutGuideProvidingView=_transportControlsAreaLayoutGuideProvidingView - In the implementation block
@property (nonatomic,readonly) UIView * displayModeControlsAreaLayoutGuideProvidingView;                   //@synthesize displayModeControlsAreaLayoutGuideProvidingView=_displayModeControlsAreaLayoutGuideProvidingView - In the implementation block
@property (nonatomic,readonly) UIView * volumeControlsAreaLayoutGuideProvidingView;                        //@synthesize volumeControlsAreaLayoutGuideProvidingView=_volumeControlsAreaLayoutGuideProvidingView - In the implementation block
@property (nonatomic,readonly) UIView * unobscuredTopAreaLayoutGuideProvidingView;                         //@synthesize unobscuredTopAreaLayoutGuideProvidingView=_unobscuredTopAreaLayoutGuideProvidingView - In the implementation block
@property (nonatomic,readonly) UIView * unobscuredCenterAreaLayoutGuideProvidingView;                      //@synthesize unobscuredCenterAreaLayoutGuideProvidingView=_unobscuredCenterAreaLayoutGuideProvidingView - In the implementation block
@property (nonatomic,readonly) UIView * animatedUnobscuredCenterAreaLayoutGuideProvidingView;              //@synthesize animatedUnobscuredCenterAreaLayoutGuideProvidingView=_animatedUnobscuredCenterAreaLayoutGuideProvidingView - In the implementation block
@property (assign,nonatomic) BOOL areTransportControlsVisible;                                             //@synthesize areTransportControlsVisible=_areTransportControlsVisible - In the implementation block
@property (assign,nonatomic) BOOL areVolumeControlsVisible;                                                //@synthesize areVolumeControlsVisible=_areVolumeControlsVisible - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * transportControlsAreaLayoutGuide;                           //@synthesize transportControlsAreaLayoutGuide=_transportControlsAreaLayoutGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * displayModeControlsAreaLayoutGuide;                         //@synthesize displayModeControlsAreaLayoutGuide=_displayModeControlsAreaLayoutGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * volumeControlsAreaLayoutGuide;                              //@synthesize volumeControlsAreaLayoutGuide=_volumeControlsAreaLayoutGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * unobscuredCenterAreaLayoutGuide;                            //@synthesize unobscuredCenterAreaLayoutGuide=_unobscuredCenterAreaLayoutGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * animatedUnobscuredCenterAreaLayoutGuide;                    //@synthesize animatedUnobscuredCenterAreaLayoutGuide=_animatedUnobscuredCenterAreaLayoutGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * unobscuredTopAreaLayoutGuide;                               //@synthesize unobscuredTopAreaLayoutGuide=_unobscuredTopAreaLayoutGuide - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)updateConstraints;
-(void)setAreVolumeControlsVisible:(BOOL)arg1 ;
-(void)setAreTransportControlsVisible:(BOOL)arg1 ;
-(UILayoutGuide *)transportControlsAreaLayoutGuide;
-(UILayoutGuide *)displayModeControlsAreaLayoutGuide;
-(UILayoutGuide *)volumeControlsAreaLayoutGuide;
-(UILayoutGuide *)unobscuredCenterAreaLayoutGuide;
-(UILayoutGuide *)animatedUnobscuredCenterAreaLayoutGuide;
-(UILayoutGuide *)unobscuredTopAreaLayoutGuide;
-(UIView *)transportControlsAreaLayoutGuideProvidingView;
-(UIView *)displayModeControlsAreaLayoutGuideProvidingView;
-(UIView *)volumeControlsAreaLayoutGuideProvidingView;
-(UIView *)unobscuredTopAreaLayoutGuideProvidingView;
-(UIView *)unobscuredCenterAreaLayoutGuideProvidingView;
-(UIView *)animatedUnobscuredCenterAreaLayoutGuideProvidingView;
-(BOOL)areTransportControlsVisible;
-(BOOL)areVolumeControlsVisible;
@end

