/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface CDPStateHandlerResult : NSObject {

	BOOL _cloudDataProtectionEnabled;
	BOOL _shouldCompleteSignIn;
	unsigned long long _peeriCloudKeychainState;
	NSError* _error;

}

@property (assign) BOOL cloudDataProtectionEnabled;                         //@synthesize cloudDataProtectionEnabled=_cloudDataProtectionEnabled - In the implementation block
@property (assign) BOOL shouldCompleteSignIn;                               //@synthesize shouldCompleteSignIn=_shouldCompleteSignIn - In the implementation block
@property (assign) unsigned long long peeriCloudKeychainState;              //@synthesize peeriCloudKeychainState=_peeriCloudKeychainState - In the implementation block
@property (retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
+(id)resultWithError:(id)arg1 ;
+(id)resultWithCloudDataProtectionEnabled:(BOOL)arg1 shouldCompleteSignIn:(BOOL)arg2 error:(id)arg3 ;
+(id)successResult;
+(id)resultWithCloudDataProtectionEnabled:(BOOL)arg1 shouldCompleteSignIn:(BOOL)arg2 peeriCloudKeychainState:(unsigned long long)arg3 error:(id)arg4 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)shouldCompleteSignIn;
-(BOOL)cloudDataProtectionEnabled;
-(unsigned long long)peeriCloudKeychainState;
-(void)setCloudDataProtectionEnabled:(BOOL)arg1 ;
-(void)setShouldCompleteSignIn:(BOOL)arg1 ;
-(void)setPeeriCloudKeychainState:(unsigned long long)arg1 ;
@end

