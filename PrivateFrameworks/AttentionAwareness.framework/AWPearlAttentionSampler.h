/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AttentionAwareness/AttentionAwareness-Structs.h>
#import <AttentionAwareness/AWAttentionSampler.h>
#import <libobjc.A.dylib/BKDevicePearlDelegate.h>
#import <libobjc.A.dylib/BKFaceDetectOperationDelegate.h>

@protocol OS_dispatch_source;
@class BKDevicePearl, BKFaceDetectOperation, NSObject, NSString;

@interface AWPearlAttentionSampler : AWAttentionSampler <BKDevicePearlDelegate, BKFaceDetectOperationDelegate> {

	BKDevicePearl* _pearlDevice;
	BKFaceDetectOperation* _pendingPresenceOperation;
	BKFaceDetectOperation* _finishingPresenceOperation;
	NSObject*<OS_dispatch_source> _operationStalledTimer;
	unsigned long long _operationCreateTime;
	unsigned long long _lastErrorTime;
	int _displayNotifyToken;
	BOOL _displayState;
	BOOL _smartCoverClosed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(int)currentState;
-(void)setCurrentState:(int)arg1 ;
-(void)operation:(id)arg1 stateChanged:(long long)arg2 ;
-(void)operation:(id)arg1 finishedWithReason:(long long)arg2 ;
-(void)operation:(id)arg1 presenceStateChanged:(BOOL)arg2 ;
-(void)operation:(id)arg1 faceDetectStateChanged:(id)arg2 ;
-(void)device:(id)arg1 pearlEventOccurred:(long long)arg2 ;
-(void)device:(id)arg1 pearlStateChanged:(long long)arg2 ;
-(void)setDisplayState:(BOOL)arg1 ;
-(id)initForUnitTest:(BOOL)arg1 ;
-(void)setSmartCoverClosed:(BOOL)arg1 ;
-(void)updateSamplingDeadline:(unsigned long long)arg1 forClient:(id)arg2 ;
-(unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)arg1 ;
-(unsigned long long)minimumAttentionSamplerErrorRetryTime;
-(void)shouldSample:(BOOL)arg1 withDeadline:(unsigned long long)arg2 ;
-(void)triggerFaceDetectWithDeadline:(unsigned long long)arg1 ;
-(void)faceDetectStalled:(id)arg1 ;
-(void)finishingFaceDetect:(id)arg1 ;
-(void)cancelFaceDetect:(id)arg1 ;
-(void)updateFaceState:(int)arg1 ;
-(void)updateFaceState:(int)arg1 withFaceMetadata:(AWFaceDetectMetadata*)arg2 ;
-(void)pearlAttentionSamplerErrorOccurred;
-(void)startStalledTimerForOperation:(id)arg1 ;
-(void)cancelStalledTimer;
-(void)updateSuppressedMaskWithDisplayState:(BOOL)arg1 smartCoverClosed:(BOOL)arg2 ;
-(void)setDisplayStateFromNotification;
-(id)unitTestSampler;
@end

