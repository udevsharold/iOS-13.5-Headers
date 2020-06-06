/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>
#import <libobjc.A.dylib/HKHealthPrivacyServicePromptController.h>

@protocol HKHealthPrivacyServicePromptControllerDelegate;
@class HKClinicalAuthorizationSequenceContext, HKClinicalAuthorizationDisplayController, UITableView, HKClinicalAuthorizationBinaryChoiceFooterView, NSArray, HKLookUpAppPrivacyPolicyURLOperation, NSString;

@interface HKClinicalAuthorizationSettingsViewController : HKViewController <UITableViewDataSource, UITableViewDelegate, HKSwitchTableViewCellDelegate, HKHealthPrivacyServicePromptController> {

	id<HKHealthPrivacyServicePromptControllerDelegate> _delegate;
	long long _style;
	HKClinicalAuthorizationSequenceContext* _context;
	HKClinicalAuthorizationDisplayController* _displayController;
	long long _authorizationMode;
	UITableView* _tableView;
	HKClinicalAuthorizationBinaryChoiceFooterView* _allowButtonsFooterView;
	NSArray* _sections;
	NSArray* _appInformationSectionCells;
	HKLookUpAppPrivacyPolicyURLOperation* _lookUpAppPrivacyPolicyURLOperation;

}

