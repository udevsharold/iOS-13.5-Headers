/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DECDeviceState : NSObject
+(BOOL)isClassCLocked;
+(BOOL)isUnlocked;
+(BOOL)isDemoModeEnabled;
+(void)blockUntilFirstUnlock;
+(void)registerBlockForFirstUnlock:(/*^block*/id)arg1 ;
+(void)registerBlockForFirstUnlock:(/*^block*/id)arg1 executeIfUnlocked:(BOOL)arg2 ;
@end

