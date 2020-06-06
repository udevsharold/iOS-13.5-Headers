/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SFSignInAnalytics, OTControl, CKKSControl;

@interface OTConfigurationContext : NSObject {

	NSString* _context;
	NSString* _dsid;
	NSString* _altDSID;
	SFSignInAnalytics* _analytics;
	NSString* _authenticationAppleID;
	NSString* _passwordEquivalentToken;
	OTControl* _otControl;
	CKKSControl* _ckksControl;
	id _sbd;

}

@property (nonatomic,copy) NSString * context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * dsid;                                 //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                              //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) SFSignInAnalytics * analytics;                 //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,copy) NSString * authenticationAppleID;                //@synthesize authenticationAppleID=_authenticationAppleID - In the implementation block
@property (nonatomic,copy) NSString * passwordEquivalentToken;              //@synthesize passwordEquivalentToken=_passwordEquivalentToken - In the implementation block
@property (retain) OTControl * otControl;                                   //@synthesize otControl=_otControl - In the implementation block
@property (retain) CKKSControl * ckksControl;                               //@synthesize ckksControl=_ckksControl - In the implementation block
@property (retain) id sbd;                                                  //@synthesize sbd=_sbd - In the implementation block
-(id)init;
-(NSString *)context;
-(id)makeOTControl:(id*)arg1 ;
-(id)makeCKKSControl:(id*)arg1 ;
-(void)setContext:(NSString *)arg1 ;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(SFSignInAnalytics *)analytics;
-(void)setAnalytics:(SFSignInAnalytics *)arg1 ;
-(NSString *)authenticationAppleID;
-(void)setAuthenticationAppleID:(NSString *)arg1 ;
-(NSString *)passwordEquivalentToken;
-(void)setPasswordEquivalentToken:(NSString *)arg1 ;
-(OTControl *)otControl;
-(void)setOtControl:(OTControl *)arg1 ;
-(CKKSControl *)ckksControl;
-(void)setCkksControl:(CKKSControl *)arg1 ;
-(id)sbd;
-(void)setSbd:(id)arg1 ;
@end

