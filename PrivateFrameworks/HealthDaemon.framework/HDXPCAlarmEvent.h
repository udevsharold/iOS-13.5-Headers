/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface HDXPCAlarmEvent : NSObject {

	BOOL _isUserVisible;
	NSString* _name;
	NSDate* _fireDate;

}

@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDate * fireDate;              //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,readonly) BOOL isUserVisible;                  //@synthesize isUserVisible=_isUserVisible - In the implementation block
+(id)_eventWithName:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSDate *)fireDate;
-(BOOL)isUserVisible;
-(id)initWithName:(id)arg1 fireDate:(id)arg2 isUserVisible:(BOOL)arg3 ;
@end

