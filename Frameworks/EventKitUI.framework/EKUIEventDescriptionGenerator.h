/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EventKitUI/EventKitUI-Structs.h>
@class NSNumberFormatter;

@interface EKUIEventDescriptionGenerator : NSObject {

	CFDateFormatterRef _dateFormatter;
	NSNumberFormatter* _numberFormatter;

}
+(id)eventDescriptionForDrag:(id)arg1 ;
-(void)dealloc;
-(id)_sharedNumberFormatter;
-(id)_attendeesForEvent:(id)arg1 sorted:(BOOL)arg2 limitedTo:(long long)arg3 ;
-(id)_adjustedMinutesTillEventStarts:(id)arg1 ;
-(CFDateFormatterRef)_sharedDateFormatter;
-(BOOL)_startTimeRequiresSingularForEvent:(id)arg1 withTimeString:(id)arg2 ;
-(id)naturalLanguageDescriptionForAttendees:(id)arg1 ;
-(id)timeStringForEvent:(id)arg1 forBeginningOfSentence:(BOOL)arg2 useExplicitTimes:(BOOL)arg3 followingComma:(BOOL)arg4 ;
@end

