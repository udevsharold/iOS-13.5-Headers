/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFSQLInsertStatementValue.h>

@class NSString, NSMutableArray, NSMutableOrderedSet;

@interface EFSQLInsertStatement : NSObject <EFSQLInsertStatementValue> {

	NSString* _table;
	unsigned long long _conflictResolution;
	NSMutableArray* _values;
	NSMutableOrderedSet* _requiredColumns;

}

@property (nonatomic,retain) NSString * table;                                           //@synthesize table=_table - In the implementation block
@property (nonatomic,readonly) unsigned long long conflictResolution;                    //@synthesize conflictResolution=_conflictResolution - In the implementation block
@property (nonatomic,retain) NSMutableArray * values;                                    //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * requiredColumns;                      //@synthesize requiredColumns=_requiredColumns - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,copy,readonly) NSString * queryString; 
@property (nonatomic,copy,readonly) NSString * queryStringForNamedBindings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEmpty;
-(void)setValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)values;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)table;
-(void)setTable:(NSString *)arg1 ;
-(id)initWithTable:(id)arg1 ;
-(NSString *)queryString;
-(id)addValue;
-(NSMutableOrderedSet *)requiredColumns;
-(void)setRequiredColumns:(NSMutableOrderedSet *)arg1 ;
-(id)initWithTable:(id)arg1 conflictResolution:(unsigned long long)arg2 ;
-(id)_queryStringForNamedBindings:(BOOL)arg1 ;
-(id)_valuesForNamedBindings:(BOOL)arg1 ;
-(unsigned long long)conflictResolution;
-(NSString *)queryStringForNamedBindings;
-(void)enumerateBindingIndicesAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateBindingNamesAndValuesUsingBlock:(/*^block*/id)arg1 ;
@end

