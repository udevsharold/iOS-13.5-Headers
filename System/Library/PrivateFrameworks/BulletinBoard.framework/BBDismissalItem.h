/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface BBDismissalItem : NSObject {

	unsigned long long _feeds;
	NSDate* _expiration;

}

@property (nonatomic,readonly) unsigned long long feeds;              //@synthesize feeds=_feeds - In the implementation block
@property (nonatomic,readonly) NSDate * expiration;                   //@synthesize expiration=_expiration - In the implementation block
-(id)description;
-(NSDate *)expiration;
-(BOOL)hasExpired;
-(id)initWithFeeds:(unsigned long long)arg1 ;
-(void)addFeeds:(unsigned long long)arg1 ;
-(unsigned long long)feeds;
@end

