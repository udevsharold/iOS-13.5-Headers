/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCProfile.h>

@class NSString, NSArray, NSData;

@interface MCProfileServiceProfile : MCProfile {

	NSString* _URLString;
	NSArray* _deviceAttributes;
	id _challenge;
	NSData* _enrollmentIdentityPersistentID;
	BOOL _confirmInstallation;
	BOOL _supportedServerVersion;
	NSArray* _bogusPayloads;

}

@property (nonatomic,retain) NSString * URLString;                                 //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,retain) NSData * enrollmentIdentityPersistentID;              //@synthesize enrollmentIdentityPersistentID=_enrollmentIdentityPersistentID - In the implementation block
@property (nonatomic,retain,readonly) NSArray * deviceAttributes;                  //@synthesize deviceAttributes=_deviceAttributes - In the implementation block
@property (nonatomic,retain,readonly) id challenge;                                //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,readonly) BOOL confirmInstallation;                           //@synthesize confirmInstallation=_confirmInstallation - In the implementation block
@property (nonatomic,readonly) BOOL supportedServerVersion;                        //@synthesize supportedServerVersion=_supportedServerVersion - In the implementation block
-(id)description;
-(id)stubDictionary;
-(id)payloads;
-(id)initWithDictionary:(id)arg1 signerCerts:(id)arg2 allowEmptyPayload:(BOOL)arg3 outError:(id*)arg4 ;
-(id)managedPayloads;
-(id)localizedPayloadSummaryByType;
-(id)localizedManagedPayloadSummaryByType;
-(id)_badDataTypeErrorWithFieldName:(id)arg1 ;
-(id)_unsupportedValueErrorWithFieldName:(id)arg1 value:(id)arg2 ;
-(NSString *)URLString;
-(void)setURLString:(NSString *)arg1 ;
-(NSArray *)deviceAttributes;
-(id)challenge;
-(NSData *)enrollmentIdentityPersistentID;
-(void)setEnrollmentIdentityPersistentID:(NSData *)arg1 ;
-(BOOL)confirmInstallation;
-(BOOL)supportedServerVersion;
@end

