/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKPGSVSectionHeaderView.h>

@protocol PKPGSVSectionHeaderView <NSObject>
@required
-(BOOL)needsUpdate;
-(id)trailingView;
-(id)leadingView;

@end


@protocol PKPGSVSectionHeaderViewDelegate;
@class UILabel, UIButton, UIActivityIndicatorView, NSString;

@interface PKPGSVSectionHeaderView : UIView <PKPGSVSectionHeaderView> {

	BOOL _sizesDirty;
	UILabel* _titleView;
	UILabel* _environmentLabel;
	UIButton* _actionButton;
	UIActivityIndicatorView* _activityIndicator;
	UIEdgeInsets _margins;
	id<PKPGSVSectionHeaderViewDelegate> _delegate;
	BOOL _showActivityIndicator;
	unsigned long long _passType;

}

@property (nonatomic,readonly) unsigned long long passType;              //@synthesize passType=_passType - In the implementation block
@property (assign,nonatomic) BOOL showActivityIndicator;                 //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)needsUpdate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(id)trailingView;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
-(BOOL)showActivityIndicator;
-(unsigned long long)passType;
-(id)leadingView;
-(id)initWithPassType:(unsigned long long)arg1 delegate:(id)arg2 ;
-(BOOL)_shouldShowMoreInfoButtonForBarcodePass;
-(void)addTapped;
-(void)_addTapped;
@end

