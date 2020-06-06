/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MTAlarmIntentHandler.h>
#import <libobjc.A.dylib/MTEnableAlarmIntentHandling.h>
#import <libobjc.A.dylib/MTDisableAlarmIntentHandling.h>
#import <libobjc.A.dylib/MTToggleAlarmIntentHandling.h>

@class NSString;

@interface MTToggleAlarmIntentHandler : MTAlarmIntentHandler <MTEnableAlarmIntentHandling, MTDisableAlarmIntentHandling, MTToggleAlarmIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_alarmUserActivityWithEnableIntent:(id)arg1 ;
-(id)_alarmUserActivityWithDisableIntent:(id)arg1 ;
-(void)_toggleAlarm:(id)arg1 alarmIDString:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)getEnableStateForAlarm:(id)arg1 ;
-(id)updateEnableStateForAlarm:(id)arg1 enabled:(BOOL)arg2 ;
-(void)confirmEnableAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleEnableAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmDisableAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleDisableAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleToggleAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveOperationForToggleAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveStateForToggleAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveAlarmForToggleAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)provideAlarmOptionsForToggleAlarm:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmToggleAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmMTEnableAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleMTEnableAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)confirmMTDisableAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleMTDisableAlarm:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

