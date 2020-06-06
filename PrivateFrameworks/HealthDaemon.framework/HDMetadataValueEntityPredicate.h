/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePredicate.h>
#import <libobjc.A.dylib/HDMetadataPredicate.h>

@class HDSQLitePredicate, NSString;

@interface HDMetadataValueEntityPredicate : HDSQLitePredicate <HDMetadataPredicate> {

	HDSQLitePredicate* _keyPredicate;
	HDSQLitePredicate* _valuePredicate;
	BOOL _matchObjectsWithoutKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicateWithMetadataKey:(id)arg1 allowedValues:(id)arg2 ;
+(id)predicateWithMetadataKey:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3 ;
+(id)_predicateWithMetadataKey:(id)arg1 allowedValues:(id)arg2 ;
+(id)_predicateWithMetadataKey:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3 ;
+(id)_predicateWithMetadataKey:(id)arg1 exists:(BOOL)arg2 ;
+(id)predicateWithMetadataKey:(id)arg1 exists:(BOOL)arg2 ;
-(NSString *)description;
-(id)SQLForEntityClass:(Class)arg1 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(inout int*)arg2 ;
-(id)_valuePredicateForValue:(id)arg1 operatorType:(unsigned long long)arg2 ;
@end

