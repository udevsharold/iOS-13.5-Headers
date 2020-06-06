/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, CWFEventID, NSDate, NSDictionary;

@interface CWFEvent : NSObject <NSCopying> {

	NSUUID* _UUID;
	CWFEventID* _eventID;
	NSDate* _timestamp;
	NSDictionary* _info;
	unsigned long long _acknowledgementTimeout;
	/*^block*/id _acknowledge;

}

@property (nonatomic,copy) NSUUID * UUID;                                            //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) CWFEventID * eventID;                                     //@synthesize eventID=_eventID - In the implementation block
@property (nonatomic,copy) NSDate * timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSDictionary * info;                                      //@synthesize info=_info - In the implementation block
@property (assign,nonatomic) unsigned long long acknowledgementTimeout;              //@synthesize acknowledgementTimeout=_acknowledgementTimeout - In the implementation block
@property (nonatomic,copy) id acknowledge;                                           //@synthesize acknowledge=_acknowledge - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(NSDate *)timestamp;
-(id)acknowledge;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSDictionary *)info;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(CWFEventID *)eventID;
-(void)setEventID:(CWFEventID *)arg1 ;
-(unsigned long long)acknowledgementTimeout;
-(void)setAcknowledgementTimeout:(unsigned long long)arg1 ;
-(void)setAcknowledge:(id)arg1 ;
@end

