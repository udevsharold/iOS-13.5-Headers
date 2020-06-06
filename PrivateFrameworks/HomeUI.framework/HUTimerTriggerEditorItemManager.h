/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class NSDateComponents, HFTimerTriggerBuilder, HUTriggerConditionEditorItemModule, HFStaticItem, HUInstructionsItem, NSMutableDictionary, NSSet;

@interface HUTimerTriggerEditorItemManager : HFItemManager {

	BOOL _datePickerShown;
	NSDateComponents* _defaultFireTimeComponents;
	HFTimerTriggerBuilder* _timerTriggerBuilder;
	HUTriggerConditionEditorItemModule* _conditionModule;
	HFStaticItem* _sunriseOptionItem;
	HFStaticItem* _sunsetOptionItem;
	HFStaticItem* _timeOptionItem;
	HFStaticItem* _datePickerItem;
	HFStaticItem* _recurrencesItem;
	HUInstructionsItem* _instructionsItem;
	HUInstructionsItem* _recurrencesInstructionsItem;
	NSMutableDictionary* _significantEventToDefaultOffsetMap;

}

@property (nonatomic,retain) HUInstructionsItem * instructionsItem;                                   //@synthesize instructionsItem=_instructionsItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * sunriseOptionItem;                                        //@synthesize sunriseOptionItem=_sunriseOptionItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * sunsetOptionItem;                                         //@synthesize sunsetOptionItem=_sunsetOptionItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * timeOptionItem;                                           //@synthesize timeOptionItem=_timeOptionItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * datePickerItem;                                           //@synthesize datePickerItem=_datePickerItem - In the implementation block
@property (nonatomic,retain) HUInstructionsItem * recurrencesInstructionsItem;                        //@synthesize recurrencesInstructionsItem=_recurrencesInstructionsItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * recurrencesItem;                                          //@synthesize recurrencesItem=_recurrencesItem - In the implementation block
@property (nonatomic,retain) HUTriggerConditionEditorItemModule * conditionModule;                    //@synthesize conditionModule=_conditionModule - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * significantEventToDefaultOffsetMap;              //@synthesize significantEventToDefaultOffsetMap=_significantEventToDefaultOffsetMap - In the implementation block
@property (nonatomic,retain) NSDateComponents * defaultFireTimeComponents;                            //@synthesize defaultFireTimeComponents=_defaultFireTimeComponents - In the implementation block
@property (nonatomic,readonly) HFTimerTriggerBuilder * timerTriggerBuilder;                           //@synthesize timerTriggerBuilder=_timerTriggerBuilder - In the implementation block
@property (assign,nonatomic) BOOL datePickerShown;                                                    //@synthesize datePickerShown=_datePickerShown - In the implementation block
@property (nonatomic,readonly) NSSet * dateOptionsItems; 
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(HUInstructionsItem *)instructionsItem;
-(HUTriggerConditionEditorItemModule *)conditionModule;
-(id)initWithTimerTriggerBuilder:(id)arg1 delegate:(id)arg2 ;
-(void)setDefaultFireTimeComponents:(NSDateComponents *)arg1 ;
-(HFStaticItem *)timeOptionItem;
-(HFTimerTriggerBuilder *)timerTriggerBuilder;
-(HFStaticItem *)sunriseOptionItem;
-(HFStaticItem *)sunsetOptionItem;
-(void)setDefaultOffset:(id)arg1 forSignificantEvent:(id)arg2 ;
-(void)setDatePickerShown:(BOOL)arg1 ;
-(NSDateComponents *)defaultFireTimeComponents;
-(id)defaultOffsetForSignificantEvent:(id)arg1 ;
-(void)updateForSignificantEventOffsetChange;
-(NSSet *)dateOptionsItems;
-(HFStaticItem *)datePickerItem;
-(HFStaticItem *)recurrencesItem;
-(void)setInstructionsItem:(HUInstructionsItem *)arg1 ;
-(HUInstructionsItem *)recurrencesInstructionsItem;
-(BOOL)datePickerShown;
-(NSMutableDictionary *)significantEventToDefaultOffsetMap;
-(void)setConditionModule:(HUTriggerConditionEditorItemModule *)arg1 ;
-(void)setSunriseOptionItem:(HFStaticItem *)arg1 ;
-(void)setSunsetOptionItem:(HFStaticItem *)arg1 ;
-(void)setTimeOptionItem:(HFStaticItem *)arg1 ;
-(void)setDatePickerItem:(HFStaticItem *)arg1 ;
-(void)setRecurrencesItem:(HFStaticItem *)arg1 ;
-(void)setRecurrencesInstructionsItem:(HUInstructionsItem *)arg1 ;
@end

