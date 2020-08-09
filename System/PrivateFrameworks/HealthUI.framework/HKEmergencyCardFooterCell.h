/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, NSAttributedString, NSString;

@interface HKEmergencyCardFooterCell : UITableViewCell <UITextViewDelegate> {

	UITextView* _footerTextView;
	NSAttributedString* _footerTextViewString;

}

@property (nonatomic,retain) UITextView * footerTextView;                            //@synthesize footerTextView=_footerTextView - In the implementation block
@property (nonatomic,retain) NSAttributedString * footerTextViewString;              //@synthesize footerTextViewString=_footerTextViewString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tintColorDidChange;
-(void)_dynamicUserInterfaceTraitDidChange;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(UITextView *)footerTextView;
-(void)setupViews;
-(void)setupConstraints;
-(void)_updateTextColor;
-(void)setFooterText:(id)arg1 ;
-(void)setTextViewDelegate:(id)arg1 ;
-(NSAttributedString *)footerTextViewString;
-(void)setFooterTextView:(UITextView *)arg1 ;
-(void)setFooterTextViewString:(NSAttributedString *)arg1 ;
@end
