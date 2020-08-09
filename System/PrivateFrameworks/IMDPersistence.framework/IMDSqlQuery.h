/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMDSqlQuery : NSObject {

	NSString* _tableName;
	NSString* _columns;
	NSString* _where;
	long long _limit;

}

@property (nonatomic,copy,readonly) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
@property (nonatomic,copy) NSString * columns;                         //@synthesize columns=_columns - In the implementation block
@property (assign,nonatomic) long long limit;                          //@synthesize limit=_limit - In the implementation block
@property (nonatomic,copy) NSString * where;                           //@synthesize where=_where - In the implementation block
+(id)databaseQuery:(id)arg1 ;
-(void)dealloc;
-(long long)limit;
-(void)setLimit:(long long)arg1 ;
-(NSString *)columns;
-(void)setColumns:(NSString *)arg1 ;
-(NSString *)tableName;
-(void)setWhere:(NSString *)arg1 ;
-(NSString *)where;
-(id)initWithTableName:(id)arg1 ;
-(id)createQueryString;
@end
