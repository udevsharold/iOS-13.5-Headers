/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@interface EKPersistentRecurrenceRule : EKPersistentObject
+(id)relations;
+(id)defaultPropertiesToLoad;
+(Class)meltedClass;
+(Class)alternateUniverseClass;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)setOwner:(id)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(id)specifier;
-(long long)interval;
-(void)setInterval:(long long)arg1 ;
-(id)endDate;
-(id)UUID;
-(void)setUUID:(id)arg1 ;
-(id)owner;
-(void)setEndDate:(id)arg1 ;
-(int)frequency;
-(void)setFrequency:(int)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(int)entityType;
-(long long)firstDayOfTheWeek;
-(void)setFirstDayOfTheWeek:(long long)arg1 ;
-(id)cachedEndDate;
@end

