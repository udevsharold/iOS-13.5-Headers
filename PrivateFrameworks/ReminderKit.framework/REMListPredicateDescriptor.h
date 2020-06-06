/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMObjectID, NSArray;

@interface REMListPredicateDescriptor : NSObject <NSSecureCoding> {

	long long _type;
	REMObjectID* _accountID;
	REMObjectID* _parentListID;
	NSArray* _objectIDs;

}

@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) REMObjectID * accountID;                 //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) REMObjectID * parentListID;              //@synthesize parentListID=_parentListID - In the implementation block
@property (nonatomic,retain) NSArray * objectIDs;                     //@synthesize objectIDs=_objectIDs - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateDescriptorForAllLists;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(REMObjectID *)accountID;
-(void)setAccountID:(REMObjectID *)arg1 ;
-(NSArray *)objectIDs;
-(REMObjectID *)parentListID;
-(void)setParentListID:(REMObjectID *)arg1 ;
-(void)setObjectIDs:(NSArray *)arg1 ;
@end

