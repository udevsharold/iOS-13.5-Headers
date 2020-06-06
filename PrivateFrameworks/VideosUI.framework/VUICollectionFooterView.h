/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class IKViewElement, VUIButton;

@interface VUICollectionFooterView : UICollectionReusableView {

	IKViewElement* _viewElement;
	IKViewElement* _buttonViewElement;
	VUIButton* _buttonView;
	UIEdgeInsets _padding;

}

@property (nonatomic,retain) IKViewElement * viewElement;                    //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) IKViewElement * buttonViewElement;              //@synthesize buttonViewElement=_buttonViewElement - In the implementation block
@property (nonatomic,retain) VUIButton * buttonView;                         //@synthesize buttonView=_buttonView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                           //@synthesize padding=_padding - In the implementation block
+(id)configureCollectionFooterViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)padding;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUIButton *)buttonView;
-(void)setButtonView:(VUIButton *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(void)setButtonViewElement:(IKViewElement *)arg1 ;
-(IKViewElement *)buttonViewElement;
@end

