/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BLTAbstractIDSService.h>

@class NSString, NSMutableDictionary, NSMutableArray, BLTPBProtobufSequenceNumberManager;

@interface BLTTestIDSService : NSObject <BLTAbstractIDSService> {

	NSString* _service;
	NSMutableDictionary* _actionsByRequestType;
	NSMutableDictionary* _actionsByResponseType;
	NSMutableArray* _delegates;
	unsigned long long _currentIdentifier;
	BLTPBProtobufSequenceNumberManager* _sequenceNumberManager;
	unsigned long long _minimumSendDelay;
	unsigned long long _maximumSendDelay;
	unsigned long long _minimumResponseDelay;
	unsigned long long _maximumResponseDelay;

}

@property (nonatomic,readonly) id<BLTAbstractIDSDevice> defaultPairedDevice; 
@property (assign,nonatomic) unsigned long long minimumSendDelay;                         //@synthesize minimumSendDelay=_minimumSendDelay - In the implementation block
@property (assign,nonatomic) unsigned long long maximumSendDelay;                         //@synthesize maximumSendDelay=_maximumSendDelay - In the implementation block
@property (assign,nonatomic) unsigned long long minimumResponseDelay;                     //@synthesize minimumResponseDelay=_minimumResponseDelay - In the implementation block
@property (assign,nonatomic) unsigned long long maximumResponseDelay;                     //@synthesize maximumResponseDelay=_maximumResponseDelay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(id)initWithService:(id)arg1 ;
-(BOOL)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2 ;
-(void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2 ;
-(BOOL)sendResourceAtURL:(id)arg1 metadata:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7 ;
-(id<BLTAbstractIDSDevice>)defaultPairedDevice;
-(void)setMinimumSendDelay:(unsigned long long)arg1 ;
-(void)setMaximumSendDelay:(unsigned long long)arg1 ;
-(void)setMinimumResponseDelay:(unsigned long long)arg1 ;
-(void)setMaximumResponseDelay:(unsigned long long)arg1 ;
-(unsigned long long)_randomSendDelay;
-(void)_handleProtobuf:(id)arg1 identifier:(id)arg2 sendDelay:(unsigned long long)arg3 ;
-(void)_sendLightsAndSirensRequestForProtobuf:(id)arg1 identifier:(id)arg2 sendDelay:(unsigned long long)arg3 ;
-(void)_sendSetSectionInfoResponseWithIdentifier:(id)arg1 sendDelay:(unsigned long long)arg2 ;
-(unsigned long long)_randomResponseDelay;
-(id)_lightsAndSirensRequestForProtobuf:(id)arg1 ;
-(void)_callDelegateActionForProtobuf:(id)arg1 delegate:(id)arg2 identifier:(id)arg3 type:(unsigned short)arg4 isResponse:(BOOL)arg5 ;
-(void)_sendBlockToAllDelegatesAfterTime:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(unsigned long long)_randomValueBetweenMin:(unsigned long long)arg1 max:(unsigned long long)arg2 ;
-(unsigned long long)minimumSendDelay;
-(unsigned long long)maximumSendDelay;
-(unsigned long long)minimumResponseDelay;
-(unsigned long long)maximumResponseDelay;
@end

