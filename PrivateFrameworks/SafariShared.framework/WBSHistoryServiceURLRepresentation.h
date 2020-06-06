/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface WBSHistoryServiceURLRepresentation : NSObject <NSSecureCoding, NSCopying> {

	NSString* _urlString;
	NSData* _urlHash;
	NSData* _urlSalt;

}

@property (nonatomic,copy,readonly) NSString * urlString;              //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,copy,readonly) NSData * urlHash;                  //@synthesize urlHash=_urlHash - In the implementation block
@property (nonatomic,copy,readonly) NSData * urlSalt;                  //@synthesize urlSalt=_urlSalt - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)urlString;
-(id)initWithURLString:(id)arg1 ;
-(NSData *)urlHash;
-(NSData *)urlSalt;
-(id)initWithURLHash:(id)arg1 salt:(id)arg2 ;
@end

