/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REMReminderChangeItem;

@interface REMReminderFlaggedContextChangeItem : NSObject {

	REMReminderChangeItem* _reminderChangeItem;

}

@property (nonatomic,retain) REMReminderChangeItem * reminderChangeItem;              //@synthesize reminderChangeItem=_reminderChangeItem - In the implementation block
@property (assign,nonatomic) long long flagged; 
-(void)setFlagged:(long long)arg1 ;
-(long long)flagged;
-(REMReminderChangeItem *)reminderChangeItem;
-(id)initWithReminderChangeItem:(id)arg1 ;
-(void)setReminderChangeItem:(REMReminderChangeItem *)arg1 ;
@end

