/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASLock, _PASNotificationToken;

@interface PPTopicWhitelist : NSObject {

	_PASLock* _lock;
	_PASNotificationToken* _assetUpdateNotificationToken;

}
+(id)sharedInstance;
+(id)_keyFor:(id)arg1 of:(id)arg2 ;
-(void)dealloc;
-(id)_init;
-(void)_loadAssetData;
-(BOOL)shouldBypassWhitelist:(id)arg1 ;
-(id)indexesOfTopicsInRecordArray:(id)arg1 inWhitelistOf:(id)arg2 ;
-(id)indexesOfTopicsInScoredTopicArray:(id)arg1 inWhitelistOf:(id)arg2 ;
-(id)filterTopicDictionary:(id)arg1 withWhitelistOf:(id)arg2 ;
@end

