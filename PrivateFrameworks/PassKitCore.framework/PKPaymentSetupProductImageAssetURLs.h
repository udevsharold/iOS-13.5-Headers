/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface PKPaymentSetupProductImageAssetURLs : NSObject <NSCopying> {

	NSURL* _digitalCardImageUrl;
	NSURL* _thumbnailImageUrl;
	NSURL* _logoImageUrl;

}

@property (nonatomic,readonly) NSURL * digitalCardImageUrl;              //@synthesize digitalCardImageUrl=_digitalCardImageUrl - In the implementation block
@property (nonatomic,readonly) NSURL * thumbnailImageUrl;                //@synthesize thumbnailImageUrl=_thumbnailImageUrl - In the implementation block
@property (nonatomic,readonly) NSURL * logoImageUrl;                     //@synthesize logoImageUrl=_logoImageUrl - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithImageAssetsDictionary:(id)arg1 ;
-(NSURL *)digitalCardImageUrl;
-(NSURL *)thumbnailImageUrl;
-(NSURL *)logoImageUrl;
@end

