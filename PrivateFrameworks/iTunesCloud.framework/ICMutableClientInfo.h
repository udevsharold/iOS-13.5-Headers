/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/ICClientInfo.h>

@class NSString;

@interface ICMutableClientInfo : ICClientInfo

@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,copy) NSString * processName; 
@property (nonatomic,copy) NSString * clientIdentifier; 
@property (nonatomic,copy) NSString * clientVersion; 
@property (nonatomic,copy) NSString * requestingBundleIdentifier; 
@property (nonatomic,copy) NSString * requestingBundleVersion; 
@property (nonatomic,copy) NSString * bagProfile; 
@property (nonatomic,copy) NSString * bagProfileVersion; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProcessName:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setClientVersion:(NSString *)arg1 ;
-(void)setRequestingBundleIdentifier:(NSString *)arg1 ;
-(void)setRequestingBundleVersion:(NSString *)arg1 ;
-(void)setBagProfileVersion:(NSString *)arg1 ;
-(void)setBagProfile:(NSString *)arg1 ;
@end

