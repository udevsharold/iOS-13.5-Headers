/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PHCloudIdentifier : NSObject <NSSecureCoding> {

	NSString* _localCloudIdentifier;
	NSString* _identifierCode;

}

@property (nonatomic,readonly) NSString * localCloudIdentifier;              //@synthesize localCloudIdentifier=_localCloudIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * identifierCode;                    //@synthesize identifierCode=_identifierCode - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
+(BOOL)supportsSecureCoding;
+(id)notFoundIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithStringValue:(id)arg1 ;
-(NSString *)identifierCode;
-(id)initWithLocalCloudIdentifier:(id)arg1 identifierCode:(id)arg2 ;
-(id)initAsNotFoundIdentifier;
-(NSString *)localCloudIdentifier;
@end
