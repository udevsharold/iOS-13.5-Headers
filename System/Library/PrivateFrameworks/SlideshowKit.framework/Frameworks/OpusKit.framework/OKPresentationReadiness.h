/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OKPresentationReadiness <NSObject>
@required
-(void)notifyWhenBecomesReady:(/*^block*/id)arg1;
-(void)removeAllReadyNotifications;
-(BOOL)isReady:(BOOL)arg1;
-(double)readyProgress:(BOOL)arg1;

@end
