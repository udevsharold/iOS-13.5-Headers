/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSNumber, NSString;

@interface HKHeartbeatSequencePoint : NSObject <HKChartPoint> {

	NSNumber* _xValue;
	NSNumber* _yValue;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;

}

@property (nonatomic,readonly) NSNumber * xValue;                                          //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,readonly) NSNumber * yValue;                                          //@synthesize yValue=_yValue - In the implementation block
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(id)minYValue;
-(id)maxYValue;
-(NSNumber *)xValue;
-(NSNumber *)yValue;
-(id)xValueAsGenericType;
-(id)allYValues;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 beatsPerMinute:(double)arg2 ;
@end

