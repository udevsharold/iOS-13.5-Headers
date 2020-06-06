/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKGraphSeriesBlockCoordinate;
@interface HKGraphSeriesVisibleBlockCoordinates : NSObject {

	id<HKGraphSeriesBlockCoordinate> _minimum;
	id<HKGraphSeriesBlockCoordinate> _maximum;
	id<HKGraphSeriesBlockCoordinate> _last;

}

@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinate> minimum;              //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinate> maximum;              //@synthesize maximum=_maximum - In the implementation block
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinate> last;                 //@synthesize last=_last - In the implementation block
-(id<HKGraphSeriesBlockCoordinate>)minimum;
-(id<HKGraphSeriesBlockCoordinate>)maximum;
-(id<HKGraphSeriesBlockCoordinate>)last;
-(id)initWithMinimum:(id)arg1 maximum:(id)arg2 last:(id)arg3 ;
@end

