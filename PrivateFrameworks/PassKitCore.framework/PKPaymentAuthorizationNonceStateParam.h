/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSData, PKAuthenticatorEvaluationResponse;

@interface PKPaymentAuthorizationNonceStateParam : PKPaymentAuthorizationStateParam {

	NSData* _credential;
	PKAuthenticatorEvaluationResponse* _evaluationResponse;

}

@property (nonatomic,retain) NSData * credential;                                                 //@synthesize credential=_credential - In the implementation block
@property (nonatomic,retain) PKAuthenticatorEvaluationResponse * evaluationResponse;              //@synthesize evaluationResponse=_evaluationResponse - In the implementation block
+(id)paramWithCredential:(id)arg1 ;
+(id)paramWithAuthenticatorEvaluationResponse:(id)arg1 ;
-(id)description;
-(NSData *)credential;
-(void)setCredential:(NSData *)arg1 ;
-(PKAuthenticatorEvaluationResponse *)evaluationResponse;
-(void)setEvaluationResponse:(PKAuthenticatorEvaluationResponse *)arg1 ;
@end

