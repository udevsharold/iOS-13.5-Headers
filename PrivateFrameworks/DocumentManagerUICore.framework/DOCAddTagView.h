/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol DOCAddTagTextFieldDelegate;
@class DOCTagDotView, UILabel, UITextField, CAShapeLayer, NSString;

@interface DOCAddTagView : UIView <UITextFieldDelegate> {

	id<DOCAddTagTextFieldDelegate> _delegate;
	DOCTagDotView* _tagDotView;
	UILabel* _addNewTagLabel;
	UITextField* _tagNameTextField;
	CAShapeLayer* _borderLayer;

}

@property (nonatomic,readonly) DOCTagDotView * tagDotView;                                //@synthesize tagDotView=_tagDotView - In the implementation block
@property (nonatomic,readonly) UILabel * addNewTagLabel;                                  //@synthesize addNewTagLabel=_addNewTagLabel - In the implementation block
@property (nonatomic,readonly) UITextField * tagNameTextField;                            //@synthesize tagNameTextField=_tagNameTextField - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * borderLayer;                                //@synthesize borderLayer=_borderLayer - In the implementation block
@property (assign,nonatomic,__weak) id<DOCAddTagTextFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<DOCAddTagTextFieldDelegate>)delegate;
-(void)setDelegate:(id<DOCAddTagTextFieldDelegate>)arg1 ;
-(void)cancel;
-(void)commit;
-(NSString *)text;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(CAShapeLayer *)borderLayer;
-(DOCTagDotView *)tagDotView;
-(void)configureBorderPath;
-(UILabel *)addNewTagLabel;
-(UITextField *)tagNameTextField;
@end

