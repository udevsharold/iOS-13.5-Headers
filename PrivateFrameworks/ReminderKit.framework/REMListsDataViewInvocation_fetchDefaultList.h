/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface REMListsDataViewInvocation_fetchDefaultList : REMStoreInvocation <NSSecureCoding> {

	BOOL _keepDefaultOnly;

}

@property (nonatomic,readonly) BOOL keepDefaultOnly;              //@synthesize keepDefaultOnly=_keepDefaultOnly - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKeepDefaultOnly:(BOOL)arg1 ;
-(BOOL)keepDefaultOnly;
@end

