/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFRequestAirPlayMirroringRequest : DMFTaskRequest {

	BOOL _force;
	NSString* _destinationName;
	NSString* _destinationDeviceID;
	NSString* _password;
	double _scanWaitInterval;

}

@property (nonatomic,copy) NSString * destinationName;                  //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,copy) NSString * destinationDeviceID;              //@synthesize destinationDeviceID=_destinationDeviceID - In the implementation block
@property (nonatomic,copy) NSString * password;                         //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL force;                                //@synthesize force=_force - In the implementation block
@property (assign,nonatomic) double scanWaitInterval;                   //@synthesize scanWaitInterval=_scanWaitInterval - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(BOOL)force;
-(void)setForce:(BOOL)arg1 ;
-(NSString *)destinationName;
-(void)setDestinationName:(NSString *)arg1 ;
-(NSString *)destinationDeviceID;
-(double)scanWaitInterval;
-(void)setDestinationDeviceID:(NSString *)arg1 ;
-(void)setScanWaitInterval:(double)arg1 ;
@end

