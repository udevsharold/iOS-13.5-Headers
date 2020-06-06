/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthMenstrualCyclesDaemon/HealthMenstrualCyclesDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDMCNotification : NSObject <NSCopying> {

	long long _dayIndex;
	NSString* _category;

}

@property (nonatomic,readonly) long long dayIndex;                    //@synthesize dayIndex=_dayIndex - In the implementation block
@property (nonatomic,copy,readonly) NSString * category;              //@synthesize category=_category - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)category;
-(long long)dayIndex;
-(id)initWithDayIndex:(long long)arg1 category:(id)arg2 ;
@end

