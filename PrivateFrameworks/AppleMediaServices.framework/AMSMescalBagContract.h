/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AMSBagValue;


@protocol AMSMescalBagContract <AMSURLBagContract>
@property (nonatomic,readonly) AMSBagValue * mescalCertificateURL; 
@property (nonatomic,readonly) AMSBagValue * mescalSetupURL; 
@property (nonatomic,readonly) AMSBagValue * mescalPrimingURL; 
@property (nonatomic,readonly) AMSBagValue * mescalSignedActions; 
@property (nonatomic,readonly) AMSBagValue * mescalSignSapRequests; 
@property (nonatomic,readonly) AMSBagValue * mescalSignSapResponses; 
@optional
-(AMSBagValue *)mescalPrimingURL;
-(AMSBagValue *)mescalSignedActions;
-(AMSBagValue *)mescalSignSapRequests;
-(AMSBagValue *)mescalSignSapResponses;

@required
-(AMSBagValue *)mescalCertificateURL;
-(AMSBagValue *)mescalSetupURL;

@end
