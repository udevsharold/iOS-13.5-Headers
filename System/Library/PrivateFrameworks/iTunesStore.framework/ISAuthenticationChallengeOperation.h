/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISDialogOperation.h>

@class ISAuthenticationChallenge, NSURLCredential;

@interface ISAuthenticationChallengeOperation : ISDialogOperation {

	ISAuthenticationChallenge* _challenge;
	NSURLCredential* _credential;

}

@property (retain) NSURLCredential * credential;                       //@synthesize credential=_credential - In the implementation block
@property (retain) ISAuthenticationChallenge * challenge;              //@synthesize challenge=_challenge - In the implementation block
+(id)operationWithChallenge:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(ISAuthenticationChallenge *)challenge;
-(NSURLCredential *)credential;
-(void)setCredential:(NSURLCredential *)arg1 ;
-(void)setChallenge:(ISAuthenticationChallenge *)arg1 ;
-(void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2 ;
-(id)_copyCredentialForSignInResponseDictionary:(id)arg1 ;
@end

