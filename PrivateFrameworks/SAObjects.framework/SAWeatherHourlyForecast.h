/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAWeatherForecast.h>

@class NSNumber;

@interface SAWeatherHourlyForecast : SAWeatherForecast

@property (nonatomic,copy) NSNumber * temperature; 
+(id)hourlyForecast;
+(id)hourlyForecastWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)temperature;
-(void)setTemperature:(NSNumber *)arg1 ;
-(id)encodedClassName;
@end

