/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ASDPurgeableApp : NSObject <NSCopying, NSSecureCoding> {

	BOOL _systemApp;
	NSString* _bundleID;
	NSString* _purgeableReason;
	long long _staticDiskUsage;
	NSNumber* _storeItemID;

}

@property (nonatomic,retain) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * purgeableReason;                       //@synthesize purgeableReason=_purgeableReason - In the implementation block
@property (assign,nonatomic) long long staticDiskUsage;                      //@synthesize staticDiskUsage=_staticDiskUsage - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemID;                           //@synthesize storeItemID=_storeItemID - In the implementation block
@property (assign,getter=isSystemApp,nonatomic) BOOL systemApp;              //@synthesize systemApp=_systemApp - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(long long)staticDiskUsage;
-(void)setBundleID:(NSString *)arg1 ;
-(NSNumber *)storeItemID;
-(void)setStoreItemID:(NSNumber *)arg1 ;
-(void)setSystemApp:(BOOL)arg1 ;
-(BOOL)isSystemApp;
-(NSString *)purgeableReason;
-(void)setPurgeableReason:(NSString *)arg1 ;
-(void)setStaticDiskUsage:(long long)arg1 ;
@end

