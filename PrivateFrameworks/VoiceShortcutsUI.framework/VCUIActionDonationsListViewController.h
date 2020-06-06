/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutsUI/VoiceShortcutsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>

@class UISegmentedControl, VCUIInteractionDonationDataSource, UITableView, VCUIUserActivityDonationDataSource, VCUIActionDonationCell, NSString;

@interface VCUIActionDonationsListViewController : UIViewController <UITableViewDelegate> {

	UISegmentedControl* _segmentedControl;
	VCUIInteractionDonationDataSource* _interactionDataSource;
	UITableView* _interactionTableView;
	VCUIUserActivityDonationDataSource* _activityDataSource;
	UITableView* _activityTableView;
	VCUIActionDonationCell* _prototypeCell;

}

@property (nonatomic,readonly) UISegmentedControl * segmentedControl;                                  //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,readonly) VCUIInteractionDonationDataSource * interactionDataSource;              //@synthesize interactionDataSource=_interactionDataSource - In the implementation block
@property (nonatomic,readonly) UITableView * interactionTableView;                                     //@synthesize interactionTableView=_interactionTableView - In the implementation block
@property (nonatomic,readonly) VCUIUserActivityDonationDataSource * activityDataSource;                //@synthesize activityDataSource=_activityDataSource - In the implementation block
@property (nonatomic,readonly) UITableView * activityTableView;                                        //@synthesize activityTableView=_activityTableView - In the implementation block
@property (nonatomic,retain) VCUIActionDonationCell * prototypeCell;                                   //@synthesize prototypeCell=_prototypeCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UISegmentedControl *)segmentedControl;
-(void)segmentedControlChanged:(id)arg1 ;
-(VCUIActionDonationCell *)prototypeCell;
-(VCUIInteractionDonationDataSource *)interactionDataSource;
-(UITableView *)interactionTableView;
-(VCUIUserActivityDonationDataSource *)activityDataSource;
-(UITableView *)activityTableView;
-(void)setPrototypeCell:(VCUIActionDonationCell *)arg1 ;
@end

