/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/WebFormDelegate.h>

@class UIWebBrowserView, _UIWebFormDelegateEditedFormsMap, NSString;

@interface UIWebFormDelegate : NSObject <WebFormDelegate> {

	UIWebBrowserView* _webBrowserView;
	_UIWebFormDelegateEditedFormsMap* _editedForms;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)_shouldIgnoreFormTextChangesInFrame:(id)arg1 ;
-(void)_didEditFormElement:(id)arg1 inFrame:(id)arg2 ;
-(void)_clearEditedFormsInFrame:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 inFrame:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 inFrame:(id)arg2 ;
-(void)textDidChangeInTextField:(id)arg1 inFrame:(id)arg2 ;
-(void)textDidChangeInTextArea:(id)arg1 inFrame:(id)arg2 ;
-(void)didFocusTextField:(id)arg1 inFrame:(id)arg2 ;
-(BOOL)textField:(id)arg1 doCommandBySelector:(SEL)arg2 inFrame:(id)arg3 ;
-(void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5 ;
-(void)willSendSubmitEventToForm:(id)arg1 inFrame:(id)arg2 withValues:(id)arg3 ;
-(id)initWithWebBrowserView:(id)arg1 ;
-(void)dataSourceHasChangedForFrame:(id)arg1 ;
-(BOOL)formWasEdited;
-(SCD_Struct_UI65)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(BOOL)hasCurrentSuggestions;
-(void)acceptedAutoFillWord:(id)arg1 ;
@end

