/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKLowPowerModeMonitor : _DKMonitor
+(id)eventStream;
+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventWithLowPowerModeState:(BOOL)arg1 ;
+(void)setLowPowerMode:(BOOL)arg1 ;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
-(void)lowPowerModeStateChanged:(id)arg1 ;
-(void)updateLowPowerMode;
@end

