/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, NSURL, NSError, SSLookupRequest;

@interface HKLookUpAppPrivacyPolicyURLOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	NSString* _bundleIdentifier;
	NSURL* _privacyPolicyURL;
	NSError* _error;
	SSLookupRequest* _lookupRequest;

}

@property (getter=isExecuting) BOOL executing; 
@property (getter=isFinished) BOOL finished; 
@property (copy) NSURL * privacyPolicyURL;                                    //@synthesize privacyPolicyURL=_privacyPolicyURL - In the implementation block
@property (copy) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (retain) SSLookupRequest * lookupRequest;                           //@synthesize lookupRequest=_lookupRequest - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(NSError *)error;
-(void)cancel;
-(NSString *)bundleIdentifier;
-(void)start;
-(void)setError:(NSError *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setExecuting:(BOOL)arg1 ;
-(NSURL *)privacyPolicyURL;
-(SSLookupRequest *)lookupRequest;
-(void)setLookupRequest:(SSLookupRequest *)arg1 ;
-(id)_privacyPolicyURLFromLookupResult:(id)arg1 lookupError:(id)arg2 error:(id*)arg3 ;
-(void)setPrivacyPolicyURL:(NSURL *)arg1 ;
-(void)_performLookup;
@end

