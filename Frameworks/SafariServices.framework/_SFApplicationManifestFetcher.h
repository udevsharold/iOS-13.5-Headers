/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _WKApplicationManifest, WKWebView;

@interface _SFApplicationManifestFetcher : NSObject {

	/*^block*/id _completionHandler;
	_WKApplicationManifest* _manifest;
	WKWebView* _webView;
	long long _state;

}
-(id)initWithWebView:(id)arg1 ;
-(void)getApplicationManifestWithCompletionHandler:(/*^block*/id)arg1 ;
@end

