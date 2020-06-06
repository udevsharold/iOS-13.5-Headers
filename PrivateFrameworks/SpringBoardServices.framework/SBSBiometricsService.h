/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSBiometricsService : SBSAbstractSystemService
-(void)fetchUnlockCredentialSetWithCompletion:(/*^block*/id)arg1 ;
-(void)_acquireBiometricAssertionOfType:(unsigned char)arg1 assertionName:(id)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)acquireUnlockSuppressionAssertionForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)acquireWalletPreArmSuppressionAssertionForReason:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

