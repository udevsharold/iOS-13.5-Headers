/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WKWebView;

@interface LPFetcherConfiguration : NSObject <NSCopying> {

	WKWebView* _webViewForProcessSharing;
	long long _maximumResponseCount;

}

@property (nonatomic,retain) WKWebView * webViewForProcessSharing;              //@synthesize webViewForProcessSharing=_webViewForProcessSharing - In the implementation block
@property (assign,nonatomic) long long maximumResponseCount;                    //@synthesize maximumResponseCount=_maximumResponseCount - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWebViewForProcessSharing:(WKWebView *)arg1 ;
-(WKWebView *)webViewForProcessSharing;
-(long long)maximumResponseCount;
-(void)setMaximumResponseCount:(long long)arg1 ;
@end

