/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TCSBehavior : NSObject {

	int _firstUnlockToken;
	BOOL _isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
	BOOL _isAppleInternalInstall;
	BOOL _isM8Device;
	NSString* _regionCode;

}

@property (nonatomic,readonly) BOOL isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;              //@synthesize isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot=_isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot - In the implementation block
@property (nonatomic,readonly) BOOL isAppleInternalInstall;                                       //@synthesize isAppleInternalInstall=_isAppleInternalInstall - In the implementation block
@property (nonatomic,readonly) BOOL isM8Device;                                                   //@synthesize isM8Device=_isM8Device - In the implementation block
@property (nonatomic,readonly) NSString * regionCode;                                             //@synthesize regionCode=_regionCode - In the implementation block
+(id)regionCode;
+(id)_regionCode;
+(BOOL)isAppleInternalInstall;
+(BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+(id)sharedBehavior;
+(BOOL)_isAppleInternalInstall;
+(BOOL)_isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+(BOOL)_isM8Device;
+(BOOL)isM8Device;
-(id)init;
-(void)dealloc;
-(NSString *)regionCode;
-(BOOL)isAppleInternalInstall;
-(BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
-(void)_handleDeviceFirstUnlock;
-(BOOL)isM8Device;
@end

