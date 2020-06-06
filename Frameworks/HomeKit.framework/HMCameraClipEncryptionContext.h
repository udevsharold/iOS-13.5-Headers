/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface HMCameraClipEncryptionContext : NSObject <NSCopying, NSSecureCoding> {

	NSData* _key;
	unsigned long long _scheme;

}

@property (copy,readonly) NSData * key;                      //@synthesize key=_key - In the implementation block
@property (readonly) unsigned long long scheme;              //@synthesize scheme=_scheme - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)scheme;
-(id)initWithKey:(id)arg1 scheme:(unsigned long long)arg2 ;
@end

