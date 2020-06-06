/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXContextualActionCountCache, NSDate;

@interface ATXContextualActionManager : NSObject {

	ATXContextualActionCountCache* actionCountCache;
	NSDate* actionCountCacheCreationDate;

}
-(id)init;
-(id)getCountsForContext:(id)arg1 ;
-(id)getAllCounts;
-(double)getIntervalSinceOldestEvent;
-(void)_updateCacheIfNeeded;
-(void)_getActionsFromLastMonth;
-(id)initWithStaticActions:(id)arg1 ;
@end

