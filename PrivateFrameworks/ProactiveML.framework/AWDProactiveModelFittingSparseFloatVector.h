/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDProactiveModelFittingSparseFloatVector : PBCodable <NSCopying> {

	SCD_Struct_AW5* _indices;
	SCD_Struct_AW6* _values;
	unsigned long long _length;
	SCD_Struct_AW2 _has;

}

@property (nonatomic,readonly) unsigned long long indicesCount; 
@property (nonatomic,readonly) unsigned long long* indices; 
@property (nonatomic,readonly) unsigned long long valuesCount; 
@property (nonatomic,readonly) float* values; 
@property (assign,nonatomic) BOOL hasLength; 
@property (assign,nonatomic) unsigned long long length;                      //@synthesize length=_length - In the implementation block
+(id)sparseFloatVectorFromModelWeights:(id)arg1 ;
+(id)sparseFloatVectorFromSparseVector:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLength:(unsigned long long)arg1 ;
-(float*)values;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(float)valueAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long*)indices;
-(unsigned long long)valuesCount;
-(void)clearValues;
-(BOOL)hasLength;
-(float)valuesAtIndex:(unsigned long long)arg1 ;
-(void)addValues:(float)arg1 ;
-(void)setHasLength:(BOOL)arg1 ;
-(unsigned long long)indicesCount;
-(void)clearIndices;
-(void)addIndices:(unsigned long long)arg1 ;
-(unsigned long long)indicesAtIndex:(unsigned long long)arg1 ;
-(void)setIndices:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setValues:(float*)arg1 count:(unsigned long long)arg2 ;
@end

