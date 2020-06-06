/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFAppRequest.h>

@class NSString, NSArray, NSDictionary;

@interface DMFMDMv1StartManagingAppRequest : DMFAppRequest {

	NSString* _originator;
	unsigned long long _managementOptions;
	NSString* _VPNUUIDString;
	NSArray* _associatedDomains;
	NSDictionary* _configuration;

}

@property (nonatomic,copy) NSString * originator;                               //@synthesize originator=_originator - In the implementation block
@property (assign,nonatomic) unsigned long long managementOptions;              //@synthesize managementOptions=_managementOptions - In the implementation block
@property (nonatomic,copy) NSString * VPNUUIDString;                            //@synthesize VPNUUIDString=_VPNUUIDString - In the implementation block
@property (nonatomic,copy) NSArray * associatedDomains;                         //@synthesize associatedDomains=_associatedDomains - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;                        //@synthesize configuration=_configuration - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
-(NSArray *)associatedDomains;
-(void)setOriginator:(NSString *)arg1 ;
-(NSString *)originator;
-(void)setAssociatedDomains:(NSArray *)arg1 ;
-(NSString *)VPNUUIDString;
-(void)setVPNUUIDString:(NSString *)arg1 ;
-(unsigned long long)managementOptions;
-(void)setManagementOptions:(unsigned long long)arg1 ;
@end

