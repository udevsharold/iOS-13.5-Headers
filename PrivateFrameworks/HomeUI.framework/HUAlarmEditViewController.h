/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/HUAlarmEditSettingViewControllerDelegate.h>

@protocol HUAlarmEditViewControllerDelegate;
@class NSString, NSSet, HUAlarmEditView, MTAlarm, MTMutableAlarm;

@interface HUAlarmEditViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, HUAlarmEditSettingViewControllerDelegate> {

	id<HUAlarmEditViewControllerDelegate> _delegate;
	NSString* _loggedInAppleMusicAccountDSID;
	NSSet* _selectedActionSets;
	HUAlarmEditView* _editAlarmView;
	long long _editingAlarmSetting;
	MTAlarm* _originalAlarm;
	MTMutableAlarm* _editedAlarm;

}

@property (nonatomic,retain) HUAlarmEditView * editAlarmView;                                    //@synthesize editAlarmView=_editAlarmView - In the implementation block
@property (assign,nonatomic) long long editingAlarmSetting;                                      //@synthesize editingAlarmSetting=_editingAlarmSetting - In the implementation block
@property (nonatomic,retain) MTAlarm * originalAlarm;                                            //@synthesize originalAlarm=_originalAlarm - In the implementation block
@property (nonatomic,retain) MTMutableAlarm * editedAlarm;                                       //@synthesize editedAlarm=_editedAlarm - In the implementation block
@property (getter=isEdited,nonatomic,readonly) BOOL edited; 
@property (assign,nonatomic,__weak) id<HUAlarmEditViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * loggedInAppleMusicAccountDSID;                             //@synthesize loggedInAppleMusicAccountDSID=_loggedInAppleMusicAccountDSID - In the implementation block
@property (nonatomic,readonly) NSSet * selectedActionSets;                                       //@synthesize selectedActionSets=_selectedActionSets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)desiredContentSize;
-(void)dealloc;
-(id<HUAlarmEditViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUAlarmEditViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidUnload;
-(id)initWithAlarm:(id)arg1 ;
-(MTAlarm *)originalAlarm;
-(void)setOriginalAlarm:(MTAlarm *)arg1 ;
-(BOOL)isEdited;
-(void)_cancelButtonClicked:(id)arg1 ;
-(void)_doneButtonClicked:(id)arg1 ;
-(void)handleSuspend;
-(void)handlePickerChanged;
-(void)saveAlarmOnlyIfEdited:(BOOL)arg1 ;
-(BOOL)isNewAlarm;
-(MTMutableAlarm *)editedAlarm;
-(NSString *)loggedInAppleMusicAccountDSID;
-(void)startEditingSetting:(long long)arg1 ;
-(void)setEditedAlarm:(MTMutableAlarm *)arg1 ;
-(void)alarmEditSettingController:(id)arg1 didEditAlarm:(id)arg2 ;
-(void)setLoggedInAppleMusicAccountDSID:(NSString *)arg1 ;
-(NSSet *)selectedActionSets;
-(HUAlarmEditView *)editAlarmView;
-(void)setEditAlarmView:(HUAlarmEditView *)arg1 ;
-(long long)editingAlarmSetting;
-(void)setEditingAlarmSetting:(long long)arg1 ;
@end

