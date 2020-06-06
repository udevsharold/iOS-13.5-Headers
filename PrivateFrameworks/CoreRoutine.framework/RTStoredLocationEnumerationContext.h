/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RTStoredLocationEnumerationOptions;

@interface RTStoredLocationEnumerationContext : NSObject <NSSecureCoding, NSCopying> {

	RTStoredLocationEnumerationOptions* _options;
	unsigned long long _offset;

}

@property (nonatomic,copy,readonly) RTStoredLocationEnumerationOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                                      //@synthesize offset=_offset - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RTStoredLocationEnumerationOptions *)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)offset;
-(id)initWithEnumerationOptions:(id)arg1 offset:(unsigned long long)arg2 ;
-(BOOL)isEqualToContext:(id)arg1 ;
-(id)initWithEnumerationOptions:(id)arg1 ;
@end

