/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPMerchantLookupCorrections : PBCodable <NSCopying> {

	BOOL _isCategoryIncorrect;
	BOOL _isMerchantIncorrect;
	BOOL _isOtherIssue;
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasIsCategoryIncorrect; 
@property (assign,nonatomic) BOOL isCategoryIncorrect; 
@property (assign,nonatomic) BOOL hasIsMerchantIncorrect; 
@property (assign,nonatomic) BOOL isMerchantIncorrect; 
@property (assign,nonatomic) BOOL hasIsOtherIssue; 
@property (assign,nonatomic) BOOL isOtherIssue; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)isCategoryIncorrect;
-(void)setIsCategoryIncorrect:(BOOL)arg1 ;
-(void)setHasIsCategoryIncorrect:(BOOL)arg1 ;
-(BOOL)hasIsCategoryIncorrect;
-(BOOL)isMerchantIncorrect;
-(void)setIsMerchantIncorrect:(BOOL)arg1 ;
-(void)setHasIsMerchantIncorrect:(BOOL)arg1 ;
-(BOOL)hasIsMerchantIncorrect;
-(BOOL)isOtherIssue;
-(void)setIsOtherIssue:(BOOL)arg1 ;
-(void)setHasIsOtherIssue:(BOOL)arg1 ;
-(BOOL)hasIsOtherIssue;
@end

