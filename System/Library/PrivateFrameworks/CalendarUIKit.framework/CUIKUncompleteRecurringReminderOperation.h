/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKSaveOperation.h>

@class EKReminder;

@interface CUIKUncompleteRecurringReminderOperation : CUIKSaveOperation {

	EKReminder* _previouslyCompletedRecurringReminder;

}

@property (retain) EKReminder * previouslyCompletedRecurringReminder;              //@synthesize previouslyCompletedRecurringReminder=_previouslyCompletedRecurringReminder - In the implementation block
-(EKReminder *)previouslyCompletedRecurringReminder;
-(void)setPreviouslyCompletedRecurringReminder:(EKReminder *)arg1 ;
@end
