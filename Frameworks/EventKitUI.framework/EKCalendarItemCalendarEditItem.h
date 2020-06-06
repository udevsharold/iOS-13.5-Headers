/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>

@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem {

	unsigned long long _entityType;

}
-(id)init;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(BOOL)requiresReconfigurationOnSave;
-(id)initWithEntityType:(unsigned long long)arg1 ;
-(BOOL)_shouldShowSourceForCalendar:(id)arg1 ;
@end

