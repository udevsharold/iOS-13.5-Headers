/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface WFAttribution : NSObject

@property (readonly) NSString * sourceName; 
@property (readonly) NSString * localizedSourceAttribution; 
@property (readonly) NSURL * sourceAttributionURL; 
+(id)platformSpecializedWeatherSourceAttributionURLForTrafficParameter:(id)arg1 ;
+(id)weatherSourceAttributionURLForTrafficParameter:(id)arg1 ;
+(id)sharedAttribution;
-(NSString *)sourceName;
-(NSURL *)sourceAttributionURL;
-(NSString *)localizedSourceAttribution;
-(id)sourceAttributionImageForStyle:(unsigned long long)arg1 ;
@end

