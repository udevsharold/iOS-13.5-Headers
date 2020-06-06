/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/CLKComplicationTemplateGraphicCircular.h>

@class CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularOpenGaugeSimpleText : CLKComplicationTemplateGraphicCircular {

	CLKGaugeProvider* _gaugeProvider;
	CLKTextProvider* _bottomTextProvider;
	CLKTextProvider* _centerTextProvider;

}

@property (nonatomic,copy) CLKGaugeProvider * gaugeProvider;                  //@synthesize gaugeProvider=_gaugeProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * bottomTextProvider;              //@synthesize bottomTextProvider=_bottomTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * centerTextProvider;              //@synthesize centerTextProvider=_centerTextProvider - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(CLKGaugeProvider *)gaugeProvider;
-(void)setGaugeProvider:(CLKGaugeProvider *)arg1 ;
-(CLKTextProvider *)centerTextProvider;
-(void)setCenterTextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)bottomTextProvider;
-(void)setBottomTextProvider:(CLKTextProvider *)arg1 ;
@end

