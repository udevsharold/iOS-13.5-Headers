/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@class _SBOrientationTransformedContentView, NSMutableArray, NSArray;

@interface SBOrientationTransformWrapperView : UIView {

	_SBOrientationTransformedContentView* _transformedView;
	long long _contentOrientation;
	long long _containerOrientation;
	NSMutableArray* _hitTestViews;

}

@property (assign,nonatomic) long long contentOrientation;                //@synthesize contentOrientation=_contentOrientation - In the implementation block
@property (assign,nonatomic) long long containerOrientation;              //@synthesize containerOrientation=_containerOrientation - In the implementation block
@property (nonatomic,readonly) NSArray * contentViews; 
-(id)description;
-(void)setBounds:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)addContentView:(id)arg1 ;
-(NSArray *)contentViews;
-(void)setContainerOrientation:(long long)arg1 ;
-(void)setContentOrientation:(long long)arg1 ;
-(void)_updateGeometry;
-(long long)containerOrientation;
-(CGSize)_referenceContainerSize;
-(long long)contentOrientation;
-(void)addHitTestView:(id)arg1 ;
-(void)addGestureRecognizerToTransformedView:(id)arg1 ;
-(void)removeGestureRecognizerFromTransformedView:(id)arg1 ;
-(void)bringContentSubviewToFront:(id)arg1 ;
-(CGPoint)convertPointFromContainerInterfaceOrientationToContentInterfaceOrientation:(CGPoint)arg1 ;
-(CGRect)convertRectFromContainerInterfaceOrientationToContentInterfaceOrientation:(CGRect)arg1 ;
-(CGAffineTransform)convertTransformFromContainerInterfaceOrientationToContentInterfaceOrientation:(CGAffineTransform)arg1 ;
-(CGPoint)convertPointFromContentInterfaceOrientationToContainerInterfaceOrientation:(CGPoint)arg1 ;
-(CGRect)convertRectFromContentInterfaceOrientationToContainerInterfaceOrientation:(CGRect)arg1 ;
-(CGAffineTransform)convertTransformFromContentInterfaceOrientationToContainerInterfaceOrientation:(CGAffineTransform)arg1 ;
@end

