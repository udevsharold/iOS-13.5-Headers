/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SKUIMessageBannerDelegate;
@class UILabel, UIButton, UIView, NSAttributedString, NSString;

@interface SKUIMessageBanner : UIView {

	id<SKUIMessageBannerDelegate> _delegate;
	UILabel* _label;
	UIButton* _button;
	UIView* _borderView;
	UIButton* _clearButton;
	NSAttributedString* _attributedMessage;

}

@property (assign,nonatomic,__weak) id<SKUIMessageBannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * message; 
@property (nonatomic,retain) NSAttributedString * attributedMessage;                     //@synthesize attributedMessage=_attributedMessage - In the implementation block
@property (assign,nonatomic) BOOL showsClearButton; 
-(id<SKUIMessageBannerDelegate>)delegate;
-(void)setDelegate:(id<SKUIMessageBannerDelegate>)arg1 ;
-(id)value;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_buttonAction:(id)arg1 ;
-(void)setAttributedMessage:(NSAttributedString *)arg1 ;
-(void)setShowsClearButton:(BOOL)arg1 ;
-(BOOL)showsClearButton;
-(void)_clearButtonAction:(id)arg1 ;
-(NSAttributedString *)attributedMessage;
@end

