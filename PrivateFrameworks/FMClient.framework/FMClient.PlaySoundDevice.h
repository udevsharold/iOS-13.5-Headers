/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMClient.PlaySoundDevice : NSObject <NSSecureCoding> {

	 serverId;
	 locality;
	 safetyWarningConfirmed;

}

@property (readonly,nonatomic) NSString * serverId; 
@property (readonly,nonatomic) NSString * locality; 
@property (readonly,nonatomic) BOOL safetyWarningConfirmed; 
@property (readonly,nonatomic) NSString * debugDescription; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
+(id)PlaySoundDeviceLocalityLocal;
+(id)PlaySoundDeviceLocalityRemote;
+(id)PlaySoundDeviceLocalityUnknown;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)locality;
-(NSString *)serverId;
-(BOOL)safetyWarningConfirmed;
-(id)initWithServerId:(id)arg1 locality:(id)arg2 safetyWarningConfirmed:(BOOL)arg3 ;
@end

