/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKAnisetteServiceProtocol <NSObject>
@optional
-(void)fetchPeerAttestationDataForRequest:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(void)provisionAnisetteWithCompletion:(/*^block*/id)arg1;
-(void)syncAnisetteWithSIMData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)eraseAnisetteWithCompletion:(/*^block*/id)arg1;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;
-(void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

