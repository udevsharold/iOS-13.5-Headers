/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface REMEventKitBridgingDataViewInvocation_fetchReminders : REMStoreInvocation <NSSecureCoding> {

	NSArray* _listIDs;

}

@property (nonatomic,readonly) NSArray * listIDs;              //@synthesize listIDs=_listIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithListIDs:(id)arg1 ;
-(NSArray *)listIDs;
@end

