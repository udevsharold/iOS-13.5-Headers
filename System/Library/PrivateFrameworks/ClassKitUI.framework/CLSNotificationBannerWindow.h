/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassKitUI.framework/ClassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKitUI/ClassKitUI-Structs.h>
#import <UIKitCore/UIWindow.h>

@protocol OS_dispatch_semaphore;
@class CLSNotificationBannerViewController, NSObject;

@interface CLSNotificationBannerWindow : UIWindow {

	CLSNotificationBannerViewController* _currentBannerViewController;
	NSObject*<OS_dispatch_semaphore> _bannerSemaphore;

}

@property (nonatomic,retain) CLSNotificationBannerViewController * currentBannerViewController;              //@synthesize currentBannerViewController=_currentBannerViewController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> bannerSemaphore;                               //@synthesize bannerSemaphore=_bannerSemaphore - In the implementation block
+(id)queue;
+(id)bannerWindow;
+(void)enqueBanner:(id)arg1 ;
-(id)init;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)handlePan:(id)arg1 ;
-(BOOL)_canAffectStatusBarAppearance;
-(BOOL)_includeInDefaultImageSnapshot;
-(CLSNotificationBannerViewController *)currentBannerViewController;
-(NSObject*<OS_dispatch_semaphore>)bannerSemaphore;
-(void)_showBanner:(id)arg1 ;
-(void)_hideBanner:(id)arg1 quickly:(BOOL)arg2 ;
-(void)setCurrentBannerViewController:(CLSNotificationBannerViewController *)arg1 ;
-(void)setBannerSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

