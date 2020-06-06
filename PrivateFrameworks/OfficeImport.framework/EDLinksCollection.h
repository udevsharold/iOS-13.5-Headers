/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface EDLinksCollection : NSObject {

	NSMutableArray* mLinks;
	NSMutableArray* mReferences;

}
-(id)init;
-(id)description;
-(unsigned long long)addLink:(id)arg1 ;
-(id)referenceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)addReference:(id)arg1 ;
-(unsigned long long)referencesCount;
-(unsigned long long)linksCount;
-(id)linkAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)addOrEquivalentLinkReferenceOfType:(int)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3 ;
-(unsigned long long)indexOfFirstLinkWithType:(int)arg1 ;
-(unsigned long long)linkIndexCreateIfNeededWithType:(int)arg1 ;
-(unsigned long long)indexOfReference:(id)arg1 ;
-(BOOL)convertLinkReferenceIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long*)arg2 lastSheetIndex:(unsigned long long*)arg3 ;
-(unsigned long long)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(unsigned long long)arg1 lastSheetIndex:(unsigned long long)arg2 ;
-(void)addOrEquivalentExternalAddInName:(id)arg1 linkReferenceIndex:(unsigned long long*)arg2 nameIndex:(unsigned long long*)arg3 ;
@end

