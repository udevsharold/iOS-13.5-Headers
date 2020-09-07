/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface MBFileInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isDirectory;
	NSString* _path;
	long long _priority;
	NSDictionary* _extendedAttributes;

}

@property (nonatomic,copy) NSString * path;                                //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) BOOL isDirectory;                             //@synthesize isDirectory=_isDirectory - In the implementation block
@property (assign,nonatomic) long long priority;                           //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy) NSDictionary * extendedAttributes;              //@synthesize extendedAttributes=_extendedAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fileInfoWithPath:(id)arg1 extendedAttributes:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)path;
-(BOOL)isDirectory;
-(void)setPath:(NSString *)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(NSDictionary *)extendedAttributes;
-(void)setIsDirectory:(BOOL)arg1 ;
-(void)setExtendedAttributes:(NSDictionary *)arg1 ;
-(id)initWithPath:(id)arg1 extendedAttributes:(id)arg2 ;
@end
