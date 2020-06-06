/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ML3DatabaseStatement, ML3DatabaseConnection, NSDictionary, NSString;

@interface ML3DatabaseResult : NSObject {

	ML3DatabaseStatement* _statement;
	ML3DatabaseConnection* _connection;
	NSDictionary* _columnNameIndexMap;
	unsigned long long _limitIndex;
	NSString* _limitProperty;
	long long _limitValue;

}

@property (nonatomic,copy) NSString * limitProperty;              //@synthesize limitProperty=_limitProperty - In the implementation block
@property (assign,nonatomic) long long limitValue;                //@synthesize limitValue=_limitValue - In the implementation block
-(id)init;
-(id)rows;
-(id)_statement;
-(long long)limitValue;
-(void)setLimitValue:(long long)arg1 ;
-(long long)int64ValueForFirstRowAndColumn;
-(id)initWithStatement:(id)arg1 connection:(id)arg2 ;
-(BOOL)hasAtLeastOneRow;
-(void)enumerateRowsWithBlock:(/*^block*/id)arg1 ;
-(id)objectsInColumn:(unsigned long long)arg1 ;
-(id)objectForFirstRowAndColumn;
-(id)stringValueForFirstRowAndColumn;
-(unsigned long long)indexForColumnName:(id)arg1 ;
-(void)setLimitProperty:(NSString *)arg1 ;
-(id)columnNameIndexMap;
-(void)setLimitProperty:(id)arg1 limitValue:(long long)arg2 ;
-(NSString *)limitProperty;
@end

