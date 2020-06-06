/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/ATXNotificationsDatabase.h>
#import <libobjc.A.dylib/ATXPeriodicLoggerSource.h>

@class NSString;

@interface ATXAppLaunchLogger : ATXNotificationsDatabase <ATXPeriodicLoggerSource> {

	BOOL _enabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setEnabled:(BOOL)arg1 ;
-(id)_init;
-(long long)latestVersion;
-(id)getMetrics;
-(id)createCustomSchema;
-(void)logAppLaunchFrom:(unsigned long long)arg1 at:(id)arg2 ;
@end

