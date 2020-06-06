/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVPlayActivityEvent.h>

@class NSString, SSVPlayActivityEventContainerIDs, SSVPlayActivityEnqueuerProperties, NSDate, NSTimeZone, SSVPlayActivityEventItemIDs, NSNumber, NSData;

@interface SSVMutablePlayActivityEvent : SSVPlayActivityEvent

@property (assign,nonatomic) long long persistentID; 
@property (assign,nonatomic) long long version; 
@property (nonatomic,copy) NSString * buildVersion; 
@property (nonatomic,copy) SSVPlayActivityEventContainerIDs * containerIDs; 
@property (assign,nonatomic) unsigned long long containerType; 
@property (nonatomic,copy) NSString * deviceName; 
@property (assign,nonatomic) unsigned long long endReasonType; 
@property (nonatomic,copy) SSVPlayActivityEnqueuerProperties * enqueuerProperties; 
@property (nonatomic,copy) NSDate * eventDate; 
@property (nonatomic,copy) NSTimeZone * eventTimeZone; 
@property (assign,nonatomic) unsigned long long eventType; 
@property (nonatomic,copy) NSString * featureName; 
@property (nonatomic,copy) NSString * householdID; 
@property (nonatomic,copy) SSVPlayActivityEventItemIDs * itemIDs; 
@property (assign,nonatomic) double itemDuration; 
@property (assign,nonatomic) double itemEndTime; 
@property (assign,nonatomic) double itemStartTime; 
@property (assign,nonatomic) unsigned long long itemType; 
@property (assign,nonatomic) unsigned long long mediaType; 
@property (assign,getter=isOffline,nonatomic) BOOL offline; 
@property (getter=isPrivateListeningEnabled,nonatomic,copy) NSNumber * privateListeningEnabled; 
@property (assign,nonatomic) unsigned long long reasonHintType; 
@property (nonatomic,copy) NSData * recommendationData; 
@property (nonatomic,copy) NSString * requestingBundleIdentifier; 
@property (nonatomic,copy) NSString * requestingBundleVersion; 
@property (assign,getter=isSBEnabled,nonatomic) BOOL SBEnabled; 
@property (getter=isSiriInitiated,nonatomic,copy) NSNumber * siriInitiated; 
@property (assign,nonatomic) unsigned long long sourceType; 
@property (assign,nonatomic) unsigned long long storeAccountID; 
@property (nonatomic,copy) NSString * storeFrontID; 
@property (assign,nonatomic) long long systemReleaseType; 
@property (nonatomic,copy) NSData * timedMetadata; 
@property (nonatomic,copy) NSData * trackInfo; 
@property (assign,nonatomic) unsigned long long displayType; 
@property (assign,nonatomic) unsigned long long lyricsDisplayedCharacterCount; 
@property (nonatomic,copy) NSString * lyricsLanguage; 
@property (nonatomic,copy) NSString * containerID; 
@property (nonatomic,copy) NSString * externalID; 
@property (assign,getter=isInternalBuild,nonatomic) BOOL internalBuild; 
@property (nonatomic,copy) NSString * personalizedContainerID; 
@property (nonatomic,copy) NSString * storeID; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(void)setDisplayType:(unsigned long long)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setPersistentID:(long long)arg1 ;
-(void)setSourceType:(unsigned long long)arg1 ;
-(void)setContainerID:(NSString *)arg1 ;
-(void)setContainerIDs:(SSVPlayActivityEventContainerIDs *)arg1 ;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)setEventDate:(NSDate *)arg1 ;
-(void)setEventType:(unsigned long long)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
-(void)setMediaType:(unsigned long long)arg1 ;
-(void)setItemType:(unsigned long long)arg1 ;
-(void)setContainerType:(unsigned long long)arg1 ;
-(void)setRequestingBundleIdentifier:(NSString *)arg1 ;
-(void)setRequestingBundleVersion:(NSString *)arg1 ;
-(void)setPrivateListeningEnabled:(NSNumber *)arg1 ;
-(void)setEndReasonType:(unsigned long long)arg1 ;
-(void)setStoreID:(NSString *)arg1 ;
-(void)setOffline:(BOOL)arg1 ;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(void)setSystemReleaseType:(long long)arg1 ;
-(void)setSBEnabled:(BOOL)arg1 ;
-(void)setStoreAccountID:(unsigned long long)arg1 ;
-(Class)_mutableCopyClass;
-(void)setFeatureName:(NSString *)arg1 ;
-(void)setItemDuration:(double)arg1 ;
-(void)setItemEndTime:(double)arg1 ;
-(void)setItemStartTime:(double)arg1 ;
-(void)setRecommendationData:(NSData *)arg1 ;
-(void)setTimedMetadata:(NSData *)arg1 ;
-(void)setTrackInfo:(NSData *)arg1 ;
-(void)setEnqueuerProperties:(SSVPlayActivityEnqueuerProperties *)arg1 ;
-(void)setHouseholdID:(NSString *)arg1 ;
-(void)setSiriInitiated:(NSNumber *)arg1 ;
-(void)setPersonalizedContainerID:(NSString *)arg1 ;
-(void)setReasonHintType:(unsigned long long)arg1 ;
-(void)setEventTimeZone:(NSTimeZone *)arg1 ;
-(void)setInternalBuild:(BOOL)arg1 ;
-(void)setItemIDs:(SSVPlayActivityEventItemIDs *)arg1 ;
-(void)setLyricsDisplayedCharacterCount:(unsigned long long)arg1 ;
-(void)setLyricsLanguage:(NSString *)arg1 ;
@end

