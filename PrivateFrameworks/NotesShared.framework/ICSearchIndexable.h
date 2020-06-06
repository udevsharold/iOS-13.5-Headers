/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICSearchIndexable <NSObject>
@optional
-(id)dataForTypeIdentifier:(id)arg1;
-(id)fileURLForTypeIdentifier:(id)arg1;

@required
-(id)modificationDate;
-(id)objectID;
-(id)creationDate;
-(id)managedObjectContext;
-(unsigned long long)searchResultType;
-(id)contentIdentifier;
-(id)userActivityContentAttributeSet;
-(BOOL)isMovable;
-(long long)visibilityTestingType;
-(unsigned long long)searchResultsSection;
-(BOOL)searchResultCanBeDeletedFromNoteContext;
-(BOOL)isHiddenFromSearch;
-(id)authorsExcludingCurrentUser;
-(id)searchIndexingIdentifier;
-(id)searchDomainIdentifier;
-(id)searchableItemAttributeSet;

@end

