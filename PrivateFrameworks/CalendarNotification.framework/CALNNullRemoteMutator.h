/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CALNRemoteMutator.h>

@class NSString;

@interface CALNNullRemoteMutator : NSObject <CALNRemoteMutator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setSnoozeTimeInterval:(double)arg1 alarm:(id)arg2 calendarItem:(id)arg3 ;
-(void)setParticipantStatus:(long long)arg1 span:(long long)arg2 event:(id)arg3 ;
-(BOOL)deleteEvent:(id)arg1 withSpan:(long long)arg2 ;
@end

