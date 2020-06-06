/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUPrimaryStateIconContentView.h>

@class HUShapeLayerView, HUVisualEffectContainerView, UIVisualEffectView, UIView, HUGarageDoorStateTransition;

@interface HUGarageDoorIconContentView : HUPrimaryStateIconContentView {

	BOOL _open;
	BOOL _clipBottomPanelShapesToBounds;
	HUShapeLayerView* _buildingView;
	HUVisualEffectContainerView* _buildingContainerView;
	HUShapeLayerView* _carView;
	UIVisualEffectView* _carContainerView;
	UIView* _doorContainerView;
	UIView* _doorHingeView;
	UIView* _doorView;
	UIVisualEffectView* _topPanelHingeView;
	HUShapeLayerView* _topPanelView;
	UIVisualEffectView* _middlePanelHingeView;
	HUShapeLayerView* _middlePanelView;
	UIVisualEffectView* _bottomPanelHingeView;
	HUShapeLayerView* _bottomPanelViewWithoutHandle;
	HUShapeLayerView* _bottomPanelViewWithHandle;
	HUGarageDoorStateTransition* _activeTransition;

}

@property (nonatomic,retain) HUShapeLayerView * buildingView;                                  //@synthesize buildingView=_buildingView - In the implementation block
@property (nonatomic,retain) HUVisualEffectContainerView * buildingContainerView;              //@synthesize buildingContainerView=_buildingContainerView - In the implementation block
@property (nonatomic,retain) HUShapeLayerView * carView;                                       //@synthesize carView=_carView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * carContainerView;                            //@synthesize carContainerView=_carContainerView - In the implementation block
@property (nonatomic,retain) UIView * doorContainerView;                                       //@synthesize doorContainerView=_doorContainerView - In the implementation block
@property (nonatomic,retain) UIView * doorHingeView;                                           //@synthesize doorHingeView=_doorHingeView - In the implementation block
@property (nonatomic,retain) UIView * doorView;                                                //@synthesize doorView=_doorView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * topPanelHingeView;                           //@synthesize topPanelHingeView=_topPanelHingeView - In the implementation block
@property (nonatomic,retain) HUShapeLayerView * topPanelView;                                  //@synthesize topPanelView=_topPanelView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * middlePanelHingeView;                        //@synthesize middlePanelHingeView=_middlePanelHingeView - In the implementation block
@property (nonatomic,retain) HUShapeLayerView * middlePanelView;                               //@synthesize middlePanelView=_middlePanelView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * bottomPanelHingeView;                        //@synthesize bottomPanelHingeView=_bottomPanelHingeView - In the implementation block
@property (nonatomic,retain) HUShapeLayerView * bottomPanelViewWithoutHandle;                  //@synthesize bottomPanelViewWithoutHandle=_bottomPanelViewWithoutHandle - In the implementation block
@property (nonatomic,retain) HUShapeLayerView * bottomPanelViewWithHandle;                     //@synthesize bottomPanelViewWithHandle=_bottomPanelViewWithHandle - In the implementation block
@property (assign,getter=isOpen,nonatomic) BOOL open;                                          //@synthesize open=_open - In the implementation block
@property (assign,nonatomic) BOOL clipBottomPanelShapesToBounds;                               //@synthesize clipBottomPanelShapesToBounds=_clipBottomPanelShapesToBounds - In the implementation block
@property (nonatomic,retain) HUGarageDoorStateTransition * activeTransition;                   //@synthesize activeTransition=_activeTransition - In the implementation block
+(id)buildingPathForBounds:(CGRect)arg1 ;
+(id)carPathForBounds:(CGRect)arg1 ;
+(id)pathForPanelAtPosition:(unsigned long long)arg1 bounds:(CGRect)arg2 showHandle:(BOOL)arg3 ;
+(double)_scaleFactorForBounds:(CGRect)arg1 referenceSize:(CGSize)arg2 ;
+(double)_referenceHeightForPanelAtPosition:(unsigned long long)arg1 open:(BOOL)arg2 ;
+(double)_referenceOriginYForPanelAtPosition:(unsigned long long)arg1 open:(BOOL)arg2 ;
+(id)_pathForMiddleDoorPanelWithHandleForBounds:(CGRect)arg1 ;
+(id)_pathForBottomDoorPanelWithHandleForBounds:(CGRect)arg1 ;
-(BOOL)isOpen;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setOpen:(BOOL)arg1 ;
-(HUGarageDoorStateTransition *)activeTransition;
-(void)setActiveTransition:(HUGarageDoorStateTransition *)arg1 ;
-(void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(BOOL)arg3 ;
-(void)updateColorsForDisplayStyle:(unsigned long long)arg1 ;
-(BOOL)wantsManagedVibrancyEffect;
-(id)managedVisualEffectViews;
-(void)setBuildingView:(HUShapeLayerView *)arg1 ;
-(HUShapeLayerView *)buildingView;
-(void)setBuildingContainerView:(HUVisualEffectContainerView *)arg1 ;
-(HUVisualEffectContainerView *)buildingContainerView;
-(void)setCarContainerView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)carContainerView;
-(void)setCarView:(HUShapeLayerView *)arg1 ;
-(HUShapeLayerView *)carView;
-(void)setDoorContainerView:(UIView *)arg1 ;
-(UIView *)doorContainerView;
-(void)setDoorHingeView:(UIView *)arg1 ;
-(UIView *)doorHingeView;
-(void)setDoorView:(UIView *)arg1 ;
-(UIView *)doorView;
-(void)setTopPanelHingeView:(UIVisualEffectView *)arg1 ;
-(void)setMiddlePanelHingeView:(UIVisualEffectView *)arg1 ;
-(void)setBottomPanelHingeView:(UIVisualEffectView *)arg1 ;
-(id)panelHingeViews;
-(id)_createPanelViewForPosition:(unsigned long long)arg1 showHandle:(BOOL)arg2 ;
-(void)setTopPanelView:(HUShapeLayerView *)arg1 ;
-(void)setMiddlePanelView:(HUShapeLayerView *)arg1 ;
-(void)setBottomPanelViewWithoutHandle:(HUShapeLayerView *)arg1 ;
-(void)setBottomPanelViewWithHandle:(HUShapeLayerView *)arg1 ;
-(UIVisualEffectView *)topPanelHingeView;
-(UIVisualEffectView *)middlePanelHingeView;
-(UIVisualEffectView *)bottomPanelHingeView;
-(HUShapeLayerView *)topPanelView;
-(HUShapeLayerView *)middlePanelView;
-(HUShapeLayerView *)bottomPanelViewWithoutHandle;
-(HUShapeLayerView *)bottomPanelViewWithHandle;
-(id)_panelViewsForPosition:(unsigned long long)arg1 ;
-(void)_enumeratePanelViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_updateLayoutForOpenState:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setClipBottomPanelShapesToBounds:(BOOL)arg1 ;
-(void)_updateCarLayoutForOpenState:(BOOL)arg1 ;
-(void)_updatePanelLayoutForOpenState:(BOOL)arg1 ;
-(CATransform3D)_doorHingeSublayerTransformForOpenState:(BOOL)arg1 ;
-(CGAffineTransform)_referenceScaleTransform;
-(CGRect)_frameForPanelHingeAtPosition:(unsigned long long)arg1 open:(BOOL)arg2 ;
-(CATransform3D)_panelHingeSublayerTransformWithOpenState:(BOOL)arg1 ;
-(CGRect)_frameForPanelAtPosition:(unsigned long long)arg1 open:(BOOL)arg2 relativeToHinge:(BOOL)arg3 ;
-(double)_referenceScaleFactor;
-(BOOL)clipBottomPanelShapesToBounds;
@end

