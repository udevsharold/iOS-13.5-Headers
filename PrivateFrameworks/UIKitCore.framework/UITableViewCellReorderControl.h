/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class UITableViewCell, UIImageView;

@interface UITableViewCellReorderControl : UIControl {

	UITableViewCell* _cell;
	CGPoint _downPoint;
	double _focalY;
	double _focalHeight;
	UIImageView* _imageView;

}

@property (nonatomic,readonly) BOOL wantsMaskingWhileAnimatingDisabled; 
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_imageView;
-(void)_updateImageView;
-(void)_dynamicUserInterfaceTraitDidChange;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)shouldTrack;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)adjustLayoutForFocalRect:(CGRect)arg1 ;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(id)initWithTableViewCell:(id)arg1 ;
-(id)grabberImage;
@end

