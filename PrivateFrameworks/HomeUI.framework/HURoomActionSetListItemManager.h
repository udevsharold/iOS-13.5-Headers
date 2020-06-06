/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class NSArray;

@interface HURoomActionSetListItemManager : HFItemManager {

	NSArray* _cachedSortedRooms;

}

@property (nonatomic,retain) NSArray * cachedSortedRooms;              //@synthesize cachedSortedRooms=_cachedSortedRooms - In the implementation block
-(unsigned long long)_numberOfSections;
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(void)_willUpdateSections;
-(id)_titleForSectionWithIdentifier:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(id)_currentSectionIdentifiers;
-(void)setCachedSortedRooms:(NSArray *)arg1 ;
-(id)_sortedRooms;
-(NSArray *)cachedSortedRooms;
-(/*^block*/id)_roomComparator;
-(long long)sectionIndexForRoomIdentifier:(id)arg1 ;
@end

