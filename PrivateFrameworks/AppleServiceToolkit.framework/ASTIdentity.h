/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleServiceToolkit/AppleServiceToolkit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface ASTIdentity : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _aliases;
	NSArray* _json;
	NSString* _hostAppVersion;
	NSString* _hostAppBuild;

}

@property (nonatomic,readonly) NSString * userAgent; 
@property (nonatomic,retain) NSArray * aliases;                      //@synthesize aliases=_aliases - In the implementation block
@property (nonatomic,retain) NSArray * json;                         //@synthesize json=_json - In the implementation block
@property (nonatomic,retain) NSString * hostAppVersion;              //@synthesize hostAppVersion=_hostAppVersion - In the implementation block
@property (nonatomic,retain) NSString * hostAppBuild;                //@synthesize hostAppBuild=_hostAppBuild - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identityWithIdentityAliases:(id)arg1 ;
+(id)identityWithSerialNumber:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)userAgent;
-(NSArray *)aliases;
-(void)setAliases:(NSArray *)arg1 ;
-(NSArray *)json;
-(void)setJson:(NSArray *)arg1 ;
-(NSString *)hostAppBuild;
-(NSString *)hostAppVersion;
-(id)initWithIdentityAliases:(id)arg1 ;
-(id)_dictionariesFromIdentityAliases:(id)arg1 ;
-(void)setHostAppVersion:(NSString *)arg1 ;
-(void)setHostAppBuild:(NSString *)arg1 ;
@end

