/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPRecoveryKeyValidator <NSObject>
@required
-(void)confirmRecoveryKey:(id)arg1 completion:(/*^block*/id)arg2;
-(void)generateRecoveryKey:(/*^block*/id)arg1;
-(id)generateRecoveryKeyWithError:(id*)arg1;
-(BOOL)confirmRecoveryKey:(id)arg1 error:(id*)arg2;

@end

