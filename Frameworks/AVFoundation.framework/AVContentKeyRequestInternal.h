/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVContentKeySession, AVContentKeyReportGroup, NSData, NSDictionary, NSError, NSString;

@interface AVContentKeyRequestInternal : NSObject {

	AVContentKeySession* session;
	AVContentKeyReportGroup* reportGroup;
	id identifier;
	NSData* keyIDFromInitializationData;
	NSData* initializationData;
	long long status;
	int responseInfoSent;
	BOOL providesPersistableKey;
	NSDictionary* preloadingRequestOptions;
	OpaqueFigCPECryptorRef figCryptor;
	NSError* error;
	CFDictionaryRef requestInfo;
	unsigned long long customURLRequestID;
	OpaqueFigCustomURLHandlerRef customURLHandler;
	BOOL isRenewalRequest;
	NSString* cryptorUUID;
	unsigned long long cryptorKeyRequestID;
	OpaqueFigSimpleMutexRef stateMutex;

}
@end

