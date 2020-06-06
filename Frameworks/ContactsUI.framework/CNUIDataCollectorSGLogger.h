/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNScheduler;
@interface CNUIDataCollectorSGLogger : NSObject {

	/*^block*/id _serviceProvider;
	id<CNScheduler> _workQueue;

}

@property (nonatomic,retain) id<CNScheduler> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,copy,readonly) id serviceProvider;              //@synthesize serviceProvider=_serviceProvider - In the implementation block
+(id)loggerWithSGSuggestionsServiceProvider:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
-(id<CNScheduler>)workQueue;
-(void)setWorkQueue:(id<CNScheduler>)arg1 ;
-(id)initWithSuggestionsServiceProvider:(/*^block*/id)arg1 schedulerProvider:(id)arg2 ;
-(void)performBlockWithService:(/*^block*/id)arg1 ;
-(void)logContactSearchResultSelected:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3 ;
-(void)logSuggestedContactDetailShown:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3 ;
-(void)logSuggestedContactDetailUsed:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3 ;
-(void)logContactCreated:(id)arg1 contactIdentifier:(id)arg2 bundleID:(id)arg3 ;
-(void)logSearchResultsIncludedPureSuggestionsWithBundleID:(id)arg1 ;
-(id)serviceProvider;
@end

