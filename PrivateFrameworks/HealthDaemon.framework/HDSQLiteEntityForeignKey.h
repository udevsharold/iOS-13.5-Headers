/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HDSQLiteEntityForeignKey : NSObject {

	Class _entityClass;
	NSString* _property;
	long long _deletionAction;

}

@property (nonatomic,readonly) Class entityClass;                     //@synthesize entityClass=_entityClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) long long deletionAction;              //@synthesize deletionAction=_deletionAction - In the implementation block
-(NSString *)property;
-(Class)entityClass;
-(id)creationSQL;
-(long long)deletionAction;
-(id)initWithEntityClass:(Class)arg1 property:(id)arg2 deletionAction:(long long)arg3 ;
@end

