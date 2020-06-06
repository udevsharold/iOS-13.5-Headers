/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICPBDGSFinishDelegationRequest, ICPBDGSStartDelegationRequest;

@interface ICPBDGSRequest : PBRequest <NSCopying> {

	ICPBDGSFinishDelegationRequest* _finishDelegationRequest;
	ICPBDGSStartDelegationRequest* _startDelegationRequest;
	unsigned _uniqueID;
	SCD_Struct_IC7 _has;

}

@property (assign,nonatomic) BOOL hasUniqueID; 
@property (assign,nonatomic) unsigned uniqueID;                                                     //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) BOOL hasStartDelegationRequest; 
@property (nonatomic,retain) ICPBDGSStartDelegationRequest * startDelegationRequest;                //@synthesize startDelegationRequest=_startDelegationRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasFinishDelegationRequest; 
@property (nonatomic,retain) ICPBDGSFinishDelegationRequest * finishDelegationRequest;              //@synthesize finishDelegationRequest=_finishDelegationRequest - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)uniqueID;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUniqueID:(unsigned)arg1 ;
-(BOOL)hasUniqueID;
-(void)setStartDelegationRequest:(ICPBDGSStartDelegationRequest *)arg1 ;
-(void)setFinishDelegationRequest:(ICPBDGSFinishDelegationRequest *)arg1 ;
-(void)setHasUniqueID:(BOOL)arg1 ;
-(BOOL)hasStartDelegationRequest;
-(BOOL)hasFinishDelegationRequest;
-(ICPBDGSStartDelegationRequest *)startDelegationRequest;
-(ICPBDGSFinishDelegationRequest *)finishDelegationRequest;
@end

