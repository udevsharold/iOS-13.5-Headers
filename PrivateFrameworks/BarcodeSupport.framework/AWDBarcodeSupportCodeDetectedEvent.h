/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BarcodeSupport/BarcodeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDBarcodeSupportCodeDetectedEvent : PBCodable <NSCopying> {

	unsigned long long _detectionTimeMs;
	unsigned long long _timestamp;
	int _appLinkPreferredOpenStrategy;
	int _barcodeDataType;
	int _barcodeSourceType;
	int _barcodeURLType;
	int _clientType;
	int _invalidBarcodeDataType;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasClientType; 
@property (assign,nonatomic) int clientType;                                    //@synthesize clientType=_clientType - In the implementation block
@property (assign,nonatomic) BOOL hasBarcodeDataType; 
@property (assign,nonatomic) int barcodeDataType;                               //@synthesize barcodeDataType=_barcodeDataType - In the implementation block
@property (assign,nonatomic) BOOL hasDetectionTimeMs; 
@property (assign,nonatomic) unsigned long long detectionTimeMs;                //@synthesize detectionTimeMs=_detectionTimeMs - In the implementation block
@property (assign,nonatomic) BOOL hasInvalidBarcodeDataType; 
@property (assign,nonatomic) int invalidBarcodeDataType;                        //@synthesize invalidBarcodeDataType=_invalidBarcodeDataType - In the implementation block
@property (assign,nonatomic) BOOL hasBarcodeURLType; 
@property (assign,nonatomic) int barcodeURLType;                                //@synthesize barcodeURLType=_barcodeURLType - In the implementation block
@property (assign,nonatomic) BOOL hasAppLinkPreferredOpenStrategy; 
@property (assign,nonatomic) int appLinkPreferredOpenStrategy;                  //@synthesize appLinkPreferredOpenStrategy=_appLinkPreferredOpenStrategy - In the implementation block
@property (assign,nonatomic) BOOL hasBarcodeSourceType; 
@property (assign,nonatomic) int barcodeSourceType;                             //@synthesize barcodeSourceType=_barcodeSourceType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(int)clientType;
-(void)setClientType:(int)arg1 ;
-(void)setHasClientType:(BOOL)arg1 ;
-(BOOL)hasClientType;
-(id)clientTypeAsString:(int)arg1 ;
-(int)StringAsClientType:(id)arg1 ;
-(int)barcodeDataType;
-(void)setBarcodeDataType:(int)arg1 ;
-(void)setHasBarcodeDataType:(BOOL)arg1 ;
-(BOOL)hasBarcodeDataType;
-(id)barcodeDataTypeAsString:(int)arg1 ;
-(int)StringAsBarcodeDataType:(id)arg1 ;
-(int)barcodeURLType;
-(void)setBarcodeURLType:(int)arg1 ;
-(void)setHasBarcodeURLType:(BOOL)arg1 ;
-(BOOL)hasBarcodeURLType;
-(id)barcodeURLTypeAsString:(int)arg1 ;
-(int)StringAsBarcodeURLType:(id)arg1 ;
-(int)barcodeSourceType;
-(void)setBarcodeSourceType:(int)arg1 ;
-(void)setHasBarcodeSourceType:(BOOL)arg1 ;
-(BOOL)hasBarcodeSourceType;
-(id)barcodeSourceTypeAsString:(int)arg1 ;
-(int)StringAsBarcodeSourceType:(id)arg1 ;
-(void)setDetectionTimeMs:(unsigned long long)arg1 ;
-(void)setHasDetectionTimeMs:(BOOL)arg1 ;
-(BOOL)hasDetectionTimeMs;
-(int)invalidBarcodeDataType;
-(void)setInvalidBarcodeDataType:(int)arg1 ;
-(void)setHasInvalidBarcodeDataType:(BOOL)arg1 ;
-(BOOL)hasInvalidBarcodeDataType;
-(id)invalidBarcodeDataTypeAsString:(int)arg1 ;
-(int)StringAsInvalidBarcodeDataType:(id)arg1 ;
-(int)appLinkPreferredOpenStrategy;
-(void)setAppLinkPreferredOpenStrategy:(int)arg1 ;
-(void)setHasAppLinkPreferredOpenStrategy:(BOOL)arg1 ;
-(BOOL)hasAppLinkPreferredOpenStrategy;
-(id)appLinkPreferredOpenStrategyAsString:(int)arg1 ;
-(int)StringAsAppLinkPreferredOpenStrategy:(id)arg1 ;
-(unsigned long long)detectionTimeMs;
@end

