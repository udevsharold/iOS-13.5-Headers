/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UISearchBarScopeContainerLayout;

@interface _UISearchBarScopeContainerView : UIView {

	_UISearchBarScopeContainerLayout* _layout;

}

@property (nonatomic,retain) _UISearchBarScopeContainerLayout * layout;              //@synthesize layout=_layout - In the implementation block
-(_UISearchBarScopeContainerLayout *)layout;
-(void)setLayout:(_UISearchBarScopeContainerLayout *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(BOOL)_isKnownUISearchBarComponentContainer;
@end

