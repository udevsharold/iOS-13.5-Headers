/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSCoder.h>
#import <libobjc.A.dylib/MTSerializer.h>

@class NSCoder, NSMutableArray;

@interface MTStorageWriter : NSCoder <MTSerializer> {

	NSMutableArray* _stack;

}

@property (nonatomic,retain) NSMutableArray * stack;                   //@synthesize stack=_stack - In the implementation block
@property (nonatomic,readonly) unsigned long long mtType; 
@property (nonatomic,readonly) NSCoder * mtCoder; 
-(id)init;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setStack:(NSMutableArray *)arg1 ;
-(NSMutableArray *)stack;
-(id)encodedDictionary;
-(void)_encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)_serializingProtocol;
-(id)_dictionaryForProtocolObject:(id)arg1 ;
-(void)_encodeProtocolObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)mtType;
-(NSCoder *)mtCoder;
@end

