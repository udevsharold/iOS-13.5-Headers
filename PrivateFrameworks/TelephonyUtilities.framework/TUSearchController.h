/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CNContactStore, NSMutableArray, NSObject;

@interface TUSearchController : NSObject {

	CNContactStore* _contactStore;
	NSMutableArray* _recentsModules;
	NSMutableArray* _searchModules;
	NSObject*<OS_dispatch_queue> _searchQueue;

}

@property (nonatomic,retain) CNContactStore * contactStore;                         //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSMutableArray * recentsModules;                       //@synthesize recentsModules=_recentsModules - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchModules;                        //@synthesize searchModules=_searchModules - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> searchQueue;              //@synthesize searchQueue=_searchQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)searchForString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)searchQueue;
-(BOOL)_searchIsRunning;
-(void)_cancelSearches;
-(void)setRecentsModules:(NSMutableArray *)arg1 ;
-(NSMutableArray *)recentsModules;
-(/*^block*/id)recentsModuleCompletionWithCompletion:(/*^block*/id)arg1 ;
-(void)setSearchModules:(NSMutableArray *)arg1 ;
-(NSMutableArray *)searchModules;
-(/*^block*/id)searchModuleCompletionWithSearchTerm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(/*^block*/id)_searchModuleCompletionWithModules:(id)arg1 searchTerm:(id)arg2 resultsClass:(Class)arg3 completion:(/*^block*/id)arg4 ;
-(void)recentsWithCompletion:(/*^block*/id)arg1 ;
-(void)setSearchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

