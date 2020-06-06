/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@interface SAPAStyleSymbolOwner : NSObject {

	BOOL _hasTextExecSegment;
	unsigned long long _textSegmentLength;

}

@property (assign) unsigned long long textSegmentLength;              //@synthesize textSegmentLength=_textSegmentLength - In the implementation block
@property (assign) BOOL hasTextExecSegment;                           //@synthesize hasTextExecSegment=_hasTextExecSegment - In the implementation block
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA26*)arg1 bufferLength:(unsigned long long)arg2 ;
-(BOOL)hasTextExecSegment;
-(unsigned long long)textSegmentLength;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA26*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(void)setHasTextExecSegment:(BOOL)arg1 ;
-(void)setTextSegmentLength:(unsigned long long)arg1 ;
@end

