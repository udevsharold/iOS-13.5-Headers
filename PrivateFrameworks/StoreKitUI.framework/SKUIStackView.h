/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, NSMutableArray, UIWindow;

@interface SKUIStackView : UIView {

	UIImage* _image;
	NSMutableArray* _stackViews;
	long long _stackViewStyle;
	UIWindow* _window;

}

@property (nonatomic,retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) long long stackViewStyle;              //@synthesize stackViewStyle=_stackViewStyle - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)performCompressionAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)_stackDepth;
-(id)_initSKUIStackView;
-(CGSize)_sizeOfItemAtIndex:(double)arg1 ;
-(UIOffset)_relativeOffsetOfItemAtIndex:(long long)arg1 withCenter:(CGPoint)arg2 ;
-(CGPoint)_centerInPerspectiveTargetViewCoordinates;
-(CGSize)_levelInsetSize;
-(CGSize)_normalizedDistanceFromVanishingPointForCenter:(CGPoint)arg1 perspectiveTargetView:(id)arg2 ;
-(UIOffset)_relativeOffsetForMinimumRelativeOffset:(UIOffset)arg1 maximumRelativeOffset:(UIOffset)arg2 normalizedDistanceFromVanishingPoint:(CGSize)arg3 ;
-(id)initWithStackViewStyle:(long long)arg1 ;
-(long long)stackViewStyle;
@end

