/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BKSEventFocusDeferralProperties : NSObject <NSSecureCoding> {

	int _pid;
	unsigned _contextID;
	NSString* _clientID;
	NSString* _displayUUID;

}

@property (nonatomic,copy,readonly) NSString * clientID;                 //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) int pid;                                  //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayUUID;              //@synthesize displayUUID=_displayUUID - In the implementation block
@property (nonatomic,readonly) unsigned contextID;                       //@synthesize contextID=_contextID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)propertiesWithMainDisplayAndClientID:(id)arg1 pid:(int)arg2 contextID:(unsigned)arg3 ;
+(id)propertiesWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned)arg4 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)contextID;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(NSString *)clientID;
-(id)initWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned)arg4 ;
-(id)conciseDescription;
-(BOOL)isEqualNotIncludingClientIDAndPid:(id)arg1 ;
-(id)propertiesOneLevelMoreGeneric;
-(NSString *)displayUUID;
@end

