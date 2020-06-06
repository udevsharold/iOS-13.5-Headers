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

@interface RMModelStatusAccountGoogle : RMModelStatusBase {

	NSString* _statusIdentifier;
	NSString* _statusDescription;
	NSString* _statusUsername;
	NSNumber* _statusAuthenticated;
	NSNumber* _statusIsMailEnabled;
	NSNumber* _statusAreCalendarsEnabled;
	NSNumber* _statusAreContactsEnabled;
	NSNumber* _statusAreNotesEnabled;

}

@property (nonatomic,copy) NSString * statusIdentifier;                       //@synthesize statusIdentifier=_statusIdentifier - In the implementation block
@property (nonatomic,copy) NSString * statusDescription;                      //@synthesize statusDescription=_statusDescription - In the implementation block
@property (nonatomic,copy) NSString * statusUsername;                         //@synthesize statusUsername=_statusUsername - In the implementation block
@property (nonatomic,copy) NSNumber * statusAuthenticated;                    //@synthesize statusAuthenticated=_statusAuthenticated - In the implementation block
@property (nonatomic,copy) NSNumber * statusIsMailEnabled;                    //@synthesize statusIsMailEnabled=_statusIsMailEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusAreCalendarsEnabled;              //@synthesize statusAreCalendarsEnabled=_statusAreCalendarsEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusAreContactsEnabled;               //@synthesize statusAreContactsEnabled=_statusAreContactsEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * statusAreNotesEnabled;                  //@synthesize statusAreNotesEnabled=_statusAreNotesEnabled - In the implementation block
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedStatusKeys;
+(id)buildWithIdentifier:(id)arg1 description:(id)arg2 username:(id)arg3 authenticated:(id)arg4 isMailEnabled:(id)arg5 areCalendarsEnabled:(id)arg6 areContactsEnabled:(id)arg7 areNotesEnabled:(id)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)statusDescription;
-(void)setStatusDescription:(NSString *)arg1 ;
-(void)setStatusIdentifier:(NSString *)arg1 ;
-(NSString *)statusIdentifier;
-(BOOL)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setStatusUsername:(NSString *)arg1 ;
-(void)setStatusAuthenticated:(NSNumber *)arg1 ;
-(void)setStatusAreCalendarsEnabled:(NSNumber *)arg1 ;
-(NSString *)statusUsername;
-(NSNumber *)statusAuthenticated;
-(NSNumber *)statusAreCalendarsEnabled;
-(void)setStatusIsMailEnabled:(NSNumber *)arg1 ;
-(void)setStatusAreContactsEnabled:(NSNumber *)arg1 ;
-(void)setStatusAreNotesEnabled:(NSNumber *)arg1 ;
-(NSNumber *)statusIsMailEnabled;
-(NSNumber *)statusAreContactsEnabled;
-(NSNumber *)statusAreNotesEnabled;
@end

