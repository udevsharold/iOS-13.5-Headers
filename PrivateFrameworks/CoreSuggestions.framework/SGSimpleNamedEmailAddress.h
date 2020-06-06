/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SGSimpleNamedEmailAddress : NSObject <NSCopying, NSSecureCoding> {

	NSString* _emailAddress;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)namedEmailAddressWithFieldValue:(id)arg1 ;
+(id)namedEmailAddressWithCSPerson:(id)arg1 ;
+(id)namedEmailAddressesWithFieldValues:(id)arg1 ;
+(id)namedEmailAddressesWithEmailToNameDictionary:(id)arg1 ;
+(id)emailToNameDictionaryWithNamedEmailAddresses:(id)arg1 ;
+(id)serializeAll:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)emailAddress;
-(id)serialized;
-(id)initWithName:(id)arg1 emailAddress:(id)arg2 ;
-(BOOL)isEqualToNamedEmailAddress:(id)arg1 ;
-(id)asCSPerson;
@end

