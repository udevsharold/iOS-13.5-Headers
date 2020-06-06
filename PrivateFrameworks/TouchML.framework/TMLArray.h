/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface TMLArray : NSObject {

	NSMutableArray* _array;

}

@property (nonatomic,retain) NSArray * array;                         //@synthesize array=_array - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)initWithArray:(id)arg1 ;
-(NSArray *)array;
-(void)removeAllObjects;
-(void)remove:(unsigned long long)arg1 ;
-(void)setArray:(NSArray *)arg1 ;
-(void)append:(id)arg1 ;
-(void)set:(unsigned long long)arg1 value:(id)arg2 ;
-(id)get:(unsigned long long)arg1 ;
@end

