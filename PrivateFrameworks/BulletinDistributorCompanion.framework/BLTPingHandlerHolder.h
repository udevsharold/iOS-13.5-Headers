/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BLTPingSubscriptionInfo.h>

@class NSString;

@interface BLTPingHandlerHolder : NSObject <BLTPingSubscriptionInfo> {

	id _pingHandler;
	BOOL _forBulletin;
	BOOL _forNotification;
	NSString* _sectionID;
	unsigned long long _ackType;

}

@property (nonatomic,copy) NSString * sectionID;                          //@synthesize sectionID=_sectionID - In the implementation block
@property (assign,nonatomic) BOOL forBulletin;                            //@synthesize forBulletin=_forBulletin - In the implementation block
@property (assign,nonatomic) BOOL forNotification;                        //@synthesize forNotification=_forNotification - In the implementation block
@property (assign,nonatomic) unsigned long long ackType;                  //@synthesize ackType=_ackType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canAck; 
@property (nonatomic,readonly) BOOL canAckOnLocalConnection; 
-(id)init;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(void)setForNotification:(BOOL)arg1 ;
-(BOOL)forNotification;
-(void)pingWithBulletin:(id)arg1 ack:(/*^block*/id)arg2 ;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(/*^block*/id)arg3 ;
-(id)initWithPingHandler:(id)arg1 ;
-(BOOL)canAck;
-(void)_performPingWithAckableForwardBlock:(/*^block*/id)arg1 ackableNoParametersBlock:(/*^block*/id)arg2 noAckBlock:(/*^block*/id)arg3 clientAck:(/*^block*/id)arg4 ;
-(BOOL)forBulletin;
-(BOOL)canAckOnLocalConnection;
-(void)setForBulletin:(BOOL)arg1 ;
-(unsigned long long)ackType;
-(void)setAckType:(unsigned long long)arg1 ;
@end

