/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, VCPProtoTimeRange;

@interface VCPProtoMovieClassificationResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	NSMutableArray* _classifications;
	VCPProtoTimeRange* _timeRange;

}

@property (nonatomic,retain) VCPProtoTimeRange * timeRange;                 //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,retain) NSMutableArray * classifications;              //@synthesize classifications=_classifications - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
+(Class)classificationType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimeRange:(VCPProtoTimeRange *)arg1 ;
-(VCPProtoTimeRange *)timeRange;
-(NSMutableArray *)classifications;
-(id)exportToLegacyDictionary;
-(void)addClassification:(id)arg1 ;
-(unsigned long long)classificationsCount;
-(void)clearClassifications;
-(id)classificationAtIndex:(unsigned long long)arg1 ;
-(void)setClassifications:(NSMutableArray *)arg1 ;
@end

