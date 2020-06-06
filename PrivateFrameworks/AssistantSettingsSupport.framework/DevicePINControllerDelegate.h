/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DevicePINControllerDelegate <NSObject>
@optional
-(void)devicePINControllerDidDismissPINPane:(id)arg1;
-(void)devicePINController:(id)arg1 didFailToSetPinWithError:(id)arg2;
-(void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
-(void)didAcceptSetPIN;
-(void)devicePINController:(id)arg1 didFailToChangePinWithError:(id)arg2;
-(void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
-(void)didAcceptChangedPIN;
-(void)willAcceptEnteredPIN;
-(void)didAcceptEnteredPIN:(id)arg1;
-(void)didAcceptEnteredPIN;
-(void)didAcceptRemovePIN;
-(void)devicePINController:(id)arg1 shouldAcceptPIN:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)showWeakWarningAlertForController:(id)arg1 offerUseAnyway:(BOOL)arg2 withCompletion:(/*^block*/id)arg3;
-(void)willCancelEnteringPIN;
-(void)didCancelEnteringPIN;

@end

