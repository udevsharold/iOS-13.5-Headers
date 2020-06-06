/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKEnterCurrencyAmountView;

@interface PKAccountBillPaymentAmountContainerView : UIView {

	unsigned long long _screenType;
	BOOL _showAmount;
	PKEnterCurrencyAmountView* _enterCurrencyAmountView;

}

@property (nonatomic,retain) PKEnterCurrencyAmountView * enterCurrencyAmountView;              //@synthesize enterCurrencyAmountView=_enterCurrencyAmountView - In the implementation block
@property (assign,nonatomic) BOOL showAmount;                                                  //@synthesize showAmount=_showAmount - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(PKEnterCurrencyAmountView *)enterCurrencyAmountView;
-(void)setShowAmount:(BOOL)arg1 ;
-(double)_amountLabelFontSize;
-(id)initWithCurrencyCode:(id)arg1 minimumAmount:(id)arg2 ;
-(void)setEnterCurrencyAmountView:(PKEnterCurrencyAmountView *)arg1 ;
-(BOOL)showAmount;
@end

