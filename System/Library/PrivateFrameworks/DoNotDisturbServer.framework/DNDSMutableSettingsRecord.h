/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/DNDSSettingsRecord.h>

@class DNDSBehaviorSettingsRecord, DNDSBypassSettingsRecord, DNDSScheduleSettingsRecord;

@interface DNDSMutableSettingsRecord : DNDSSettingsRecord

@property (nonatomic,copy) DNDSBehaviorSettingsRecord * behaviorSettings; 
@property (nonatomic,copy) DNDSBypassSettingsRecord * phoneCallBypassSettings; 
@property (nonatomic,copy) DNDSScheduleSettingsRecord * scheduleSettings; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBehaviorSettings:(DNDSBehaviorSettingsRecord *)arg1 ;
-(void)setPhoneCallBypassSettings:(DNDSBypassSettingsRecord *)arg1 ;
-(void)setScheduleSettings:(DNDSScheduleSettingsRecord *)arg1 ;
@end

