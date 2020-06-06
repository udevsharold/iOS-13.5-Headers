/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FPDExtensionSessionProtocol <NSObject>
@property (assign,nonatomic) BOOL hasFileProviderPresenceTCCAccess; 
@required
-(void)invalidate;
-(void)start;
-(void)dumpStateTo:(id)arg1;
-(id)newFileProviderProxyWithPID:(int)arg1;
-(id)newFileProviderProxyWithoutPID;
-(id)newFileProviderProxyWithoutPIDWithTimeout:(BOOL)arg1;
-(void)asyncUnregisterLifetimeExtensionForObject:(id)arg1;
-(void)registerLifetimeExtensionForObject:(id)arg1;
-(void)unregisterLifetimeExtensionForObject:(id)arg1;
-(id)newFileProviderProxyWithTimeout:(BOOL)arg1 pid:(int)arg2;
-(id)existingFileProviderProxyWithTimeout:(BOOL)arg1 pid:(int)arg2;
-(BOOL)hasFileProviderPresenceTCCAccess;
-(void)updatePresenceTCCWithAuditToken:(SCD_Struct_FP2)arg1;
-(void)setHasFileProviderPresenceTCCAccess:(BOOL)arg1;

@end

