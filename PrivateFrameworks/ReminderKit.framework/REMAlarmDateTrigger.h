/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/REMAlarmTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateComponents;

@interface REMAlarmDateTrigger : REMAlarmTrigger <NSSecureCoding> {

	NSDateComponents* _dateComponents;

}

@property (nonatomic,copy) NSDateComponents * dateComponents;              //@synthesize dateComponents=_dateComponents - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDateComponents *)dateComponents;
-(void)setDateComponents:(NSDateComponents *)arg1 ;
-(id)_deepCopy;
-(id)initWithDateComponents:(id)arg1 ;
-(BOOL)isTemporal;
-(id)initWithObjectID:(id)arg1 dateComponents:(id)arg2 ;
@end

