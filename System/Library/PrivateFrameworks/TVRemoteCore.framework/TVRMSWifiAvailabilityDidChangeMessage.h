/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TVRMSWifiAvailabilityDidChangeMessage : PBCodable <NSCopying> {

	int _sessionIdentifier;
	BOOL _wifiAvailable;
	SCD_Struct_TV2 _has;

}

@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                  //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasWifiAvailable; 
@property (assign,nonatomic) BOOL wifiAvailable;                     //@synthesize wifiAvailable=_wifiAvailable - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)sessionIdentifier;
-(void)setSessionIdentifier:(int)arg1 ;
-(BOOL)hasSessionIdentifier;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(void)setWifiAvailable:(BOOL)arg1 ;
-(BOOL)wifiAvailable;
-(void)setHasWifiAvailable:(BOOL)arg1 ;
-(BOOL)hasWifiAvailable;
@end

