/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CACAXNotificationObserverDelegate.h>
#import <libobjc.A.dylib/CACContentViewManager.h>

@class CACAXNotificationObserver;

@interface CACOutOfProcessPresentationManager : NSObject <CACAXNotificationObserverDelegate, CACContentViewManager> {

	CACAXNotificationObserver* _observer;

}

@property (nonatomic,retain) CACAXNotificationObserver * observer;              //@synthesize observer=_observer - In the implementation block
+(long long)remoteViewType;
+(int)axNotification;
-(id)init;
-(CACAXNotificationObserver *)observer;
-(void)setObserver:(CACAXNotificationObserver *)arg1 ;
-(void)hide;
-(BOOL)isShowing;
-(BOOL)isOverlay;
-(BOOL)isOutOfProcess;
-(void)handleAXNotificationData:(void*)arg1 ;
-(void)hideWithoutAnimation;
-(void)observer:(id)arg1 didObserveNotification:(int)arg2 notificationData:(void*)arg3 ;
-(void)presentWithData:(id)arg1 ;
@end

