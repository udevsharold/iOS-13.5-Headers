/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBUIBannerSource.h>

@protocol SBUIBannerTarget;
@class NSMutableArray, NSString;

@interface SBTestBannerSource : NSObject <SBUIBannerSource> {

	id<SBUIBannerTarget> _target;
	NSMutableArray* _enqueuedItems;
	long long _count;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id)peekNextBannerItemForTarget:(id)arg1 ;
-(id)dequeueNextBannerItemForTarget:(id)arg1 ;
-(id)newBannerViewForContext:(id)arg1 ;
-(void)bannerViewWillAppear:(id)arg1 ;
-(void)bannerViewDidAppear:(id)arg1 ;
-(void)bannerViewWillDismiss:(id)arg1 forReason:(int)arg2 ;
-(void)bannerViewDidDismiss:(id)arg1 forReason:(int)arg2 ;
-(void)enqueueBanner;
-(void)dismissBanner;
@end

