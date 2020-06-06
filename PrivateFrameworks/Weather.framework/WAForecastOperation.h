/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class City, WFLocation, WACurrentForecast, WFAirQualityConditions, NSArray, NSDate, NSDictionary, NSError, WFWeatherConditions, WFDailyForecastRequest, WFHourlyForecastRequest, WFForecastRequest, WFAirQualityRequest, NSCalendar, NSLocale, NSString, NSData, WFServiceConnection, WAForecastModel;

@interface WAForecastOperation : NSOperation {

	BOOL _isDay;
	BOOL _shouldAttachRawAPIData;
	City* _city;
	WFLocation* _location;
	WACurrentForecast* _currentConditions;
	WFAirQualityConditions* _airQualityConditions;
	NSArray* _hourlyForecasts;
	NSArray* _dailyForecasts;
	NSDate* _sunrise;
	NSDate* _sunset;
	NSDictionary* _links;
	NSError* _error;
	WFWeatherConditions* _currentWeatherConditions;
	NSArray* _dailyForecastConditions;
	NSArray* _hourlyForecastConditions;
	WFDailyForecastRequest* _dailyForecastRequest;
	WFHourlyForecastRequest* _hourlyForecastRequest;
	WFForecastRequest* _todayForecastRequest;
	WFAirQualityRequest* _airQualityRequest;
	NSCalendar* _calendar;
	NSLocale* _locale;
	NSString* _trackingParameter;
	NSData* _rawAPIData;
	WFServiceConnection* _connection;

}

@property (nonatomic,retain) WFWeatherConditions * currentWeatherConditions;               //@synthesize currentWeatherConditions=_currentWeatherConditions - In the implementation block
@property (nonatomic,retain) WACurrentForecast * currentConditions;                        //@synthesize currentConditions=_currentConditions - In the implementation block
@property (nonatomic,retain) WFAirQualityConditions * airQualityConditions;                //@synthesize airQualityConditions=_airQualityConditions - In the implementation block
@property (nonatomic,retain) NSArray * dailyForecastConditions;                            //@synthesize dailyForecastConditions=_dailyForecastConditions - In the implementation block
@property (nonatomic,retain) NSArray * hourlyForecastConditions;                           //@synthesize hourlyForecastConditions=_hourlyForecastConditions - In the implementation block
@property (nonatomic,retain) NSArray * hourlyForecasts;                                    //@synthesize hourlyForecasts=_hourlyForecasts - In the implementation block
@property (nonatomic,retain) NSArray * dailyForecasts;                                     //@synthesize dailyForecasts=_dailyForecasts - In the implementation block
@property (nonatomic,retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSDate * sunset;                                              //@synthesize sunset=_sunset - In the implementation block
@property (nonatomic,retain) NSDate * sunrise;                                             //@synthesize sunrise=_sunrise - In the implementation block
@property (nonatomic,retain) WFLocation * location;                                        //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSDictionary * links;                                         //@synthesize links=_links - In the implementation block
@property (nonatomic,retain) WFDailyForecastRequest * dailyForecastRequest;                //@synthesize dailyForecastRequest=_dailyForecastRequest - In the implementation block
@property (nonatomic,retain) WFHourlyForecastRequest * hourlyForecastRequest;              //@synthesize hourlyForecastRequest=_hourlyForecastRequest - In the implementation block
@property (nonatomic,retain) WFForecastRequest * todayForecastRequest;                     //@synthesize todayForecastRequest=_todayForecastRequest - In the implementation block
@property (nonatomic,retain) WFAirQualityRequest * airQualityRequest;                      //@synthesize airQualityRequest=_airQualityRequest - In the implementation block
@property (assign,nonatomic) BOOL isDay;                                                   //@synthesize isDay=_isDay - In the implementation block
@property (nonatomic,retain) NSCalendar * calendar;                                        //@synthesize calendar=_calendar - In the implementation block
@property (retain) NSLocale * locale;                                                      //@synthesize locale=_locale - In the implementation block
@property (retain) NSString * trackingParameter;                                           //@synthesize trackingParameter=_trackingParameter - In the implementation block
@property (assign,nonatomic) BOOL shouldAttachRawAPIData;                                  //@synthesize shouldAttachRawAPIData=_shouldAttachRawAPIData - In the implementation block
@property (nonatomic,retain) NSData * rawAPIData;                                          //@synthesize rawAPIData=_rawAPIData - In the implementation block
@property (nonatomic,retain) City * city;                                                  //@synthesize city=_city - In the implementation block
@property (nonatomic,retain) WFServiceConnection * connection;                             //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) WAForecastModel * forecastModel; 
-(void)setLocale:(NSLocale *)arg1 ;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSLocale *)locale;
-(NSError *)error;
-(void)cancel;
-(void)main;
-(void)setError:(NSError *)arg1 ;
-(WFServiceConnection *)connection;
-(void)setConnection:(WFServiceConnection *)arg1 ;
-(WFLocation *)location;
-(City *)city;
-(void)_failWithError:(id)arg1 ;
-(void)setLocation:(WFLocation *)arg1 ;
-(NSDate *)sunrise;
-(NSDate *)sunset;
-(void)setCity:(City *)arg1 ;
-(NSDictionary *)links;
-(void)setLinks:(NSDictionary *)arg1 ;
-(WACurrentForecast *)currentConditions;
-(void)setSunrise:(NSDate *)arg1 ;
-(void)setSunset:(NSDate *)arg1 ;
-(void)setCurrentConditions:(WACurrentForecast *)arg1 ;
-(NSArray *)dailyForecasts;
-(void)setDailyForecasts:(NSArray *)arg1 ;
-(NSArray *)hourlyForecasts;
-(void)setHourlyForecasts:(NSArray *)arg1 ;
-(void)setAirQualityConditions:(WFAirQualityConditions *)arg1 ;
-(WAForecastModel *)forecastModel;
-(id)initWithLocation:(id)arg1 onConnection:(id)arg2 ;
-(WFAirQualityConditions *)airQualityConditions;
-(BOOL)isDay;
-(void)setIsDay:(BOOL)arg1 ;
-(BOOL)_needsGeolocation;
-(void)setCurrentWeatherConditions:(WFWeatherConditions *)arg1 ;
-(void)setDailyForecastConditions:(NSArray *)arg1 ;
-(WFWeatherConditions *)currentWeatherConditions;
-(void)setHourlyForecastConditions:(NSArray *)arg1 ;
-(void)setAirQualityRequest:(WFAirQualityRequest *)arg1 ;
-(WFAirQualityRequest *)airQualityRequest;
-(void)setTodayForecastRequest:(WFForecastRequest *)arg1 ;
-(WFForecastRequest *)todayForecastRequest;
-(NSString *)trackingParameter;
-(void)setTrackingParameter:(NSString *)arg1 ;
-(void)setDailyForecastRequest:(WFDailyForecastRequest *)arg1 ;
-(WFDailyForecastRequest *)dailyForecastRequest;
-(void)setHourlyForecastRequest:(WFHourlyForecastRequest *)arg1 ;
-(WFHourlyForecastRequest *)hourlyForecastRequest;
-(void)_determineSunriseAndSunset;
-(void)_mapReferralLinks;
-(BOOL)shouldAttachRawAPIData;
-(NSData *)rawAPIData;
-(void)setRawAPIData:(NSData *)arg1 ;
-(NSArray *)dailyForecastConditions;
-(NSArray *)hourlyForecastConditions;
-(id)initWithCity:(id)arg1 onConnection:(id)arg2 ;
-(void)setShouldAttachRawAPIData:(BOOL)arg1 ;
@end

