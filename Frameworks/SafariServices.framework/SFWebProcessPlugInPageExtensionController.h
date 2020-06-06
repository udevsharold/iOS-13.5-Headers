/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WKWebProcessPlugInBrowserContextController, _WKRemoteObjectInterface, NSMutableDictionary;

@interface SFWebProcessPlugInPageExtensionController : NSObject {

	WKWebProcessPlugInBrowserContextController* _browserContextController;
	_WKRemoteObjectInterface* _extensionControllerInterface;
	NSMutableDictionary* _extensionToScriptWorldMap;

}
-(void)dealloc;
-(void)prepareJavaScriptWorldForSharingExtension:(id)arg1 javaScript:(id)arg2 ;
-(void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2 ;
-(void)_setUpExtensionControllerInterface;
-(void)clearExtensionScriptWorlds;
-(void)_clearExtensionControllerInterface;
-(void)evaluateJavaScriptForSharingExtension:(id)arg1 extraArguments:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithBrowserContextController:(id)arg1 ;
@end

