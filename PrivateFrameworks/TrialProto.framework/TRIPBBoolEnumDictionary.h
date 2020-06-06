/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TrialProto-Structs.h>
#import <libobjc.A.dylib/TRIPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TRIPBMessage;

@interface TRIPBBoolEnumDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {

	TRIPBMessage* _autocreator;
	/*function pointer*/void* _validationFunc;
	int _values[2];
	BOOL _valueSet[2];

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) /*function pointer*/void* validationFunc;              //@synthesize validationFunc=_validationFunc - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)initWithDictionary:(id)arg1 ;
-(void)removeAll;
-(id)serializedDataForUnknownValue:(int)arg1 forKey:(/*function pointer*/void**)arg2 keyDataType:(unsigned char)arg3 ;
-(unsigned long long)computeSerializedSizeAsField:(id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
-(id)initWithValidationFunction:(/*function pointer*/void*)arg1 rawValues:(const int*)arg2 forKeys:(const BOOL*)arg3 count:(unsigned long long)arg4 ;
-(/*function pointer*/void*)validationFunc;
-(void)enumerateKeysAndRawValuesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithValidationFunction:(/*function pointer*/void*)arg1 ;
-(id)initWithValidationFunction:(/*function pointer*/void*)arg1 capacity:(unsigned long long)arg2 ;
-(BOOL)getEnum:(int*)arg1 forKey:(BOOL)arg2 ;
-(BOOL)getRawValue:(int*)arg1 forKey:(BOOL)arg2 ;
-(void)enumerateKeysAndEnumsUsingBlock:(/*^block*/id)arg1 ;
-(void)addRawEntriesFromDictionary:(id)arg1 ;
-(void)setRawValue:(int)arg1 forKey:(BOOL)arg2 ;
-(void)removeEnumForKey:(BOOL)arg1 ;
-(void)setEnum:(int)arg1 forKey:(BOOL)arg2 ;
-(void)setTRIPBGenericValue:(/*function pointer*/void**)arg1 forTRIPBGenericValueKey:(/*function pointer*/void**)arg2 ;
@end

