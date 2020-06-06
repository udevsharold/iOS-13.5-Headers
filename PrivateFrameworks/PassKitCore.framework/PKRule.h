/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSPredicate, PKOSVersionRequirementRange;

@interface PKRule : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSPredicate* _predicate;
	PKOSVersionRequirementRange* _osVersionRequirementRange;
	NSString* _predicateFormat;

}

@property (nonatomic,retain) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * predicateFormat;                                           //@synthesize predicateFormat=_predicateFormat - In the implementation block
@property (nonatomic,retain) PKOSVersionRequirementRange * osVersionRequirementRange;              //@synthesize osVersionRequirementRange=_osVersionRequirementRange - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicate;                                            //@synthesize predicate=_predicate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(NSPredicate *)predicate;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)predicateFormat;
-(id)initWithIdentifier:(id)arg1 predicateFormat:(id)arg2 osVersionRequirementRange:(id)arg3 ;
-(void)parsePredicateFormat;
-(PKOSVersionRequirementRange *)osVersionRequirementRange;
-(void)setOsVersionRequirementRange:(PKOSVersionRequirementRange *)arg1 ;
-(void)setPredicateFormat:(NSString *)arg1 ;
@end

