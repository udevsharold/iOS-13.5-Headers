/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageLegacy/MessageLegacy-Structs.h>
#import <EmailCore/ECSASLAuthenticator.h>

@interface _MFNTLMAuthenticator : ECSASLAuthenticator {

	NtlmGeneratorRef _ntlmGeneratorRef;
	int _ntlmError;

}
-(void)dealloc;
-(id)responseForServerData:(id)arg1 ;
-(void)setAuthenticationState:(long long)arg1 ;
@end
