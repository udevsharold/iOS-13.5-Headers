/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString, UIFont, UIColor;

@interface TKLabelContainerView : UIView {

	UILabel* _label;
	UIEdgeInsets _labelPaddingInsets;

}

@property (nonatomic,copy) NSString * labelText; 
@property (nonatomic,retain) UIFont * labelFont; 
@property (nonatomic,retain) UIColor * labelTextColor; 
@property (nonatomic,retain) UIColor * labelShadowColor; 
@property (assign,nonatomic) UIOffset labelShadowOffset; 
@property (assign,nonatomic) UIEdgeInsets labelPaddingInsets;              //@synthesize labelPaddingInsets=_labelPaddingInsets - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setLabelFont:(UIFont *)arg1 ;
-(UIFont *)labelFont;
-(void)setLabelText:(NSString *)arg1 ;
-(NSString *)labelText;
-(UIColor *)labelTextColor;
-(void)setLabelTextColor:(UIColor *)arg1 ;
-(UIEdgeInsets)labelPaddingInsets;
-(UIColor *)labelShadowColor;
-(void)setLabelShadowColor:(UIColor *)arg1 ;
-(UIOffset)labelShadowOffset;
-(void)setLabelShadowOffset:(UIOffset)arg1 ;
-(void)setLabelPaddingInsets:(UIEdgeInsets)arg1 ;
@end

