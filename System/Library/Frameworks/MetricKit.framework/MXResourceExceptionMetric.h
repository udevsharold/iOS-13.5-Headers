/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricKit/MXMetric.h>

@interface MXResourceExceptionMetric : MXMetric {

	unsigned long long _cumulativeMemoryResourceExceptionCount;

}

@property (readonly) unsigned long long cumulativeMemoryResourceExceptionCount;              //@synthesize cumulativeMemoryResourceExceptionCount=_cumulativeMemoryResourceExceptionCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCumulativeMemoryResourceExceptionCount:(unsigned long long)arg1 ;
-(unsigned long long)cumulativeMemoryResourceExceptionCount;
@end

