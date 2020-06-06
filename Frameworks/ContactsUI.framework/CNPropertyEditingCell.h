/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyCell.h>
#import <libobjc.A.dylib/CNPickerControllerDelegate.h>

@class UIButton, CNRepeatingGradientSeparatorView, NSString;

@interface CNPropertyEditingCell : CNPropertyCell <CNPickerControllerDelegate> {

	UIButton* _labelButton;
	CNRepeatingGradientSeparatorView* _vseparator;

}

@property (nonatomic,retain) CNRepeatingGradientSeparatorView * vseparator;              //@synthesize vseparator=_vseparator - In the implementation block
@property (nonatomic,readonly) UIButton * labelButton;                                   //@synthesize labelButton=_labelButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)wantsChevron;
+(BOOL)wantsStandardConstraints;
-(void)dealloc;
-(id)valueString;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)labelView;
-(id)variableConstraints;
-(double)minCellHeight;
-(id)constantConstraints;
-(void)picker:(id)arg1 didDeleteItem:(id)arg2 ;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)pickerDidCancel:(id)arg1 ;
-(void)setValueTextAttributes:(id)arg1 ;
-(void)updateWithPropertyItem:(id)arg1 ;
-(void)labelButtonClicked:(id)arg1 ;
-(double)leftValueMargin;
-(double)effectiveLabelWidth;
-(void)setVseparatorHidden:(BOOL)arg1 ;
-(void)regainFocus;
-(UIButton *)labelButton;
-(CNRepeatingGradientSeparatorView *)vseparator;
-(void)setVseparator:(CNRepeatingGradientSeparatorView *)arg1 ;
@end

