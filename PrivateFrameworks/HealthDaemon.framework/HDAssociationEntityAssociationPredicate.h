/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePredicate.h>

@interface HDAssociationEntityAssociationPredicate : HDSQLitePredicate {

	long long _assocationID;

}
+(id)predicateWithAssociationID:(long long)arg1 ;
-(id)description;
-(id)SQLForEntityClass:(Class)arg1 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
-(void)bindToStatement:(sqlite3_stmtRef)arg1 bindingIndex:(int*)arg2 ;
@end

