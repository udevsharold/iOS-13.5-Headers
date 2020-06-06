/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StocksUI/StocksUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSAttributedString, NSString, NSArray;

@interface StocksUI.EditStockView : UIView {

	 symbolLabel;
	 nameLabel;
	 exchangeLabel;
	 accessibilitySupplementaryActions;
	 accessibilityEscapeHandler;

}

@property (retain,nonatomic) NSAttributedString * accessibilityAttributedLabel; 
@property (copy,nonatomic) NSString * accessibilityValue; 
@property (copy,nonatomic) NSArray * accessibilityCustomActions; 
-(NSAttributedString *)accessibilityAttributedLabel;
-(NSString *)accessibilityValue;
-(void)setAccessibilityAttributedLabel:(NSAttributedString *)arg1 ;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(void)setAccessibilityCustomActions:(NSArray *)arg1 ;
-(NSArray *)accessibilityCustomActions;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

