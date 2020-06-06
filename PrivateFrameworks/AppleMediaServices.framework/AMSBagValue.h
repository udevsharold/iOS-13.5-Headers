/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSBagDataSourceProtocol;
@class ACAccount, NSString;

@interface AMSBagValue : NSObject {

	ACAccount* _account;
	id<AMSBagDataSourceProtocol> _dataSource;
	NSString* _key;
	unsigned long long _valueType;

}

@property (nonatomic,copy) ACAccount * account;                                           //@synthesize account=_account - In the implementation block
@property (assign,nonatomic,__weak) id<AMSBagDataSourceProtocol> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSString * key;                                              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned long long valueType;                                //@synthesize valueType=_valueType - In the implementation block
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
+(id)globalBagValueStorage;
+(id)_valueFromDictionary:(id)arg1 forBagKey:(id)arg2 ;
+(BOOL)_value:(id)arg1 isKindOfValueType:(unsigned long long)arg2 ;
+(id)bagValueWithKey:(id)arg1 valueType:(unsigned long long)arg2 valuePromise:(id)arg3 ;
+(id)failingBagValueWithKey:(id)arg1 valueType:(unsigned long long)arg2 error:(id)arg3 ;
+(id)frozenBagValueWithKey:(id)arg1 value:(id)arg2 valueType:(unsigned long long)arg3 ;
-(NSString *)key;
-(BOOL)isLoaded;
-(void)setKey:(NSString *)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(unsigned long long)valueType;
-(id<AMSBagDataSourceProtocol>)dataSource;
-(void)setDataSource:(id<AMSBagDataSourceProtocol>)arg1 ;
-(id)valueWithError:(id*)arg1 ;
-(void)setValueType:(unsigned long long)arg1 ;
-(void)valueWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3 ;
-(id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3 account:(id)arg4 ;
-(id)_processedDefaultValue:(id)arg1 ;
-(id)valuePromise;
@end

