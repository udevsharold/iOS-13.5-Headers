/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNDonationExtensionLogger.h>

@protocol OS_os_log;
@class NSObject, NSString;

@interface _CNDonationExtensionLogger : NSObject <CNDonationExtensionLogger> {

	NSObject*<OS_os_log> _log_t;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> log_t;              //@synthesize log_t=_log_t - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_os_log>)log_t;
-(void)loadedDonorExtension:(id)arg1 forIdentifier:(id)arg2 ;
-(void)couldNotLoadDonorExtensionForIdentifier:(id)arg1 error:(id)arg2 ;
-(void)willRenewDonation:(id)arg1 ;
-(void)didRenewDonation:(id)arg1 untilDate:(id)arg2 ;
-(void)didExpireDonation:(id)arg1 withError:(id)arg2 ;
-(void)couldNotRenewDonation:(id)arg1 error:(id)arg2 ;
-(void)willRedonateValuesWithReason:(unsigned long long)arg1 ;
-(void)didRedonateValuesWithReason:(unsigned long long)arg1 ;
-(void)couldNotRedonateValuesWithReason:(unsigned long long)arg1 error:(id)arg2 ;
@end

