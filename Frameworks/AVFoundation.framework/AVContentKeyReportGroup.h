/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSData, NSMutableArray, NSObject, NSString;

@interface AVContentKeyReportGroup : NSObject {

	AVWeakReference* _contentKeySessionWeakReference;
	OpaqueFigContentKeySessionRef _figContentKeySession;
	NSData* _protectorSessionIdentifier;
	NSMutableArray* _cryptorsList;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSString* _keySystem;
	BOOL _isExpired;

}

@property (readonly) NSData * contentProtectionSessionIdentifier; 
-(void)dealloc;
-(NSData *)contentProtectionSessionIdentifier;
-(void)processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3 ;
-(void)expire;
-(const OpaqueFigContentKeySessionRef)_figContentKeySession;
-(const OpaqueFigCPECryptorRef)createCryptorIfNecessaryForIdentifier:(id)arg1 initializationData:(id)arg2 formatDescription:(opaqueCMFormatDescriptionRef)arg3 hlsMethod:(id)arg4 error:(id*)arg5 ;
-(int)configureAppIdentifier:(id)arg1 ;
-(void)createProtectorSessionIdentifierIfNecessary;
-(BOOL)_setAuthorizationToken:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)initWithKeySystem:(id)arg1 keySession:(id)arg2 storageDirectoryAtURL:(id)arg3 ;
-(BOOL)hasProtector;
-(const OpaqueFigCPECryptorRef)copyCryptorForIdentifier:(id)arg1 initializationData:(id)arg2 ;
-(OpaqueFigCPECryptorRef)copyCryptorForCryptKeyAttributes:(id)arg1 ;
-(id)_contentKeySession;
-(void)failProcessingContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 error:(id)arg3 ;
-(id)_extractCryptKeyIdentifiersFromInitializationData:(id)arg1 ;
-(id)_processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3 ;
-(id)cryptorOptionsForIdentifier:(id)arg1 initializationData:(id)arg2 formatDescription:(opaqueCMFormatDescriptionRef)arg3 hlsMethod:(id)arg4 ;
-(BOOL)associateContentKeyRequest:(id)arg1 ;
@end

