/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSUSparseArray : NSObject <NSCopying> {

	tsuSaPage* _topPage;
	unsigned long long _nonNilCount;
	unsigned _depth;

}

@property (readonly) unsigned long long count; 
+(id)array;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)clear;
-(id)objectForKey:(unsigned long long)arg1 ;
-(void)removeObjectForKey:(unsigned long long)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(void)setObject:(id)arg1 forKey:(unsigned long long)arg2 ;
-(void)foreach:(/*^block*/id)arg1 ;
-(unsigned long long)maxIndexForCurrentDepth;
-(void)increaseDepth;
-(BOOL)hasObjectForKey:(unsigned long long)arg1 ;
@end

