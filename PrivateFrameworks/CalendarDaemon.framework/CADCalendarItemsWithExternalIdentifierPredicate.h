/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADEventPredicate.h>
#import <libobjc.A.dylib/EKPredicateEvaluating.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CADCalendarItemsWithExternalIdentifierPredicate : CADEventPredicate <EKPredicateEvaluating, NSSecureCoding> {

	int _entityType;
	NSString* _externalIdentifier;

}

@property (nonatomic,readonly) NSString * externalIdentifier;              //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,readonly) int entityType;                             //@synthesize entityType=_entityType - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)ekPredicateEvaluateWithObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)predicateFormat;
-(NSString *)externalIdentifier;
-(id)initWithExternalIdentifier:(id)arg1 ;
-(int)entityType;
-(id)initWithExternalIdentifier:(id)arg1 entityType:(int)arg2 ;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
@end

