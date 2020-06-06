/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoImageExposureResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _exposure;
	float _underExpose;
	SCD_Struct_VC44 _has;

}

@property (assign,nonatomic) float exposure;                   //@synthesize exposure=_exposure - In the implementation block
@property (assign,nonatomic) BOOL hasUnderExpose; 
@property (assign,nonatomic) float underExpose;                //@synthesize underExpose=_underExpose - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)exposure;
-(void)setExposure:(float)arg1 ;
-(id)exportToLegacyDictionary;
-(void)setUnderExpose:(float)arg1 ;
-(void)setHasUnderExpose:(BOOL)arg1 ;
-(BOOL)hasUnderExpose;
-(float)underExpose;
@end

