/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/Transparency-Structs.h>
#import <libobjc.A.dylib/GPBDictionaryInternalsProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage, NSMutableDictionary;

@interface GPBInt32BoolDictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying> {

	GPBMessage* _autocreator;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)initWithDictionary:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(int)arg2 ;
-(void)removeAll;
-(void)setGPBGenericValue:(/*function pointer*/void**)arg1 forGPBGenericValueKey:(/*function pointer*/void**)arg2 ;
-(unsigned long long)computeSerializedSizeAsField:(id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2 ;
-(void)enumerateForTextFormat:(/*^block*/id)arg1 ;
-(id)initWithBools:(const BOOL*)arg1 forKeys:(const int*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateKeysAndBoolsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)getBool:(BOOL*)arg1 forKey:(int)arg2 ;
-(void)removeBoolForKey:(int)arg1 ;
@end

