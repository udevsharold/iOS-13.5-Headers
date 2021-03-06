/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UIViewController;

@interface _TVProductCollectionViewCell : UICollectionViewCell {

	UIView* _titleView;
	UIEdgeInsets _activeMargins;
	BOOL _marginActive;
	UIViewController* _viewController;
	UIEdgeInsets _partialMargins;
	UIEdgeInsets _margins;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) UIEdgeInsets partialMargins;                           //@synthesize partialMargins=_partialMargins - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margins;                                  //@synthesize margins=_margins - In the implementation block
-(void)prepareForReuse;
-(void)setViewController:(UIViewController *)arg1 ;
-(id)preferredFocusEnvironments;
-(BOOL)canBecomeFocused;
-(void)layoutSubviews;
-(UIViewController *)viewController;
-(id)titleView;
-(UIEdgeInsets)margins;
-(void)setMargins:(UIEdgeInsets)arg1 ;
-(void)setTitleView:(id)arg1 margins:(UIEdgeInsets)arg2 show:(BOOL)arg3 ;
-(void)showTitleView:(BOOL)arg1 ;
-(BOOL)isShowingTitleView;
-(void)enableWithMargins:(UIEdgeInsets)arg1 ;
-(void)disableMargins;
-(UIEdgeInsets)partialMargins;
-(void)setPartialMargins:(UIEdgeInsets)arg1 ;
@end

