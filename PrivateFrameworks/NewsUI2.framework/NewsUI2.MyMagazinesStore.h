/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCOfflineIssueListObserving.h>
#import <libobjc.A.dylib/FCSubscriptionObserving.h>
#import <libobjc.A.dylib/FCIssueReadingHistoryObserving.h>

@interface NewsUI2.MyMagazinesStore : NSObject <FCOfflineIssueListObserving, FCSubscriptionObserving, FCIssueReadingHistoryObserving> {

	 state;
	 badgeIssueIDs;
	 currentIssues;
	 recentlyReadIssues;
	 downloadedIssues;
	 currentIssuesChecker;
	 issueService;
	 issueReadingHistory;
	 subscriptionController;
	 offlineIssueList;
	 offlineIssueManager;
	 paidBundleConfigManager;
	 persistentStore;
	 $__lazy_storage_$_lazyInitializingPromise;
	??? firstFullRefresh;

}
-(void)offlineIssueList:(id)arg1 didAddIssues:(id)arg2 removeIssues:(id)arg3 ;
-(void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7 ;
-(void)issueReadingHistoryDidChange:(id)arg1 forIssueIDs:(id)arg2 ;
-(id)init;
@end

