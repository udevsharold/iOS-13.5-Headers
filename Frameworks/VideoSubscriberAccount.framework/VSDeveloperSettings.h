/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface VSDeveloperSettings : NSObject <NSSecureCoding> {

	BOOL _isInSetTopBoxMode;
	BOOL _cacheBusterEnabled;
	BOOL _requestTimeoutsDisabled;
	BOOL _simulateExpiredToken;
	BOOL _setTopBoxUseDeviceProfile;
	BOOL _setTopBoxSupportsOptOut;
	NSString* _setTopBoxBundleIdentifier;
	NSString* _setTopBoxUserToken;
	NSString* _setTopBoxIdentityProviderID;

}

@property (assign,nonatomic) BOOL isInSetTopBoxMode;                            //@synthesize isInSetTopBoxMode=_isInSetTopBoxMode - In the implementation block
@property (assign,nonatomic) BOOL cacheBusterEnabled;                           //@synthesize cacheBusterEnabled=_cacheBusterEnabled - In the implementation block
@property (assign,nonatomic) BOOL requestTimeoutsDisabled;                      //@synthesize requestTimeoutsDisabled=_requestTimeoutsDisabled - In the implementation block
@property (assign,nonatomic) BOOL simulateExpiredToken;                         //@synthesize simulateExpiredToken=_simulateExpiredToken - In the implementation block
@property (nonatomic,copy) NSString * setTopBoxBundleIdentifier;                //@synthesize setTopBoxBundleIdentifier=_setTopBoxBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * setTopBoxUserToken;                       //@synthesize setTopBoxUserToken=_setTopBoxUserToken - In the implementation block
@property (nonatomic,copy) NSString * setTopBoxIdentityProviderID;              //@synthesize setTopBoxIdentityProviderID=_setTopBoxIdentityProviderID - In the implementation block
@property (assign,nonatomic) BOOL setTopBoxUseDeviceProfile;                    //@synthesize setTopBoxUseDeviceProfile=_setTopBoxUseDeviceProfile - In the implementation block
@property (assign,nonatomic) BOOL setTopBoxSupportsOptOut;                      //@synthesize setTopBoxSupportsOptOut=_setTopBoxSupportsOptOut - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDefaults;
-(BOOL)simulateExpiredToken;
-(void)setIsInSetTopBoxMode:(BOOL)arg1 ;
-(void)setCacheBusterEnabled:(BOOL)arg1 ;
-(void)setRequestTimeoutsDisabled:(BOOL)arg1 ;
-(void)setSimulateExpiredToken:(BOOL)arg1 ;
-(void)setSetTopBoxBundleIdentifier:(NSString *)arg1 ;
-(void)setSetTopBoxUserToken:(NSString *)arg1 ;
-(void)setSetTopBoxIdentityProviderID:(NSString *)arg1 ;
-(void)setSetTopBoxUseDeviceProfile:(BOOL)arg1 ;
-(void)setSetTopBoxSupportsOptOut:(BOOL)arg1 ;
-(BOOL)isInSetTopBoxMode;
-(BOOL)cacheBusterEnabled;
-(BOOL)requestTimeoutsDisabled;
-(NSString *)setTopBoxBundleIdentifier;
-(NSString *)setTopBoxUserToken;
-(NSString *)setTopBoxIdentityProviderID;
-(BOOL)setTopBoxUseDeviceProfile;
-(BOOL)setTopBoxSupportsOptOut;
@end