@property (nonatomic,readonly) HKClinicalAuthorizationDisplayController * displayController;                         //@synthesize displayController=_displayController - In the implementation block
@property (assign,nonatomic) long long authorizationMode;                                                            //@synthesize authorizationMode=_authorizationMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * readUsageDescription; 
@property (nonatomic,readonly) UITableView * tableView;                                                              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) HKClinicalAuthorizationBinaryChoiceFooterView * allowButtonsFooterView;               //@synthesize allowButtonsFooterView=_allowButtonsFooterView - In the implementation block
@property (nonatomic,copy) NSArray * sections;                                                                       //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSArray * appInformationSectionCells;                                                     //@synthesize appInformationSectionCells=_appInformationSectionCells - In the implementation block
@property (getter=shouldCommitUpdatesImmediately,nonatomic,readonly) BOOL commitUpdatesImmediately; 
@property (nonatomic,readonly) BOOL isPrompting; 
@property (nonatomic,retain) HKLookUpAppPrivacyPolicyURLOperation * lookUpAppPrivacyPolicyURLOperation;              //@synthesize lookUpAppPrivacyPolicyURLOperation=_lookUpAppPrivacyPolicyURLOperation - In the implementation block
@property (assign,nonatomic,__weak) id<HKHealthPrivacyServicePromptControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long style;                                                                      //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) HKClinicalAuthorizationSequenceContext * context;                                     //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<HKHealthPrivacyServicePromptControllerDelegate>)delegate;
-(void)setDelegate:(id<HKHealthPrivacyServicePromptControllerDelegate>)arg1 ;
-(id)source;
-(HKClinicalAuthorizationSequenceContext *)context;
-(long long)style;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UITableView *)tableView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSArray *)sections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setSections:(NSArray *)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_updateForCurrentContentSizeCategory;
-(void)_reloadSections;
-(void)_finishWithError:(id)arg1 ;
-(id)_privacyPolicyURL;
-(NSString *)readUsageDescription;
-(long long)authorizationMode;
-(void)setAuthorizationMode:(long long)arg1 ;
-(id)authorizationController;
-(BOOL)isPrompting;
-(id)_createHeaderViewWithSource:(id)arg1 ;
-(id)_createAllowButtonsFooterView;
-(void)_configureTableView;
-(void)_configureNavigationItemWithSource:(id)arg1 ;
-(void)_configureInitialAuthorizationSettingsForPrompting;
-(void)_fetchPrivacyPolicyURLForSource:(id)arg1 ;
-(void)reloadAuthorizationSettings;
-(HKLookUpAppPrivacyPolicyURLOperation *)lookUpAppPrivacyPolicyURLOperation;
-(id)_createAppInformationSectionCells;
-(void)setAppInformationSectionCells:(NSArray *)arg1 ;
-(id)_sectionsForAuthorizationController:(id)arg1 ;
-(BOOL)shouldCommitUpdatesImmediately;
-(void)_updateFooterButtonsTitles;
-(void)_updateAllowButtonEnabledStateAnimated:(BOOL)arg1 ;
-(long long)_defaultShareAuthorizationMode;
-(id)_doNotAllowButtonTitle;
-(HKClinicalAuthorizationBinaryChoiceFooterView *)allowButtonsFooterView;
-(void)_updateTableViewBottomPadding;
-(void)_allowButtonPressed:(id)arg1 ;
-(void)_doNotAllowButtonPressed:(id)arg1 ;
-(long long)_sectionForTableViewSection:(long long)arg1 ;
-(BOOL)_shouldDisplayAppInformationSection;
-(BOOL)_shouldDisplayShareDataTypes;
-(BOOL)_shouldDisplayShareAuthorizationModeSection;
-(NSArray *)appInformationSectionCells;
-(long long)_shareAuthorizationModeForIndexPath:(id)arg1 ;
-(id)_visibleShareAuthorizationModeCellForMode:(long long)arg1 ;
-(void)_updateShareAuthorizationModeSectionFooter;
-(void)_presentConfirmationForStopSharingIfNeededWithAcceptHandler:(/*^block*/id)arg1 ;
-(void)_presentViewAppPrivacyPolicyURLErrorAlert;
-(id)_typeForIndexPath:(id)arg1 ;
-(void)_updateShareAuthorizationModeSectionVisibilityIfNeeded;
-(BOOL)_isShowingShareAuthorizationModeSection;
-(void)_verifySections:(id)arg1 isEqualToSections:(id)arg2 afterInsertingSection:(id)arg3 ;
-(void)_showShareAuthorizationModeSectionIfNeeded;
-(void)_hideShareAuthorizationModeSectionIfNeeded;
-(long long)_tableViewSectionForSection:(long long)arg1 ;
-(BOOL)_tableViewSection:(long long)arg1 isEqualToSection:(long long)arg2 ;
-(BOOL)_cellAtIndexPathIsViewAppPrivacyPolicyCell:(id)arg1 ;
-(BOOL)_shouldHighlightViewAppPrivacyPolicyCellAtIndexPath:(id)arg1 ;
-(id)_shareUsageDescriptionCellForIndexPath:(id)arg1 ;
-(id)_viewAppPrivacyPolicyCellForIndexPath:(id)arg1 ;
-(id)_indexPathForViewAppPrivacyPolicyCell;
-(id)_indexPathForShareAuthorizationMode:(long long)arg1 ;
-(HKClinicalAuthorizationDisplayController *)displayController;
-(id)_formatStringForShareAuthorizationModeFooterWithMode:(long long)arg1 ;
-(BOOL)_shouldPresentStopSharingDialogueBeforeDisallowing;
-(id)_messageForStopSharingConfirmation;
-(void)setLookUpAppPrivacyPolicyURLOperation:(HKLookUpAppPrivacyPolicyURLOperation *)arg1 ;
-(void)_reloadViewAppPrivacyPolicyCell;
-(id)_appInformationCellForIndexPath:(id)arg1 ;
-(id)_shareDataTypeCellForIndexPath:(id)arg1 ;
-(id)_shareAuthorizationModeCellForIndexPath:(id)arg1 ;
-(id)_titleForAppInformationFooter;
-(id)_titleForShareDataTypesFooter;
-(id)_titleForShareAuthorizationModeFooter;
-(BOOL)_shouldHighlightAppInformationCellAtIndexPath:(id)arg1 ;
-(void)_viewAppPrivacyPolicyCellPressed:(id)arg1 ;
-(void)_shareAuthorizationModeCellPressed:(id)arg1 ;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(id)initWithContext:(id)arg1 style:(long long)arg2 ;
@end

