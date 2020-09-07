/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PPContactsImporter : NSObject
+(id)defaultInstance;
-(id)init;
-(void)_registerForNotifications;
-(void)importContactsDataWithShouldContinueBlock:(/*^block*/id)arg1 ;
-(BOOL)importScoredContact:(id)arg1 contactsIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)_entitiesForScoredContact:(id)arg1 ;
-(void)_stashImportedContactsIdentifiers:(id)arg1 ;
-(void)_removeStashedImportedContacts;
-(id)_loadContactIdentifiersAlreadyImportedInPastDay;
@end
