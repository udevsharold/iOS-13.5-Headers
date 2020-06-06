/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSHashTable, NSMapTable;

@interface MPAssistantAnalyticsReportingController : NSObject {

	NSObject*<OS_dispatch_queue> _eventQueue;
	NSString* _lastSiriReferenceIdentifierForPlaybackStart;
	NSString* _lastSiriReferenceIdentifierForWillReload;
	NSString* _lastSiriReferenceIdentifierWithLikelyToKeepUp;
	NSHashTable* _players;
	NSMapTable* _playerToObservedTimebase;

}
+(id)sharedController;
-(id)_init;
-(void)_itemDidChangeNotification:(id)arg1 ;
-(void)_bufferingStateDidChangeNotification:(id)arg1 ;
-(void)registerPlayer:(id)arg1 ;
-(void)unregisterPlayer:(id)arg1 ;
-(void)logAssistantEvent:(id)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)_itemTimebaseDidChangeNotification:(id)arg1 ;
-(void)_willReloadWithPlaybackContextNotification:(id)arg1 ;
-(void)_attemptLikelyToKeepUpReportingEventWithPlayer:(id)arg1 ;
-(void)_attemptPlaybackStartReportingEventWithPlayer:(id)arg1 ;
-(id)_createContextDictionaryWithSiriReferenceIdentifier:(id)arg1 siriWHAMetricsInfo:(id)arg2 ;
-(void)_timebaseEffectiveRateChangedNotification;
@end

