/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetUserActivityProperties : PHAssetPropertySet {

	long long _syncedPlayCount;
	long long _syncedShareCount;
	long long _syncedViewCount;
	long long _pendingPlayCount;
	long long _pendingShareCount;
	long long _pendingViewCount;

}

@property (assign,nonatomic) long long syncedPlayCount;                //@synthesize syncedPlayCount=_syncedPlayCount - In the implementation block
@property (assign,nonatomic) long long syncedShareCount;               //@synthesize syncedShareCount=_syncedShareCount - In the implementation block
@property (assign,nonatomic) long long syncedViewCount;                //@synthesize syncedViewCount=_syncedViewCount - In the implementation block
@property (assign,nonatomic) long long pendingPlayCount;               //@synthesize pendingPlayCount=_pendingPlayCount - In the implementation block
@property (assign,nonatomic) long long pendingShareCount;              //@synthesize pendingShareCount=_pendingShareCount - In the implementation block
@property (assign,nonatomic) long long pendingViewCount;               //@synthesize pendingViewCount=_pendingViewCount - In the implementation block
@property (nonatomic,readonly) long long playCount; 
@property (nonatomic,readonly) long long shareCount; 
@property (nonatomic,readonly) long long viewCount; 
+(id)propertiesToFetch;
+(id)propertySetName;
-(long long)playCount;
-(long long)shareCount;
-(long long)viewCount;
-(long long)pendingPlayCount;
-(void)setPendingPlayCount:(long long)arg1 ;
-(long long)pendingShareCount;
-(void)setPendingShareCount:(long long)arg1 ;
-(long long)pendingViewCount;
-(void)setPendingViewCount:(long long)arg1 ;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(long long)syncedPlayCount;
-(void)setSyncedPlayCount:(long long)arg1 ;
-(long long)syncedShareCount;
-(void)setSyncedShareCount:(long long)arg1 ;
-(long long)syncedViewCount;
-(void)setSyncedViewCount:(long long)arg1 ;
@end

