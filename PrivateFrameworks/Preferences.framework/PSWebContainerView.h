/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSData, NSString;

@interface PSWebContainerView : UIView <UIWebViewDelegate> {

	UIWebView* _webView;
	NSData* _content;

}

@property (nonatomic,readonly) UIWebView * webView;                 //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) NSData * content;                      //@synthesize content=_content - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSData *)content;
-(UIWebView *)webView;
-(void)layoutSubviews;
-(void)setContent:(NSData *)arg1 ;
-(void)setUserStyleSheet:(id)arg1 ;
-(BOOL)uiWebView:(id)arg1 previewIsAllowedForPosition:(CGPoint)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(double)heightForWidth:(double)arg1 ;
@end

