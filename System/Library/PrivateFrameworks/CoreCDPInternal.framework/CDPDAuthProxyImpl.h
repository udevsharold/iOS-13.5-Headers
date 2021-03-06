/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPDAuthProviderInternal.h>

@class NSString;

@interface CDPDAuthProxyImpl : NSObject <CDPDAuthProviderInternal>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_authContextFromCDPContext:(id)arg1 ;
-(void)cdpContext:(id)arg1 persistMasterKeyVerifier:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

