/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UINotificationFeedbackGeneratorConfiguration;

@interface UINotificationFeedbackGenerator : UIFeedbackGenerator

@property (getter=_eventConfiguration,nonatomic,readonly) _UINotificationFeedbackGeneratorConfiguration * eventConfiguration; 
+(Class)_configurationClass;
-(void)notificationOccurred:(long long)arg1 ;
-(double)_preparationTimeoutForStyle:(long long)arg1 ;
-(id)_stats_key;
-(id)_eventConfiguration;
-(id)_categoryForType:(long long)arg1 ;
-(void)_playEventType:(long long)arg1 ;
-(void)_stopEventType:(long long)arg1 ;
-(void)_privateNotificationOccurred:(long long)arg1 ;
-(void)_privateNotificationInterrupted:(long long)arg1 ;
@end

