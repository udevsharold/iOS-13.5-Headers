/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class PKDashboardCreditAccountItem, UILabel;

@interface PKCreditBalanceCell : PKDashboardCollectionViewCell {

	BOOL _isCompactUI;
	BOOL _useAccssibilityLayout;
	PKDashboardCreditAccountItem* _item;
	UILabel* _labelBalance;
	UILabel* _labelAmount;
	UILabel* _labelCreditAvailable;

}

@property (nonatomic,retain) PKDashboardCreditAccountItem * item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) UILabel * labelBalance;                         //@synthesize labelBalance=_labelBalance - In the implementation block
@property (nonatomic,readonly) UILabel * labelAmount;                          //@synthesize labelAmount=_labelAmount - In the implementation block
@property (nonatomic,readonly) UILabel * labelCreditAvailable;                 //@synthesize labelCreditAvailable=_labelCreditAvailable - In the implementation block
@property (assign,nonatomic) BOOL useAccssibilityLayout;                       //@synthesize useAccssibilityLayout=_useAccssibilityLayout - In the implementation block
-(PKDashboardCreditAccountItem *)item;
-(void)setItem:(PKDashboardCreditAccountItem *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_createSubviews;
-(BOOL)useAccssibilityLayout;
-(void)setUseAccssibilityLayout:(BOOL)arg1 ;
-(UILabel *)labelBalance;
-(UILabel *)labelAmount;
-(UILabel *)labelCreditAvailable;
@end
