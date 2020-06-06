/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface HUSoftwareLibraryLookupResult : NSObject {

	NSSet* _matchedLibraryItems;
	NSSet* _matchedStoreItems;
	NSSet* _unmatchedRequests;

}

@property (nonatomic,retain) NSSet * matchedLibraryItems;              //@synthesize matchedLibraryItems=_matchedLibraryItems - In the implementation block
@property (nonatomic,retain) NSSet * matchedStoreItems;                //@synthesize matchedStoreItems=_matchedStoreItems - In the implementation block
@property (nonatomic,retain) NSSet * unmatchedRequests;                //@synthesize unmatchedRequests=_unmatchedRequests - In the implementation block
+(id)resultForRequests:(id)arg1 ;
+(id)resultForAccessories:(id)arg1 ;
+(id)_libraryResultForRequests:(id)arg1 ;
+(id)_storeResultForRequests:(id)arg1 ;
-(id)init;
-(NSSet *)matchedLibraryItems;
-(NSSet *)matchedStoreItems;
-(NSSet *)unmatchedRequests;
-(void)setMatchedLibraryItems:(NSSet *)arg1 ;
-(void)setMatchedStoreItems:(NSSet *)arg1 ;
-(void)setUnmatchedRequests:(NSSet *)arg1 ;
@end

