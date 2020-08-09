/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <SiriUI/SiriUIReusableView.h>
#import <SiriUI/SiriUISizableHeaderView.h>

@class UILabel, UIImageView, SiriUISnippetViewController, NSString, UIColor, UIButton;

@interface SiriUIReusableHeaderView : UICollectionReusableView <SiriUIReusableView, SiriUISizableHeaderView> {

	UILabel* _headerLabel;
	UIEdgeInsets _contentInsets;
	UIImageView* _chevronView;
	SiriUISnippetViewController* _snippetViewController;
	NSString* _titleText;
	UIColor* _titleTextColor;
	UIButton* _headerAreaButton;

}

@property (nonatomic,copy) NSString * titleText;                                                      //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) UIColor * titleTextColor;                                                  //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (nonatomic,readonly) UIButton * headerAreaButton;                                           //@synthesize headerAreaButton=_headerAreaButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController;              //@synthesize snippetViewController=_snippetViewController - In the implementation block
+(double)defaultHeight;
+(id)elementKind;
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(double)desiredHeightForWidth:(double)arg1 ;
-(UIColor *)titleTextColor;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(SiriUISnippetViewController *)snippetViewController;
-(void)setSnippetViewController:(SiriUISnippetViewController *)arg1 ;
-(void)_configureHeaderLabelForBounds:(CGRect)arg1 ;
-(UIButton *)headerAreaButton;
@end
