/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ILMessageFilterQueryRequest : NSObject <NSSecureCoding> {

	NSString* _sender;
	NSString* _messageBody;
	NSString* _extensionIdentifier;

}

@property (nonatomic,copy,readonly) NSString * extensionIdentifier;              //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sender;                                    //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSString * messageBody;                               //@synthesize messageBody=_messageBody - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sender;
-(void)setSender:(NSString *)arg1 ;
-(NSString *)messageBody;
-(void)setMessageBody:(NSString *)arg1 ;
-(NSString *)extensionIdentifier;
-(id)initWithExtensionIdentifier:(id)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
@end

