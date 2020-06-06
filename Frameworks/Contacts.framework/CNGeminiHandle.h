/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNGeminiHandle : NSObject <NSSecureCoding> {

	long long _handleType;
	NSString* _stringValue;

}

@property (nonatomic,readonly) long long handleType;                     //@synthesize handleType=_handleType - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithString:(id)arg1 type:(long long)arg2 ;
-(long long)handleType;
@end

