/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface CLSEKSharee : NSObject <NSCoding> {

	BOOL _isCurrentUserForSharing;
	BOOL _isCurrentUserForScheduling;
	NSString* _emailAddress;
	NSString* _name;
	NSString* _UUID;

}

@property (readonly) NSString * UUID;                              //@synthesize UUID=_UUID - In the implementation block
@property (readonly) NSString * emailAddress;                      //@synthesize emailAddress=_emailAddress - In the implementation block
@property (readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (readonly) BOOL isCurrentUserForSharing;                 //@synthesize isCurrentUserForSharing=_isCurrentUserForSharing - In the implementation block
@property (readonly) BOOL isCurrentUserForScheduling;              //@synthesize isCurrentUserForScheduling=_isCurrentUserForScheduling - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)UUID;
-(NSString *)emailAddress;
-(id)initWithEKSharee:(id)arg1 ;
-(BOOL)isCurrentUserForSharing;
-(BOOL)isCurrentUserForScheduling;
@end

