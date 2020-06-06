/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WKProcessPool, NSCache;

@interface MKWebViewFactory : NSObject {

	WKProcessPool* _processPool;
	NSCache* _webViewCache;

}
+(id)sharedWebViewFactory;
-(id)init;
-(void)requeueItem:(id)arg1 ;
-(id)dequeueItemWithBridgeConfiguration:(id)arg1 ;
@end

