/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class STDeviceBedtime, NSDateFormatter;

@interface STIntroDowntimeTableViewController : UITableViewController {

	STDeviceBedtime* _bedtime;
	long long _datePickerVisibility;
	NSDateFormatter* _downtimeFormatter;

}

@property (assign) long long datePickerVisibility;                     //@synthesize datePickerVisibility=_datePickerVisibility - In the implementation block
@property (readonly) NSDateFormatter * downtimeFormatter;              //@synthesize downtimeFormatter=_downtimeFormatter - In the implementation block
@property (readonly) STDeviceBedtime * bedtime;                        //@synthesize bedtime=_bedtime - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_datePickerChanged:(id)arg1 ;
-(STDeviceBedtime *)bedtime;
-(void)_stIntroDowntimeTableViewControllerCommonInit;
-(long long)datePickerVisibility;
-(long long)_tableRowForStartLabelRow;
-(NSDateFormatter *)downtimeFormatter;
-(long long)_tableRowForEndLabelRow;
-(long long)_tableRowForDatePicker;
-(void)setDatePickerVisibility:(long long)arg1 ;
@end

