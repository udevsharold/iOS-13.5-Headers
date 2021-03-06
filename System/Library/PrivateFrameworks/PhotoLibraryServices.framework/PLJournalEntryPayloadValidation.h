/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLJournalEntryPayloadValidation
@required
+(id)modelProperties;
+(unsigned)minimumSnapshotPayloadVersion;
+(id)snapshotSortDescriptors;
+(void)validatePayloadPropertiesForManagedObjectModel:(id)arg1;
+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1;
+(id)additionalEntityNames;
+(BOOL)shouldPersistForChangedKeys:(id)arg1 entityName:(id)arg2;
-(BOOL)comparePayloadToObjectDictionary:(id)arg1 usingModelProperties:(id)arg2 errorDescriptions:(id)arg3;

@end

