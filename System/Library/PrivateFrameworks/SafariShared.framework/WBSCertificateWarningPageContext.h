/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface WBSCertificateWarningPageContext : NSObject <NSSecureCoding> {

	NSString* _expiredCertificateDescription;
	BOOL _canGoBack;
	NSURL* _failingURL;
	long long _warningCategory;
	long long _numberOfDaysInvalid;
	double _clockSkew;

}

@property (nonatomic,readonly) NSURL * failingURL;                                  //@synthesize failingURL=_failingURL - In the implementation block
@property (nonatomic,readonly) long long warningCategory;                           //@synthesize warningCategory=_warningCategory - In the implementation block
@property (nonatomic,readonly) BOOL canGoBack;                                      //@synthesize canGoBack=_canGoBack - In the implementation block
@property (nonatomic,readonly) long long numberOfDaysInvalid;                       //@synthesize numberOfDaysInvalid=_numberOfDaysInvalid - In the implementation block
@property (nonatomic,readonly) NSString * expiredCerticateDescription; 
@property (nonatomic,readonly) double clockSkew;                                    //@synthesize clockSkew=_clockSkew - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)certificateWarningCannotBeBypassedForTrust:(SecTrustRef)arg1 ;
+(long long)certificateWarningCategoryForError:(id)arg1 trustIncludesRevokedCertificate:(BOOL)arg2 clockSkew:(double)arg3 ;
+(long long)numberOfDaysBetweenCertificateValidityRangeAndNow:(id)arg1 ;
+(id)permanentAcceptanceConfirmationTitle;
+(id)permanentAcceptanceConfirmationDescription;
+(id)permanentAcceptanceConfirmationButtonTitle;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)canGoBack;
-(NSURL *)failingURL;
-(id)initWithWarningCategory:(long long)arg1 failingURL:(id)arg2 numberOfDaysInvalid:(long long)arg3 canGoBack:(BOOL)arg4 clockSkew:(double)arg5 ;
-(long long)warningCategory;
-(long long)numberOfDaysInvalid;
-(NSString *)expiredCerticateDescription;
-(double)clockSkew;
@end
