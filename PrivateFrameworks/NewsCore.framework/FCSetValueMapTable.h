/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMapTable;

@interface FCSetValueMapTable : NSObject <NSCopying, NSMutableCopying> {

	NSMapTable* _backingMapTable;

}

@property (nonatomic,retain) NSMapTable * backingMapTable;              //@synthesize backingMapTable=_backingMapTable - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectEnumerator;
-(id)keyEnumerator;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectsForKey:(id)arg1 ;
-(void)removeObjectsForKey:(id)arg1 ;
-(NSMapTable *)backingMapTable;
-(id)_setForKey:(id)arg1 ;
-(void)addObjects:(id)arg1 forKey:(id)arg2 ;
-(void)setBackingMapTable:(NSMapTable *)arg1 ;
@end

