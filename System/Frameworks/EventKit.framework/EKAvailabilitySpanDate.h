/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface EKAvailabilitySpanDate : NSObject {

	NSDate* _spanDate;
	long long _dateType;
	long long _spanType;

}

@property (nonatomic,retain) NSDate * spanDate;              //@synthesize spanDate=_spanDate - In the implementation block
@property (assign) long long dateType;                       //@synthesize dateType=_dateType - In the implementation block
@property (assign) long long spanType;                       //@synthesize spanType=_spanType - In the implementation block
+(unsigned)valueForSpanType:(long long)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(long long)spanType;
-(NSDate *)spanDate;
-(long long)dateType;
-(id)initWithDate:(id)arg1 dateType:(long long)arg2 spanType:(long long)arg3 ;
-(void)setSpanDate:(NSDate *)arg1 ;
-(void)setDateType:(long long)arg1 ;
-(void)setSpanType:(long long)arg1 ;
@end
