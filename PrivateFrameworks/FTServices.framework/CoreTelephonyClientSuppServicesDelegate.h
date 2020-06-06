/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreTelephonyClientSuppServicesDelegate <NSObject>
@optional
-(void)suppServicesEvent:(id)arg1 event:(int)arg2 settingsType:(int)arg3 data:(id)arg4;
-(void)spcUnlockSuccessful:(id)arg1;
-(void)phoneBookSelected:(id)arg1;
-(void)phoneBookFetched:(id)arg1;
-(void)phoneBookWritten:(id)arg1;
-(void)phoneBookError:(id)arg1;
-(void)phoneNumberAvailable:(id)arg1;
-(void)phoneNumberChanged:(id)arg1;
-(void)suppServicesStarted:(id)arg1;
-(void)suppServicesCompleted:(id)arg1;
-(void)suppServicesError:(id)arg1 error:(id)arg2;

@end

