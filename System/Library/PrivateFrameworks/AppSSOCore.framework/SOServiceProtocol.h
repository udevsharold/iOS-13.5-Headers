/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SOServiceProtocol <NSObject>
@required
-(void)configurationWithCompletion:(/*^block*/id)arg1;
-(void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelAuthorizationWithCompletion:(/*^block*/id)arg1;
-(void)debugHintsWithCompletion:(/*^block*/id)arg1;
-(void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(/*^block*/id)arg3;
-(void)performAuthorizationWithRequestParameters:(id)arg1 completion:(/*^block*/id)arg2;
-(void)realmsWithCompletion:(/*^block*/id)arg1;
-(void)isExtensionProcessWithAuditToken:(SCD_Struct_SO0)arg1 completion:(/*^block*/id)arg2;

@end
