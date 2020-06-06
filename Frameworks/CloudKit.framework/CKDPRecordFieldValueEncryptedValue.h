/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPDate, CKDPLocationCoordinate, CKDPRecordReference, NSString;

@interface CKDPRecordFieldValueEncryptedValue : PBCodable <NSCopying> {

	SCD_Struct_CK1* _doubleListValues;
	SCD_Struct_CK2* _signedListValues;
	double _doubleValue;
	long long _signedValue;
	NSMutableArray* _dateListValues;
	CKDPDate* _dateValue;
	NSMutableArray* _locationListValues;
	CKDPLocationCoordinate* _locationValue;
	CKDPRecordReference* _referenceValue;
	NSMutableArray* _stringListValues;
	NSString* _stringValue;
	SCD_Struct_CK3 _has;

}

@property (assign,nonatomic) BOOL hasSignedValue; 
@property (assign,nonatomic) long long signedValue;                                   //@synthesize signedValue=_signedValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                                      //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDateValue; 
@property (nonatomic,retain) CKDPDate * dateValue;                                    //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                                  //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationValue; 
@property (nonatomic,retain) CKDPLocationCoordinate * locationValue;                  //@synthesize locationValue=_locationValue - In the implementation block
@property (nonatomic,readonly) BOOL hasReferenceValue; 
@property (nonatomic,retain) CKDPRecordReference * referenceValue;                    //@synthesize referenceValue=_referenceValue - In the implementation block
@property (nonatomic,readonly) unsigned long long signedListValuesCount; 
@property (nonatomic,readonly) long long* signedListValues; 
@property (nonatomic,readonly) unsigned long long doubleListValuesCount; 
@property (nonatomic,readonly) double* doubleListValues; 
@property (nonatomic,retain) NSMutableArray * dateListValues;                         //@synthesize dateListValues=_dateListValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * stringListValues;                       //@synthesize stringListValues=_stringListValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * locationListValues;                     //@synthesize locationListValues=_locationListValues - In the implementation block
+(Class)dateListValueType;
+(Class)stringListValueType;
+(Class)locationListValueType;
-(double)doubleValue;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(void)setDateValue:(CKDPDate *)arg1 ;
-(BOOL)hasDateValue;
-(CKDPDate *)dateValue;
-(void)addDateListValue:(id)arg1 ;
-(void)addStringListValue:(id)arg1 ;
-(void)addLocationListValue:(id)arg1 ;
-(void)setLocationValue:(CKDPLocationCoordinate *)arg1 ;
-(void)setReferenceValue:(CKDPRecordReference *)arg1 ;
-(unsigned long long)signedListValuesCount;
-(void)clearSignedListValues;
-(long long)signedListValueAtIndex:(unsigned long long)arg1 ;
-(void)addSignedListValue:(long long)arg1 ;
-(unsigned long long)doubleListValuesCount;
-(void)clearDoubleListValues;
-(double)doubleListValueAtIndex:(unsigned long long)arg1 ;
-(void)addDoubleListValue:(double)arg1 ;
-(unsigned long long)dateListValuesCount;
-(void)clearDateListValues;
-(id)dateListValueAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)stringListValuesCount;
-(void)clearStringListValues;
-(id)stringListValueAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)locationListValuesCount;
-(void)clearLocationListValues;
-(id)locationListValueAtIndex:(unsigned long long)arg1 ;
-(void)setSignedValue:(long long)arg1 ;
-(void)setHasSignedValue:(BOOL)arg1 ;
-(BOOL)hasSignedValue;
-(BOOL)hasLocationValue;
-(BOOL)hasReferenceValue;
-(long long*)signedListValues;
-(void)setSignedListValues:(long long*)arg1 count:(unsigned long long)arg2 ;
-(double*)doubleListValues;
-(void)setDoubleListValues:(double*)arg1 count:(unsigned long long)arg2 ;
-(long long)signedValue;
-(CKDPLocationCoordinate *)locationValue;
-(CKDPRecordReference *)referenceValue;
-(NSMutableArray *)dateListValues;
-(void)setDateListValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)stringListValues;
-(void)setStringListValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)locationListValues;
-(void)setLocationListValues:(NSMutableArray *)arg1 ;
@end

