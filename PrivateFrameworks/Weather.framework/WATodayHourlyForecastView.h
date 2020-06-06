/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKitCore/UIView.h>

@class UIVisualEffectView, UILabel, UIImageView, NSArray, UIImage, NSAttributedString;

@interface WATodayHourlyForecastView : UIView {

	UIVisualEffectView* _temperatureLabelVisualEffectView;
	UIVisualEffectView* _timeLabelVisualEffectView;
	UILabel* _temperatureLabel;
	UILabel* _timeLabel;
	UIImageView* _conditionsImageView;
	NSArray* _constraints;

}

@property (nonatomic,retain) UIVisualEffectView * temperatureLabelVisualEffectView;              //@synthesize temperatureLabelVisualEffectView=_temperatureLabelVisualEffectView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * timeLabelVisualEffectView;                     //@synthesize timeLabelVisualEffectView=_timeLabelVisualEffectView - In the implementation block
@property (nonatomic,retain) UILabel * temperatureLabel;                                         //@synthesize temperatureLabel=_temperatureLabel - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                                //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) UIImageView * conditionsImageView;                                  //@synthesize conditionsImageView=_conditionsImageView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                              //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) UIImage * conditionsImage; 
@property (nonatomic,copy) NSAttributedString * temperature; 
@property (nonatomic,copy) NSAttributedString * time; 
-(NSArray *)constraints;
-(NSAttributedString *)time;
-(void)setTime:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(NSAttributedString *)temperature;
-(void)setTemperature:(NSAttributedString *)arg1 ;
-(void)_setupConstraints;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
-(void)setTemperatureLabel:(UILabel *)arg1 ;
-(UILabel *)temperatureLabel;
-(void)setTemperatureLabelVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)temperatureLabelVisualEffectView;
-(void)setTimeLabelVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)timeLabelVisualEffectView;
-(void)setConditionsImageView:(UIImageView *)arg1 ;
-(UIImageView *)conditionsImageView;
-(void)setConditionsImage:(UIImage *)arg1 ;
-(UIImage *)conditionsImage;
-(void)applyVibrancyToTimeWithEffect:(id)arg1 ;
@end

