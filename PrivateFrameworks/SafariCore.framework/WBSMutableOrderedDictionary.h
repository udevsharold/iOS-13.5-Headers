/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:14 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSMutableOrderedSet, NSMutableDictionary, NSArray;

@interface WBSMutableOrderedDictionary : NSObject {

	WBSMutableOrderedSet* _mutableOrderedSetOfKeys;
	NSMutableDictionary* _mutableDictionary;
	unsigned long long _maximumCount;

}

@property (nonatomic,readonly) NSArray * orderedKeys; 
@property (nonatomic,readonly) NSArray * orderedValues; 
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initWithMaximumCount:(unsigned long long)arg1 ;
-(NSArray *)orderedKeys;
-(NSArray *)orderedValues;
@end
