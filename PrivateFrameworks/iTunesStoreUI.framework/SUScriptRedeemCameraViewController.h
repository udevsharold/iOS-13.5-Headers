/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, WebScriptObject, SURedeemCameraViewController;

@interface SUScriptRedeemCameraViewController : SUScriptObject {

	NSString* _backButtonTitle;
	WebScriptObject* _codeHandler;
	SURedeemCameraViewController* _redeemCameraViewController;

}

@property (assign,nonatomic,__weak) SURedeemCameraViewController * redeemCameraViewController;              //@synthesize redeemCameraViewController=_redeemCameraViewController - In the implementation block
@property (nonatomic,retain) NSString * backButtonTitle;                                                    //@synthesize backButtonTitle=_backButtonTitle - In the implementation block
@property (nonatomic,retain) WebScriptObject * codeHandler;                                                 //@synthesize codeHandler=_codeHandler - In the implementation block
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)_className;
-(void)dismiss;
-(void)present;
-(NSString *)backButtonTitle;
-(void)setBackButtonTitle:(NSString *)arg1 ;
-(id)attributeKeys;
-(void)setCodeHandler:(WebScriptObject *)arg1 ;
-(id)scriptAttributeKeys;
-(void)_performAction:(long long)arg1 withObject:(id)arg2 ;
-(WebScriptObject *)codeHandler;
-(SURedeemCameraViewController *)redeemCameraViewController;
-(void)codeDetected:(id)arg1 ;
-(void)setRedeemCameraViewController:(SURedeemCameraViewController *)arg1 ;
-(void)pauseCamera;
-(void)recognitionError;
-(void)recognitionSuccess;
-(void)resumeCamera;
@end

