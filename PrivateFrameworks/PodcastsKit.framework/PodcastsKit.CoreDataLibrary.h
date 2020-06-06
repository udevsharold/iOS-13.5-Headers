/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKLibrary.h>

@interface PodcastsKit.CoreDataLibrary : NSObject <PKLibrary> {

	 subscriptionController;

}

@property (retain,nonatomic) id<PKSubscriptionController> subscriptionController; 
-(id)init;
-(id<PKSubscriptionController>)subscriptionController;
-(void)setSubscriptionController:(id<PKSubscriptionController>)arg1 ;
-(void)fetchMatchesFor:(id)arg1 limit:(long long)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(void)fetchAllShowsWithResultsHandler:(/*^block*/id)arg1 ;
@end

