/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableOrderedSet, NSArray;

@interface FCSharedStringIndex : NSObject <NSCopying> {

	NSMutableOrderedSet* _stringsSet;

}

@property (nonatomic,retain) NSMutableOrderedSet * stringsSet;              //@synthesize stringsSet=_stringsSet - In the implementation block
@property (nonatomic,readonly) NSArray * strings; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)strings;
-(id)stringForReference:(int)arg1 ;
-(id)initWithStrings:(id)arg1 ;
-(int)referenceForString:(id)arg1 ;
-(NSMutableOrderedSet *)stringsSet;
-(int)referenceForStringReadOnly:(id)arg1 ;
-(void)setStringsSet:(NSMutableOrderedSet *)arg1 ;
@end

