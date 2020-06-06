/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSString;

@interface ASDPostPurchaseIntentBulletinRequestOptions : ASDRequestOptions {

	NSString* _appBundleId;
	NSString* _appName;
	NSString* _iapName;

}

@property (nonatomic,copy) NSString * appBundleId;              //@synthesize appBundleId=_appBundleId - In the implementation block
@property (nonatomic,copy) NSString * appName;                  //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy) NSString * iapName;                  //@synthesize iapName=_iapName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)iapName;
-(void)setIapName:(NSString *)arg1 ;
@end

