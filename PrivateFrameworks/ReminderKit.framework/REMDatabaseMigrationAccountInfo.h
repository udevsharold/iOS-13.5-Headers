/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface REMDatabaseMigrationAccountInfo : NSObject {

	NSString* _identifier;
	NSString* _name;
	long long _type;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                     //@synthesize type=_type - In the implementation block
-(NSString *)name;
-(long long)type;
-(NSString *)identifier;
-(id)initWithAccountType:(long long)arg1 identifier:(id)arg2 name:(id)arg3 ;
@end

