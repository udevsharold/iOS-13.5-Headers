/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class NSLayoutConstraint, UITextField;

@interface _SFBookmarkTextEntryTableViewCell : UITableViewCell {

	NSLayoutConstraint* _leadingConstraint;
	UITextField* _textField;

}

@property (nonatomic,readonly) UITextField * editableTextField;              //@synthesize textField=_textField - In the implementation block
-(void)updateConstraints;
-(void)layoutMarginsDidChange;
-(void)safeAreaInsetsDidChange;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(UITextField *)editableTextField;
-(id)initWithText:(id)arg1 autocapitalizationType:(long long)arg2 autocorrectionType:(long long)arg3 ;
@end

