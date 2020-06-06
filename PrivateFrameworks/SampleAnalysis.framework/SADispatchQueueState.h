/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SASerializable.h>

@class SAThread, NSString, SAThreadState;

@interface SADispatchQueueState : NSObject <SASerializable> {

	SAThread* _thread;
	unsigned long long _threadStateIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned long long threadStateIndex;              //@synthesize threadStateIndex=_threadStateIndex - In the implementation block
@property (readonly) SAThread * thread;                              //@synthesize thread=_thread - In the implementation block
@property (readonly) SAThreadState * threadState; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA37*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)stateWithThread:(id)arg1 threadStateIndex:(unsigned long long)arg2 ;
-(SAThread *)thread;
-(SAThreadState *)threadState;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA37*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA37*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(unsigned long long)threadStateIndex;
-(void)setThreadStateIndex:(unsigned long long)arg1 ;
-(id)initWithThread:(id)arg1 threadStateIndex:(unsigned long long)arg2 ;
-(id)debugDescriptionWithDispatchQueue:(id)arg1 ;
@end

