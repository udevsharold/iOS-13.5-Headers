/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSDictionary, AASigningSession, ACAccount;

@interface AASetupAssistantSetupDelegatesRequest : AARequest {

	NSDictionary* setupParameters;
	AASigningSession* signingSession;
	ACAccount* _account;

}
+(Class)responseClass;
-(id)urlRequest;
-(id)urlString;
-(id)initWithAccount:(id)arg1 withSetupParameters:(id)arg2 signingSession:(id)arg3 ;
@end

