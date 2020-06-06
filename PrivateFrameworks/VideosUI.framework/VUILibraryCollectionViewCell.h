/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewCell.h>

@class UIViewController, VUISeparatorView;

@interface VUILibraryCollectionViewCell : UICollectionViewCell {

	UIViewController* _viewController;
	VUISeparatorView* _topSeparatorView;

}

@property (nonatomic,retain) UIViewController * viewController;                //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) VUISeparatorView * topSeparatorView;              //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
-(void)prepareForReuse;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)layoutSubviews;
-(UIViewController *)viewController;
-(VUISeparatorView *)topSeparatorView;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
@end

