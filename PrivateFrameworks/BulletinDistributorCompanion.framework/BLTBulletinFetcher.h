/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface BLTBulletinFetcher : NSObject {

	NSDictionary* _bulletinIDs;
	NSArray* _sectionIDs;
	long long _sectionIDsIndex;
	NSArray* _publisherMatchIDsForSection;
	unsigned long long _publisherMatchIDsForSectionIndex;
	/*^block*/id _clientCompletion;
	/*^block*/id _fetcher;

}
+(id)batchBulletinFetchForBulletinIDs:(id)arg1 fetcher:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_incrementSection;
-(void)_fetchBulletins;
-(void)_setFetcher:(/*^block*/id)arg1 ;
-(void)_setClientCompletion:(/*^block*/id)arg1 ;
-(void)_setBulletinIDs:(id)arg1 ;
@end

