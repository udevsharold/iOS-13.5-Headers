/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface BBObserverGatewayAddBulletinRequest : NSObject {

	NSString* _bulletinID;
	NSString* _sectionID;
	NSDate* _timeout;
	/*^block*/id _timeoutHandler;

}

@property (nonatomic,copy) NSString * bulletinID;              //@synthesize bulletinID=_bulletinID - In the implementation block
@property (nonatomic,copy) NSString * sectionID;               //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) NSDate * timeout;                 //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) id timeoutHandler;                  //@synthesize timeoutHandler=_timeoutHandler - In the implementation block
-(NSDate *)timeout;
-(void)setTimeout:(NSDate *)arg1 ;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(id)timeoutHandler;
-(void)setTimeoutHandler:(id)arg1 ;
-(NSString *)bulletinID;
-(void)setBulletinID:(NSString *)arg1 ;
@end

