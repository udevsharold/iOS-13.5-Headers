/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CalLocationManager : NSObject
+(void)_loadMapKit;
+(id)currentLocationWithCompletionBlock:(/*^block*/id)arg1 ;
+(BOOL)isCurrentProcessEntitledToUseLocationServices;
+(id)placemarkForLocation:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
+(id)placemarkForAddress:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
+(id)strictGeocodeString:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end

