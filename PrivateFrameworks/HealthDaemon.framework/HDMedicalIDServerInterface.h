/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDMedicalIDServerInterface <NSObject>
@required
-(void)remote_fetchMedicalIDWithCompletion:(/*^block*/id)arg1;
-(void)remote_medicalIDDataCreateIfNecessary:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)remote_medicalIDEmergencyContactsWithCompletion:(/*^block*/id)arg1;
-(void)remote_updateMedicalIDData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_deleteMedicalIDDataWithCompletion:(/*^block*/id)arg1;

@end

