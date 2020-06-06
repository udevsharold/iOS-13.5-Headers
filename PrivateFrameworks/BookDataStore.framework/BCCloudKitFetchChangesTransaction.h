/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookDataStore/BCCloudKitTransaction.h>

@class BCCloudKitController;

@interface BCCloudKitFetchChangesTransaction : BCCloudKitTransaction {

	BCCloudKitController* _cloudKitController;

}

@property (assign,nonatomic,__weak) BCCloudKitController * cloudKitController;              //@synthesize cloudKitController=_cloudKitController - In the implementation block
+(id)transactionNameForEntityName:(id)arg1 ;
-(BCCloudKitController *)cloudKitController;
-(id)initWithCloudKitController:(id)arg1 delegate:(id)arg2 ;
-(void)performWorkWithCompletion:(/*^block*/id)arg1 ;
-(double)coalescingDelay;
-(double)transactionLifetimeTimout;
-(void)setCloudKitController:(BCCloudKitController *)arg1 ;
@end

