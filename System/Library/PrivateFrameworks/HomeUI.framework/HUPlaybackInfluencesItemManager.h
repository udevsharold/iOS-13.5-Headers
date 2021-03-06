/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class NSArray, HFStaticItem, HFAccessorySettingItem;

@interface HUPlaybackInfluencesItemManager : HFItemManager {

	NSArray* _playbackInfluencesOptionItems;
	HFStaticItem* _selectedItem;
	HFStaticItem* _useListeningHistoryItem;

}

@property (nonatomic,retain) HFStaticItem * useListeningHistoryItem;                 //@synthesize useListeningHistoryItem=_useListeningHistoryItem - In the implementation block
@property (nonatomic,readonly) NSArray * playbackInfluencesOptionItems;              //@synthesize playbackInfluencesOptionItems=_playbackInfluencesOptionItems - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingItem * settingItem; 
@property (nonatomic,retain) HFStaticItem * selectedItem;                            //@synthesize selectedItem=_selectedItem - In the implementation block
-(id)initWithDelegate:(id)arg1 ;
-(void)setSelectedItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)selectedItem;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 settingItem:(id)arg2 ;
-(id)updateUseListeningHistorySetting:(BOOL)arg1 ;
-(HFAccessorySettingItem *)settingItem;
-(id)playbackInfluencesSetting;
-(BOOL)playbackInfluencesFollowUser;
-(void)setUseListeningHistoryItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)useListeningHistoryItem;
-(NSArray *)playbackInfluencesOptionItems;
@end

