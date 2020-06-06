/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSPredicate.h>

@class NSArray, NSSet;

@interface EKREMReminderPredicate : NSPredicate {

	NSArray* _calendars;
	NSSet* _calendarIdentifierSet;

}
-(id)predicateFormat;
-(BOOL)evaluateWithObject:(id)arg1 ;
-(id)initWithCalendars:(id)arg1 ;
-(id)fetchMatchingRemindersInStore:(id)arg1 allLists:(id)arg2 error:(id*)arg3 ;
-(id)remListIDsWithAllLists:(id)arg1 ;
@end

