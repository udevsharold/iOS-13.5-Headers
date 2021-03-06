/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXAppStateMonitor.h>

@interface NewsArticles.ArticleViewerAppStateMonitor : NSObject <SXAppStateMonitor> {

	 onForegroundClosures;
	 onEnterBackgroundClosures;
	 onWindowForegroundClosures;
	 onWindowBackgroundClosures;

}
-(void)performOnApplicationDidEnterBackground:(/*^block*/id)arg1 ;
-(void)performOnApplicationDidBecomeActive:(/*^block*/id)arg1 ;
-(void)performOnApplicationWillEnterForeground:(/*^block*/id)arg1 ;
-(void)performOnApplicationWindowDidBecomeForeground:(/*^block*/id)arg1 ;
-(void)performOnApplicationWindowDidBecomeBackground:(/*^block*/id)arg1 ;
-(id)init;
@end

