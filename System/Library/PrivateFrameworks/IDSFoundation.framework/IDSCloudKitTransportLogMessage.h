/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, ENGroupID, IDSDestinationPushToken, NSData;

@interface IDSCloudKitTransportLogMessage : NSObject {

	NSDictionary* _payload;
	NSString* _secondaryID;
	NSString* _deviceID;
	NSString* _encryptionType;

}

@property (nonatomic,retain) NSDictionary * payload;                               //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) NSString * secondaryID;                               //@synthesize secondaryID=_secondaryID - In the implementation block
@property (nonatomic,retain) NSString * deviceID;                                  //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSString * encryptionType;                            //@synthesize encryptionType=_encryptionType - In the implementation block
@property (nonatomic,readonly) ENGroupID * groupID; 
@property (nonatomic,readonly) NSString * recipientAlias; 
@property (nonatomic,readonly) NSString * senderAlias; 
@property (nonatomic,readonly) IDSDestinationPushToken * destination; 
@property (nonatomic,readonly) NSData * encryptedPayload; 
@property (nonatomic,readonly) NSString * cypherIdentifier; 
-(IDSDestinationPushToken *)destination;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(ENGroupID *)groupID;
-(void)setPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)payload;
-(NSString *)encryptionType;
-(void)setEncryptionType:(NSString *)arg1 ;
-(NSString *)recipientAlias;
-(NSData *)encryptedPayload;
-(NSString *)cypherIdentifier;
-(NSString *)senderAlias;
-(void)setSecondaryID:(NSString *)arg1 ;
-(NSString *)secondaryID;
@end
