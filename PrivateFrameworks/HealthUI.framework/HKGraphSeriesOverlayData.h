/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthUI/HealthUI-Structs.h>
@class HKGraphSeries, HKGraphSeriesBlockCoordinateList;

@interface HKGraphSeriesOverlayData : NSObject {

	HKGraphSeries* _graphSeries;
	HKGraphSeriesBlockCoordinateList* _graphSeriesCoordinates;
	CGRect _graphSeriesScreenRect;
	CGAffineTransform _graphSeriesPointTransform;

}

@property (nonatomic,readonly) HKGraphSeries * graphSeries;                                            //@synthesize graphSeries=_graphSeries - In the implementation block
@property (nonatomic,readonly) CGRect graphSeriesScreenRect;                                           //@synthesize graphSeriesScreenRect=_graphSeriesScreenRect - In the implementation block
@property (nonatomic,readonly) HKGraphSeriesBlockCoordinateList * graphSeriesCoordinates;              //@synthesize graphSeriesCoordinates=_graphSeriesCoordinates - In the implementation block
@property (nonatomic,readonly) CGAffineTransform graphSeriesPointTransform;                            //@synthesize graphSeriesPointTransform=_graphSeriesPointTransform - In the implementation block
-(id)initWithGraphSeries:(id)arg1 graphSeriesScreenRect:(CGRect)arg2 graphSeriesCoordinates:(id)arg3 graphSeriesPointTransform:(CGAffineTransform)arg4 ;
-(HKGraphSeries *)graphSeries;
-(CGRect)graphSeriesScreenRect;
-(HKGraphSeriesBlockCoordinateList *)graphSeriesCoordinates;
-(CGAffineTransform)graphSeriesPointTransform;
@end

