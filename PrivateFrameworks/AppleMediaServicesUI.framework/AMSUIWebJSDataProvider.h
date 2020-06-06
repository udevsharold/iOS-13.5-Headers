/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSUIWebJSPropertiesDelegate.h>

@class AMSUIWebView, AMSUIWebClientContext, AMSUIWebJSProperties, NSString;

@interface AMSUIWebJSDataProvider : NSObject <AMSUIWebJSPropertiesDelegate> {

	AMSUIWebView* _webView;
	AMSUIWebClientContext* _context;
	AMSUIWebJSProperties* _properties;

}

@property (assign,nonatomic,__weak) AMSUIWebView * webView;                       //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic,__weak) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) AMSUIWebJSProperties * properties;                   //@synthesize properties=_properties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(AMSUIWebJSProperties *)properties;
-(id)initWithContext:(id)arg1 ;
-(void)setProperties:(AMSUIWebJSProperties *)arg1 ;
-(AMSUIWebView *)webView;
-(void)setWebView:(AMSUIWebView *)arg1 ;
-(id)syncProperties;
-(id)runJSRequest:(id)arg1 ;
-(id)loadPageModelWithInfo:(id)arg1 ;
-(id)_syncPropertiesScriptWithProperties:(id)arg1 ;
-(id)_syncProperties:(id)arg1 ;
-(void)propertiesDidChange:(id)arg1 ;
-(id)createWebView;
@end

