/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDateInterval;

@interface RTStoredVisitFetchOptions : NSObject <NSSecureCoding> {

	BOOL _ascending;
	NSNumber* _confidence;
	NSDateInterval* _dateInterval;
	NSNumber* _limit;

}

@property (nonatomic,readonly) BOOL ascending;                         //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,readonly) NSNumber * confidence;                  //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,copy) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) NSNumber * limit;                       //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)ascending;
-(NSNumber *)confidence;
-(NSNumber *)limit;
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(id)initWithAscending:(BOOL)arg1 confidence:(id)arg2 dateInterval:(id)arg3 limit:(id)arg4 ;
-(BOOL)isEqualToFetchOptions:(id)arg1 ;
@end

