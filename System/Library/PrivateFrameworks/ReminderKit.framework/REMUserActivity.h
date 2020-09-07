/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface REMUserActivity : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSData* _storage;

}

@property (nonatomic,readonly) long long type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSData * storage;              //@synthesize storage=_storage - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)dataFromUserActivity:(id)arg1 ;
+(id)stringForActivityType:(long long)arg1 ;
+(void)userActivityWithUserActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)userActivityWithDictionaryData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(NSData *)storage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)userActivity;
-(id)userActivityData;
-(id)initWithUserActivity:(id)arg1 ;
-(id)initWithUniversalLink:(id)arg1 ;
-(id)initWithUserActivityData:(id)arg1 ;
-(id)universalLink;
-(id)initWithType:(long long)arg1 storage:(id)arg2 ;
-(id)debugDescriptionDetails;
-(id)siriIntent;
-(id)initWithSiriIntent:(id)arg1 ;
-(id)archivedDictionaryData;
@end
