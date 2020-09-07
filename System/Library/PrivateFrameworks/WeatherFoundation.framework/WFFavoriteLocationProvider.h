/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFFavoriteLocationProvider <NSObject>
@property (assign,nonatomic,__weak) id<WFFavoriteLocationProviderDelegate> delegate; 
@optional
-(id)migrationOperation;

@required
-(id<WFFavoriteLocationProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setLocations:(id)arg1;
-(id)locations;
-(void)addLocation:(id)arg1;
-(id)initWithDelegate:(id)arg1 persistence:(id)arg2;
-(void)removeLocation:(id)arg1;

@end
