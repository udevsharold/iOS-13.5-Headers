/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HFTriggerBuilder, HUTriggerActionFlow, HFStaticItemProvider, HFItem, HFStaticItem, HUShortcutItem, HFTriggerDurationSummaryItem, HUTriggerBuilderItem;

@interface HUTriggerSummaryItemManager : HFItemManager {

	BOOL _durationPickerShown;
	HFTriggerBuilder* _triggerBuilder;
	HUTriggerActionFlow* _currentFlow;
	HFStaticItemProvider* _unsupportedItemProvider;
	HFItem* _serviceActionsInstructionItem;
	HFItem* _enableItem;
	HFItem* _mediaRowItem;
	HFItem* _testTriggerItem;
	HFItem* _addActionItem;
	HFItem* _deleteTriggerItem;
	HFStaticItem* _actionSetsGridItem;
	HFStaticItem* _serviceActionsGridItem;
	HUShortcutItem* _shortcutItem;
	HFTriggerDurationSummaryItem* _durationSummaryItem;
	HFItem* _durationPickerItem;
	HFItem* _durationFooterItem;
	HUTriggerBuilderItem* _triggerBuilderItem;
	HFItem* _triggersInstructionItem;
	HFItem* _actionSetsInstructionItem;
	HFItem* _shortcutsInstructionItem;
	HFItem* _mediaInstructionsItem;
	HFStaticItemProvider* _staticItemProvider;

}

