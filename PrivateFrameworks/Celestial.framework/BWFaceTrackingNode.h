/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject;

@interface BWFaceTrackingNode : BWNode {

	CVAFaceKitRef _faceKitRef;
	OpaqueFigCaptureISPProcessingSessionRef _processingSession;
	os_unfair_lock_s _processingLock;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSObject*<OS_dispatch_semaphore> _processingSemaphore;
	BOOL _processing;
	opaqueCMSimpleQueueRef _nextSbufQueue;
	BOOL _setupDone;
	BOOL _structuredLightOccluded;
	BOOL _frontCamera;
	int _orientation;
	BOOL _mirrored;
	int _faceKitMachThreadPriority;
	BOOL _faceKitRGBOnly;
	int _faceKitMaxFaces;
	BOOL _faceKitUsesFaceRecognition;
	BOOL _addMesh;
	BOOL _addDebugInfo;

}
+(void)initialize;
-(void)dealloc;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(id)nodeType;
-(void)_processSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)setMirrored:(BOOL)arg1 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(BOOL)mirroringEnabled;
-(id)initWithProcessingSession:(OpaqueFigCaptureISPProcessingSessionRef)arg1 figThreadPriority:(unsigned)arg2 useDepth:(BOOL)arg3 queueDepth:(int)arg4 ;
-(void)setFrontCamera:(BOOL)arg1 ;
-(void)setMaxFaces:(int)arg1 ;
-(void)setUsesFaceRecognition:(BOOL)arg1 ;
-(int)_setupCVA;
-(void)_startProcessingSampleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)frontCamera;
-(int)maxFaces;
-(BOOL)usesFaceRecognition;
@end

