/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSReportItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLSAggregatedValue : CLSReportItem <NSSecureCoding, NSCopying> {

	int _aggregateType;
	double _value;
	long long _totalSampleCount;

}

@property (assign,nonatomic) double value;                            //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) long long totalSampleCount;              //@synthesize totalSampleCount=_totalSampleCount - In the implementation block
@property (nonatomic,readonly) double normalized; 
@property (assign,nonatomic) int aggregateType;                       //@synthesize aggregateType=_aggregateType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)value;
-(void)setValue:(double)arg1 ;
-(id)dictionaryRepresentation;
-(void)add:(id)arg1 ;
-(long long)totalSampleCount;
-(void)setTotalSampleCount:(long long)arg1 ;
-(int)aggregateType;
-(void)setAggregateType:(int)arg1 ;
-(double)normalized;
-(void)scalarMultiply:(double)arg1 ;
@end

