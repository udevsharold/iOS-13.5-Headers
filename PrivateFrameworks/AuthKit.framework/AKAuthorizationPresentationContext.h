/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSNumber, AKCredentialRequestContext, AKUserInformation, NSArray;

@interface AKAuthorizationPresentationContext : NSObject <NSSecureCoding> {

	NSString* _bundleID;
	NSString* _localizedAppName;
	NSString* _informativeText;
	NSString* _iconName;
	NSData* _iconData;
	NSNumber* _iconScale;
	AKCredentialRequestContext* _credentialRequestContext;
	AKUserInformation* _userInformation;
	NSArray* _loginChoices;

}

@property (nonatomic,copy) NSString * bundleID;                                                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedAppName;                                 //@synthesize localizedAppName=_localizedAppName - In the implementation block
@property (nonatomic,copy,readonly) NSString * informativeText;                                  //@synthesize informativeText=_informativeText - In the implementation block
@property (nonatomic,copy,readonly) NSString * iconName;                                         //@synthesize iconName=_iconName - In the implementation block
@property (nonatomic,copy,readonly) NSData * iconData;                                           //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * iconScale;                                        //@synthesize iconScale=_iconScale - In the implementation block
@property (nonatomic,retain) AKCredentialRequestContext * credentialRequestContext;              //@synthesize credentialRequestContext=_credentialRequestContext - In the implementation block
@property (nonatomic,retain) AKUserInformation * userInformation;                                //@synthesize userInformation=_userInformation - In the implementation block
@property (nonatomic,copy) NSArray * loginChoices;                                               //@synthesize loginChoices=_loginChoices - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSData *)iconData;
-(NSString *)localizedAppName;
-(NSNumber *)iconScale;
-(NSString *)iconName;
-(AKUserInformation *)userInformation;
-(void)setUserInformation:(AKUserInformation *)arg1 ;
-(void)_addPresenterParameters;
-(void)_addPresentationParametersForContext:(id)arg1 ;
-(id)initWithContext:(id)arg1 bundleID:(id)arg2 ;
-(NSString *)informativeText;
-(AKCredentialRequestContext *)credentialRequestContext;
-(void)setCredentialRequestContext:(AKCredentialRequestContext *)arg1 ;
-(NSArray *)loginChoices;
-(void)setLoginChoices:(NSArray *)arg1 ;
@end

