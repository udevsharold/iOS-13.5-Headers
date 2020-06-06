/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class UIView, SBIconImageView;

@interface SBIconImageCrossfadeView : SBFTouchPassThroughView {

	UIView* _containerView;
	UIView* _crossfadeContainerView;
	SBIconImageView* _iconImageView;
	UIView* _crossfadeView;
	double _containerScaleX;
	double _containerScaleY;
	double _morphFraction;
	BOOL _masksCorners;
	BOOL _performsTrueCrossfade;
	CGPoint _stretchAnchorPoint;

}

@property (nonatomic,readonly) UIView * containerView;                       //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) SBIconImageView * iconImageView; 
@property (nonatomic,readonly) UIView * crossfadeView; 
@property (assign,nonatomic) BOOL masksCorners;                              //@synthesize masksCorners=_masksCorners - In the implementation block
@property (assign,nonatomic) BOOL performsTrueCrossfade;                     //@synthesize performsTrueCrossfade=_performsTrueCrossfade - In the implementation block
@property (assign,nonatomic) CGPoint stretchAnchorPoint;                     //@synthesize stretchAnchorPoint=_stretchAnchorPoint - In the implementation block
-(void)cleanup;
-(UIView *)containerView;
-(void)layoutSubviews;
-(SBIconImageView *)iconImageView;
-(void)_updateCornerMask;
-(BOOL)performsTrueCrossfade;
-(void)setCrossfadeFraction:(double)arg1 ;
-(void)setMorphFraction:(double)arg1 ;
-(void)setPerformsTrueCrossfade:(BOOL)arg1 ;
-(BOOL)masksCorners;
-(void)setMasksCorners:(BOOL)arg1 ;
-(id)initWithImageView:(id)arg1 crossfadeView:(id)arg2 ;
-(void)setStretchAnchorPoint:(CGPoint)arg1 ;
-(void)prepareGeometry;
-(void)setAppSnapshotCornerRadius:(double)arg1 ;
-(void)applyCornerRadius:(double)arg1 ;
-(void)setCornerRadiusEnabled:(BOOL)arg1 ;
-(UIView *)crossfadeView;
-(CGPoint)stretchAnchorPoint;
@end

