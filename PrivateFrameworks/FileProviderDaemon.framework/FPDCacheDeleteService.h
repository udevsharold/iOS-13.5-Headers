/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FPDExtensionManager;

@interface FPDCacheDeleteService : NSObject {

	FPDExtensionManager* _extensionManager;

}

@property (nonatomic,retain) FPDExtensionManager * extensionManager;              //@synthesize extensionManager=_extensionManager - In the implementation block
+(int)urgencyAtWhichItIsAcceptableToPurgeItemWithLastUsedDate:(id)arg1 ;
-(void)start;
-(void)dumpStateTo:(id)arg1 ;
-(void)setExtensionManager:(FPDExtensionManager *)arg1 ;
-(FPDExtensionManager *)extensionManager;
-(void)enumeratePurgeableFilesOnVolume:(id)arg1 forUrgency:(int)arg2 sizeOnly:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(id)nonPurgableSpacePerProviderOnVolume:(id)arg1 ;
-(void)evictItems:(id)arg1 ;
-(void)registerActivity;
-(void)enumerateProviderDomainOnVolume:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)allStorageVolumes;
-(id)purgableSpaceForAllUrgenciesOnVolume:(id)arg1 ;
-(BOOL)getVolume:(int*)arg1 forPath:(id)arg2 ;
-(id)volumesByProviderDomain;
-(id)queryWithAttributes:(id)arg1 ;
-(BOOL)shouldSearchableItem:(id)arg1 beEvictedAtUrgency:(int)arg2 ;
-(id)evictableByProviderDomainID:(int)arg1 ;
@end

