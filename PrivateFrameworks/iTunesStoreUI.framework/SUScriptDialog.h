/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSNumber;

@interface SUScriptDialog : SUScriptObject {

	NSString* _body;
	id _buttons;
	NSNumber* _cancelButtonIndex;
	NSNumber* _destructiveButtonIndex;
	id _textFields;
	NSString* _title;

}

@property (retain) NSString * body; 
@property (retain) id buttons; 
@property (retain) NSNumber * cancelButtonIndex; 
@property (retain) NSNumber * destructiveButtonIndex; 
@property (retain) id textFields; 
@property (retain) NSString * title; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)_className;
-(void)setDestructiveButtonIndex:(NSNumber *)arg1 ;
-(void)setCancelButtonIndex:(NSNumber *)arg1 ;
-(NSNumber *)cancelButtonIndex;
-(NSNumber *)destructiveButtonIndex;
-(id)textFields;
-(void)show;
-(void)dismiss;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(id)attributeKeys;
-(void)setButtons:(id)arg1 ;
-(id)buttons;
-(void)setTextFields:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)_nativeDialog;
-(void)_logSheetWarnings;
-(void)showSheet;
-(void)showFromDOMElement:(id)arg1 ;
-(void)showSheetInPopOver:(id)arg1 ;
@end

