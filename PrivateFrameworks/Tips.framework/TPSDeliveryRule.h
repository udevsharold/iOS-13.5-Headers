/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tips/Tips-Structs.h>
#import <Tips/TPSDeliveryObject.h>

@class NSDate, NSString, NSArray;

@interface TPSDeliveryRule : TPSDeliveryObject {

	NSDate* _matchedDate;
	NSString* _identifier;
	NSArray* _eventIdentifiers;

}

@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * eventIdentifiers;              //@synthesize eventIdentifiers=_eventIdentifiers - In the implementation block
@property (nonatomic,copy) NSDate * matchedDate;                    //@synthesize matchedDate=_matchedDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
+(id)eventsForRuleDictionary:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSArray *)eventIdentifiers;
-(void)setEventIdentifiers:(NSArray *)arg1 ;
-(void)setMatchedDate:(NSDate *)arg1 ;
-(void)restartTracking;
-(NSDate *)matchedDate;
@end

