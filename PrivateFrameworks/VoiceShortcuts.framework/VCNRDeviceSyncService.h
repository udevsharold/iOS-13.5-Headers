/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/VCShortcutSyncService.h>

@class NSString, NSURL, VCCompanionSyncService;

@interface VCNRDeviceSyncService : NSObject <NSCopying, VCShortcutSyncService> {

	NSString* _syncServiceIdentifier;
	NSURL* _directoryURL;
	long long _protocolVersion;
	VCCompanionSyncService* _service;

}

@property (nonatomic,__weak,readonly) VCCompanionSyncService * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) long long protocolVersion;                            //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * syncServiceIdentifier;                //@synthesize syncServiceIdentifier=_syncServiceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * directoryURL;                            //@synthesize directoryURL=_directoryURL - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(VCCompanionSyncService *)service;
-(NSURL *)directoryURL;
-(long long)protocolVersion;
-(void)requestSync;
-(void)requestFullResync;
-(id)initWithCompanionSyncService:(id)arg1 device:(id)arg2 ;
-(NSString *)syncServiceIdentifier;
@end

