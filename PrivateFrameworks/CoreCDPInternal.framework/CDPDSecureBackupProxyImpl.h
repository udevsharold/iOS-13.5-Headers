/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPDSecureBackupProxy.h>

@class CDPContext, NSString;

@interface CDPDSecureBackupProxyImpl : NSObject <CDPDSecureBackupProxy> {

	CDPContext* _cdpContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CDPContext * cdpContext;               //@synthesize cdpContext=_cdpContext - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(void)recoverWithInfo:(id)arg1 completionBlockWithResults:(/*^block*/id)arg2 ;
-(void)disableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)enableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(CDPContext *)cdpContext;
-(void)getAccountInfoWithInfo:(id)arg1 completionBlockWithResults:(/*^block*/id)arg2 ;
-(id)_secureBackup;
-(id)accountInfoWithInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)disableWithInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)enableWithInfo:(id)arg1 error:(id*)arg2 ;
-(id)recoverWithInfo:(id)arg1 error:(id*)arg2 ;
-(void)cacheRecoveryKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)uncacheAllSecrets;
-(void)setCdpContext:(CDPContext *)arg1 ;
@end

