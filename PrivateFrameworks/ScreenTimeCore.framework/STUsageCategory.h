/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, STUsageBlock;

@interface STUsageCategory : NSManagedObject

@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) long long totalTimeInSeconds; 
@property (nonatomic,retain) NSSet * timedItems; 
@property (nonatomic,retain) STUsageBlock * block; 
+(id)categoryItemsExcludingSystemCategories:(id)arg1 ;
+(id)applicationAndWebItemsExcludingSystemHiddenApplications:(id)arg1 ;
@end

