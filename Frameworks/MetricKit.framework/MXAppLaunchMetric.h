/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricKit/MXMetric.h>

@class MXHistogram;

@interface MXAppLaunchMetric : MXMetric {

	MXHistogram* _histogrammedTimeToFirstDraw;
	MXHistogram* _histogrammedApplicationResumeTime;

}

@property (readonly) MXHistogram * histogrammedTimeToFirstDraw;                    //@synthesize histogrammedTimeToFirstDraw=_histogrammedTimeToFirstDraw - In the implementation block
@property (readonly) MXHistogram * histogrammedApplicationResumeTime;              //@synthesize histogrammedApplicationResumeTime=_histogrammedApplicationResumeTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithLaunchTimeData:(id)arg1 withResumeTimeData:(id)arg2 ;
-(MXHistogram *)histogrammedTimeToFirstDraw;
-(MXHistogram *)histogrammedApplicationResumeTime;
@end