@property (nonatomic,retain) HFTriggerBuilder * triggerBuilder;                               //@synthesize triggerBuilder=_triggerBuilder - In the implementation block
@property (nonatomic,retain) HUTriggerActionFlow * currentFlow;                               //@synthesize currentFlow=_currentFlow - In the implementation block
@property (nonatomic,retain) HUTriggerBuilderItem * triggerBuilderItem;                       //@synthesize triggerBuilderItem=_triggerBuilderItem - In the implementation block
@property (nonatomic,retain) HFItem * triggersInstructionItem;                                //@synthesize triggersInstructionItem=_triggersInstructionItem - In the implementation block
@property (nonatomic,retain) HFItem * actionSetsInstructionItem;                              //@synthesize actionSetsInstructionItem=_actionSetsInstructionItem - In the implementation block
@property (nonatomic,retain) HFItem * shortcutsInstructionItem;                               //@synthesize shortcutsInstructionItem=_shortcutsInstructionItem - In the implementation block
@property (nonatomic,retain) HUShortcutItem * shortcutItem;                                   //@synthesize shortcutItem=_shortcutItem - In the implementation block
@property (nonatomic,retain) HFItem * serviceActionsInstructionItem;                          //@synthesize serviceActionsInstructionItem=_serviceActionsInstructionItem - In the implementation block
@property (nonatomic,retain) HFItem * enableItem;                                             //@synthesize enableItem=_enableItem - In the implementation block
@property (nonatomic,retain) HFItem * mediaRowItem;                                           //@synthesize mediaRowItem=_mediaRowItem - In the implementation block
@property (nonatomic,retain) HFItem * mediaInstructionsItem;                                  //@synthesize mediaInstructionsItem=_mediaInstructionsItem - In the implementation block
@property (nonatomic,retain) HFItem * testTriggerItem;                                        //@synthesize testTriggerItem=_testTriggerItem - In the implementation block
@property (nonatomic,retain) HFItem * addActionItem;                                          //@synthesize addActionItem=_addActionItem - In the implementation block
@property (nonatomic,retain) HFItem * deleteTriggerItem;                                      //@synthesize deleteTriggerItem=_deleteTriggerItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * actionSetsGridItem;                               //@synthesize actionSetsGridItem=_actionSetsGridItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * serviceActionsGridItem;                           //@synthesize serviceActionsGridItem=_serviceActionsGridItem - In the implementation block
@property (nonatomic,retain) HFTriggerDurationSummaryItem * durationSummaryItem;              //@synthesize durationSummaryItem=_durationSummaryItem - In the implementation block
@property (nonatomic,retain) HFItem * durationPickerItem;                                     //@synthesize durationPickerItem=_durationPickerItem - In the implementation block
@property (nonatomic,retain) HFItem * durationFooterItem;                                     //@synthesize durationFooterItem=_durationFooterItem - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * unsupportedItemProvider;                  //@synthesize unsupportedItemProvider=_unsupportedItemProvider - In the implementation block
@property (nonatomic,retain) HFStaticItemProvider * staticItemProvider;                       //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (assign,nonatomic) BOOL durationPickerShown;                                        //@synthesize durationPickerShown=_durationPickerShown - In the implementation block
-(unsigned long long)_numberOfSections;
-(HUShortcutItem *)shortcutItem;
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(BOOL)_isInEditMode;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(id)_itemsToHideInSet:(id)arg1 ;
-(id)_titleForSectionWithIdentifier:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(HFTriggerBuilder *)triggerBuilder;
-(id)initWithTriggerBuilder:(id)arg1 flow:(id)arg2 delegate:(id)arg3 ;
-(void)setShortcutItem:(HUShortcutItem *)arg1 ;
-(void)setTriggerBuilder:(HFTriggerBuilder *)arg1 ;
-(HUTriggerActionFlow *)currentFlow;
-(void)triggerBuilderDidChange;
-(HFItem *)enableItem;
-(HFItem *)testTriggerItem;
-(HFItem *)addActionItem;
-(HFItem *)deleteTriggerItem;
-(HFStaticItem *)actionSetsGridItem;
-(HFStaticItem *)serviceActionsGridItem;
-(HFTriggerDurationSummaryItem *)durationSummaryItem;
-(HFItem *)durationPickerItem;
-(HFItem *)durationFooterItem;
-(HFItem *)mediaRowItem;
-(HFItem *)serviceActionsInstructionItem;
-(HFStaticItemProvider *)unsupportedItemProvider;
-(id)instructionSections;
-(long long)serviceActionsSection;
-(long long)actionSetsSection;
-(BOOL)durationPickerShown;
-(void)setDurationPickerShown:(BOOL)arg1 ;
-(HFStaticItemProvider *)staticItemProvider;
-(id)_currentSectionIdentifiers;
-(BOOL)_showTriggerSummary;
-(id)_unsupportedTriggers;
-(HFItem *)mediaInstructionsItem;
-(void)setMediaInstructionsItem:(HFItem *)arg1 ;
-(void)setStaticItemProvider:(HFStaticItemProvider *)arg1 ;
-(void)setCurrentFlow:(HUTriggerActionFlow *)arg1 ;
-(id)_buildShortcutOwnedTriggerItemProvidersForHome:(id)arg1 ;
-(id)_buildStandardTriggerItemProvidersForHome:(id)arg1 ;
-(BOOL)_showEnableSwitch;
-(BOOL)_showActionSetsInstructionItem;
-(BOOL)_shouldShowTestItem;
-(BOOL)_shouldShowDeleteItem;
-(void)setEnableItem:(HFItem *)arg1 ;
-(void)setTriggersInstructionItem:(HFItem *)arg1 ;
-(HFItem *)triggersInstructionItem;
-(void)setActionSetsInstructionItem:(HFItem *)arg1 ;
-(HFItem *)actionSetsInstructionItem;
-(void)setActionSetsGridItem:(HFStaticItem *)arg1 ;
-(void)setServiceActionsInstructionItem:(HFItem *)arg1 ;
-(void)setMediaRowItem:(HFItem *)arg1 ;
-(void)setServiceActionsGridItem:(HFStaticItem *)arg1 ;
-(id)_triggerTestActionsInstructionDescription;
-(void)setTestTriggerItem:(HFItem *)arg1 ;
-(id)_triggerServiceActionsInstructionDescription;
-(void)setAddActionItem:(HFItem *)arg1 ;
-(void)setTriggerBuilderItem:(HUTriggerBuilderItem *)arg1 ;
-(HUTriggerBuilderItem *)triggerBuilderItem;
-(id)_triggerDeleteInstructionItemString;
-(void)setDeleteTriggerItem:(HFItem *)arg1 ;
-(void)setDurationSummaryItem:(HFTriggerDurationSummaryItem *)arg1 ;
-(BOOL)_shouldShowDurationItems;
-(void)setDurationPickerItem:(HFItem *)arg1 ;
-(void)setDurationFooterItem:(HFItem *)arg1 ;
-(void)setUnsupportedItemProvider:(HFStaticItemProvider *)arg1 ;
-(void)setShortcutsInstructionItem:(HFItem *)arg1 ;
-(HFItem *)shortcutsInstructionItem;
-(id)_itemsToHideForStandardTriggerInSet:(id)arg1 ;
-(id)_currentSectionIdentifiersForShortcutOwnedTriggers;
-(id)_currentSectionIdentifiersForStandardTriggers;
-(long long)unsupportedItemSectionIndex;
@end

