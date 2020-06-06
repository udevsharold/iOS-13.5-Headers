/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <KeychainCircle/KeychainCircle-Structs.h>
@class NSString;

@interface KCSRPContext : NSObject {

	ccsrp_ctx* _context;
	ccrng_state* _rng;
	NSString* _user;

}

@property (assign) ccsrp_ctx* context;              //@synthesize context=_context - In the implementation block
@property (assign) ccrng_state* rng;                //@synthesize rng=_rng - In the implementation block
@property (retain) NSString * user;                 //@synthesize user=_user - In the implementation block
+(id)createWithUser:(id)arg1 digestInfo:(const ccdigest_info*)arg2 group:(ccdh_gp*)arg3 randomSource:(ccrng_state*)arg4 ;
-(void)finalize;
-(NSString *)user;
-(ccsrp_ctx*)context;
-(void)setUser:(NSString *)arg1 ;
-(void)setContext:(ccsrp_ctx*)arg1 ;
-(BOOL)isAuthenticated;
-(id)dataForPassword:(id)arg1 ;
-(const char*)userNameString;
-(id)initWithUser:(id)arg1 digestInfo:(const ccdigest_info*)arg2 group:(ccdh_gp*)arg3 randomSource:(ccrng_state*)arg4 ;
-(id)getKey;
-(ccrng_state*)rng;
-(void)setRng:(ccrng_state*)arg1 ;
@end

