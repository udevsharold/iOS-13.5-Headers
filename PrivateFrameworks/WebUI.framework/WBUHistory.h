/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSHistory.h>

@interface WBUHistory : WBSHistory {

	BOOL _shouldScheduleMaintenance;

}

@property (assign,nonatomic) BOOL shouldScheduleMaintenance;              //@synthesize shouldScheduleMaintenance=_shouldScheduleMaintenance - In the implementation block
-(id)init;
-(void)_removeAllVisitedLinks;
-(void)setShouldScheduleMaintenance:(BOOL)arg1 ;
-(Class)_historyItemClass;
-(id)_createHistoryStore;
-(void)_addVisitedLinksForItemsIfNeeded:(id)arg1 ;
-(BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg1 ;
-(void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1 ;
-(BOOL)historyStoreShouldScheduleMaintenance:(id)arg1 ;
-(BOOL)shouldScheduleMaintenance;
@end

