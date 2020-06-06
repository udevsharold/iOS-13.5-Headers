/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface HMFKey : HMFObject <NSSecureCoding, NSCopying> {

	NSString* _type;
	NSData* _data;
	unsigned long long _size;

}

@property (readonly) unsigned long long size;              //@synthesize size=_size - In the implementation block
@property (copy,readonly) NSString * type;                 //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSData * data;                   //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(unsigned long long)size;
-(BOOL)isEqualToData:(id)arg1 ;
-(id)shortDescription;
-(id)initWithType:(id)arg1 size:(unsigned long long)arg2 data:(id)arg3 ;
@end

