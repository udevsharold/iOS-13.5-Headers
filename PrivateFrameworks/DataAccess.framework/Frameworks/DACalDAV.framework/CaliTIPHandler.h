/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CaliTIPHandler : NSObject
+(void)initialize;
+(void)processMessage:(id)arg1 inCalendar:(id)arg2 ;
+(BOOL)logiTIPDetail;
+(void)setLogiTIPDetail:(BOOL)arg1 ;
+(void)processMessages:(id)arg1 inCalendar:(id)arg2 ;
+(BOOL)diffsAreImportant:(id)arg1 ;
+(id)debugStringForEvent:(id)arg1 ;
+(BOOL)isAddressMe:(id)arg1 forAccount:(id)arg2 ;
+(BOOL)myStatusNeedsActionForEvent:(id)arg1 withAccount:(id)arg2 ;
+(id)_calculateDiffsForEvent:(id)arg1 inMessage:(id)arg2 ;
+(id)getOccurrenceChange:(id)arg1 forEvent:(id)arg2 inCalendar:(id)arg3 ;
+(BOOL)doScheduleChanges:(id)arg1 applyToEvent:(id)arg2 inCalendar:(id)arg3 ;
+(id)myAddressInAccount:(id)arg1 forEvent:(id)arg2 ;
@end

