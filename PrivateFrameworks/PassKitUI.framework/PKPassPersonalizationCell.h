/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol PKPassPersonalizationCellDelegate;
@class PKContact, PKPassPersonalizationCellContext, NSString;

@interface PKPassPersonalizationCell : UITableViewCell <UITextFieldDelegate> {

	PKContact* _contact;
	PKPassPersonalizationCellContext* _context;
	id<PKPassPersonalizationCellDelegate> _delegate;

}

@property (nonatomic,readonly) PKContact * contact;                                       //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) PKPassPersonalizationCellContext * context;                //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) id<PKPassPersonalizationCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_textFieldFont;
+(id)_textLabelFont;
+(double)minimumCellHeight;
+(double)textLabelWidthForText:(id)arg1 ;
-(void)dealloc;
-(id<PKPassPersonalizationCellDelegate>)delegate;
-(void)setDelegate:(id<PKPassPersonalizationCellDelegate>)arg1 ;
-(PKPassPersonalizationCellContext *)context;
-(void)prepareForReuse;
-(PKContact *)contact;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)_editableTextFieldChanged:(id)arg1 ;
-(void)setContext:(id)arg1 andContact:(id)arg2 ;
@end

