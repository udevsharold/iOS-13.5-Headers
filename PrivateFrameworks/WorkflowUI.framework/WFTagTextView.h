/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFPlaceholderTextView.h>
#import <libobjc.A.dylib/WFTextField.h>

@protocol WFVariableProvider, WFVariableUIDelegate;
@class NSSet, WFVariableInputCoordinator, NSString, UITextInputPasswordRules, UITextRange, NSDictionary, UITextPosition, UIView, NSAttributedString, UIFont, UIColor;

@interface WFTagTextView : WFPlaceholderTextView <WFTextField> {

	BOOL _variablesDisabled;
	id<WFVariableProvider> _variableProvider;
	id<WFVariableUIDelegate> _variableUIDelegate;
	NSSet* _allowedVariableTypes;
	unsigned long long _syntaxHighlightingType;
	/*^block*/id _variableBlock;
	WFVariableInputCoordinator* _variableCoordinator;

}

@property (nonatomic,retain) WFVariableInputCoordinator * variableCoordinator;                //@synthesize variableCoordinator=_variableCoordinator - In the implementation block
@property (nonatomic,copy) id variableBlock;                                                  //@synthesize variableBlock=_variableBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (nonatomic,readonly) BOOL hasText; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) long long selectionAffinity; 
@property (nonatomic,readonly) id insertDictationResultPlaceholder; 
@property (assign,nonatomic) BOOL variablesDisabled;                                          //@synthesize variablesDisabled=_variablesDisabled - In the implementation block
@property (nonatomic,copy) NSSet * allowedVariableTypes;                                      //@synthesize allowedVariableTypes=_allowedVariableTypes - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableProvider> variableProvider;                  //@synthesize variableProvider=_variableProvider - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableUIDelegate> variableUIDelegate;              //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) long long textAlignment; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (assign,nonatomic) unsigned long long syntaxHighlightingType;                       //@synthesize syntaxHighlightingType=_syntaxHighlightingType - In the implementation block
-(void)dealloc;
-(void)setText:(NSString *)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)tintColorDidChange;
-(BOOL)resignFirstResponder;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setReturnKeyType:(long long)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(id<WFVariableProvider>)variableProvider;
-(unsigned long long)syntaxHighlightingType;
-(BOOL)variablesDisabled;
-(void)setVariableProvider:(id<WFVariableProvider>)arg1 ;
-(id)variableBlock;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(NSSet *)allowedVariableTypes;
-(void)setVariablesDisabled:(BOOL)arg1 ;
-(void)setAllowedVariableTypes:(NSSet *)arg1 ;
-(void)setVariableUIDelegate:(id<WFVariableUIDelegate>)arg1 ;
-(void)setSyntaxHighlightingType:(unsigned long long)arg1 ;
-(void)updateTextContainerInsets;
-(void)updateTextAttachments;
-(void)updateAllowedVariableTypes;
-(void)setVariableBlock:(id)arg1 ;
-(void)updateDoneButtonPresence;
-(WFVariableInputCoordinator *)variableCoordinator;
-(void)setVariableCoordinator:(WFVariableInputCoordinator *)arg1 ;
@end
