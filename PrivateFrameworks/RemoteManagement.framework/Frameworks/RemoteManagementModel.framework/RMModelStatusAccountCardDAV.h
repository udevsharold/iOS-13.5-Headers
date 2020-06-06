/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementModel/RemoteManagementModel-Structs.h>
#import <RemoteManagementModel/RMModelStatusBase.h>

@class NSString, NSNumber;

@interface RMModelStatusAccountCardDAV : RMModelStatusBase {

	NSString* _statusIdentifier;
	NSString* _statusDescription;
	NSString* _statusHostname;
	NSNumber* _statusPort;
	NSString* _statusUsername;
	NSNumber* _statusAuthenticated;

}

@property (nonatomic,copy) NSString * statusIdentifier;                 //@synthesize statusIdentifier=_statusIdentifier - In the implementation block
@property (nonatomic,copy) NSString * statusDescription;                //@synthesize statusDescription=_statusDescription - In the implementation block
@property (nonatomic,copy) NSString * statusHostname;                   //@synthesize statusHostname=_statusHostname - In the implementation block
@property (nonatomic,copy) NSNumber * statusPort;                       //@synthesize statusPort=_statusPort - In the implementation block
@property (nonatomic,copy) NSString * statusUsername;                   //@synthesize statusUsername=_statusUsername - In the implementation block
@property (nonatomic,copy) NSNumber * statusAuthenticated;              //@synthesize statusAuthenticated=_statusAuthenticated - In the implementation block
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedStatusKeys;
+(id)buildWithIdentifier:(id)arg1 description:(id)arg2 hostname:(id)arg3 port:(id)arg4 username:(id)arg5 authenticated:(id)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)statusDescription;
-(void)setStatusDescription:(NSString *)arg1 ;
-(void)setStatusIdentifier:(NSString *)arg1 ;
-(NSString *)statusIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setStatusHostname:(NSString *)arg1 ;
-(void)setStatusPort:(NSNumber *)arg1 ;
-(void)setStatusUsername:(NSString *)arg1 ;
-(void)setStatusAuthenticated:(NSNumber *)arg1 ;
-(NSString *)statusHostname;
-(NSNumber *)statusPort;
-(NSString *)statusUsername;
-(NSNumber *)statusAuthenticated;
@end

