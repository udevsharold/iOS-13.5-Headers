/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDAppSubscriptionAppLaunchEntity : HDHealthEntity
+(long long)protectionClass;
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)tableAliases;
+(id)launchTimeForBundleID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)removeBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)setLaunchTime:(id)arg1 forBundleID:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)_predicateForBundleID:(id)arg1 ;
+(id)_launchTimesWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
@end
