/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor;

@interface HKLineSeriesPointMarkerStyle : NSObject {

	UIColor* _pointColor;
	double _radius;
	long long _pointMarkerStyle;

}

@property (nonatomic,retain) UIColor * pointColor;                    //@synthesize pointColor=_pointColor - In the implementation block
@property (assign,nonatomic) double radius;                           //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) long long pointMarkerStyle;              //@synthesize pointMarkerStyle=_pointMarkerStyle - In the implementation block
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(long long)pointMarkerStyle;
-(void)setPointMarkerStyle:(long long)arg1 ;
-(id)initWithColor:(id)arg1 radius:(double)arg2 style:(long long)arg3 ;
-(UIColor *)pointColor;
-(void)setPointColor:(UIColor *)arg1 ;
@end

