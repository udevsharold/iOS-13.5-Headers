/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBDeviceInfo, NSString;

@interface NTPBMarketingSubscriptionRequest : PBRequest <NSCopying> {

	NTPBDeviceInfo* _deviceInfo;
	NSString* _dsid;
	int _subscriptionAction;
	int _subscriptionType;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasSubscriptionType; 
@property (assign,nonatomic) int subscriptionType;                     //@synthesize subscriptionType=_subscriptionType - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionAction; 
@property (assign,nonatomic) int subscriptionAction;                   //@synthesize subscriptionAction=_subscriptionAction - In the implementation block
@property (nonatomic,readonly) BOOL hasDsid; 
@property (nonatomic,retain) NSString * dsid;                          //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceInfo; 
@property (nonatomic,retain) NTPBDeviceInfo * deviceInfo;              //@synthesize deviceInfo=_deviceInfo - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)subscriptionType;
-(void)setSubscriptionType:(int)arg1 ;
-(NTPBDeviceInfo *)deviceInfo;
-(void)setDeviceInfo:(NTPBDeviceInfo *)arg1 ;
-(void)setSubscriptionAction:(int)arg1 ;
-(BOOL)hasDeviceInfo;
-(void)setHasSubscriptionType:(BOOL)arg1 ;
-(BOOL)hasSubscriptionType;
-(int)subscriptionAction;
-(void)setHasSubscriptionAction:(BOOL)arg1 ;
-(BOOL)hasSubscriptionAction;
-(BOOL)hasDsid;
@end

