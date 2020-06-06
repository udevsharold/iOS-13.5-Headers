/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WLKNotificationsImpl, WLKNotificationCenterDelegate;
@interface WLKNotificationCenter : NSObject {

	id<WLKNotificationsImpl> _impl;
	id<WLKNotificationCenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WLKNotificationCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultCenter;
-(id)init;
-(id<WLKNotificationCenterDelegate>)delegate;
-(void)setDelegate:(id<WLKNotificationCenterDelegate>)arg1 ;
-(void)setBadgeString:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setBadgeNumber:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4 ;
-(BOOL)isCategoryEnabledByUser:(long long)arg1 ;
@end

