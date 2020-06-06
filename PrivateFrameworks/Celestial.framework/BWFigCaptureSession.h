/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/BWPipelineNotificationDelegate.h>
#import <libobjc.A.dylib/BWNodeFileWriterStatusDelegate.h>
#import <libobjc.A.dylib/BWStillImageCaptureStatusDelegate.h>
#import <libobjc.A.dylib/BWRemoteQueueSinkNodeDelegate.h>
#import <libobjc.A.dylib/BWNodeRenderDelegate.h>
#import <libobjc.A.dylib/BWImageQueueSinkNodePreviewTapDelegate.h>
#import <libobjc.A.dylib/BWGraphStatusDelegate.h>
#import <libobjc.A.dylib/BWIrisStagingNodeIrisRequestDelegate.h>
#import <libobjc.A.dylib/FigCaptureDisplayLayoutObserver.h>

@class NSString;

@interface BWFigCaptureSession : NSObject <BWPipelineNotificationDelegate, BWNodeFileWriterStatusDelegate, BWStillImageCaptureStatusDelegate, BWRemoteQueueSinkNodeDelegate, BWNodeRenderDelegate, BWImageQueueSinkNodePreviewTapDelegate, BWGraphStatusDelegate, BWIrisStagingNodeIrisRequestDelegate, FigCaptureDisplayLayoutObserver> {

	OpaqueFigCaptureSessionRef _captureSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fileWriter:(id)arg1 startedRecordingForSettings:(id)arg2 writerPipelineIndex:(unsigned long long)arg3 ;
-(void)fileWriter:(id)arg1 pausedRecordingForSettingsID:(unsigned long long)arg2 ;
-(void)fileWriter:(id)arg1 resumedRecordingForSettingsID:(unsigned long long)arg2 ;
-(void)fileWriter:(id)arg1 writerPipelineIndex:(unsigned long long)arg2 stoppedRecordingForSettings:(id)arg3 withError:(int)arg4 thumbnailSurface:(IOSurfaceRef)arg5 irisMovieInfo:(id)arg6 debugMetadataSidecarFileURL:(id)arg7 recordingSucceeded:(BOOL)arg8 ;
-(void)node:(id)arg1 format:(id)arg2 didBecomeLiveForOutput:(id)arg3 ;
-(void)postNotification:(id)arg1 notificationPayload:(id)arg2 ;
-(void)fileWriter:(id)arg1 writerPipelineIndex:(unsigned long long)arg2 stoppedRecordingSampleDataForSettingsID:(long long)arg3 ;
-(void)stillImageCoordinator:(id)arg1 willBeginCaptureForSettings:(id)arg2 resolvedCaptureSettings:(id)arg3 photoManifest:(id)arg4 ;
-(void)stillImageCoordinator:(id)arg1 willCapturePhotoForSettings:(id)arg2 sisActive:(BOOL)arg3 error:(int)arg4 ;
-(void)stillImageCoordinator:(id)arg1 didResolveStillImagePTS:(SCD_Struct_BW2)arg2 forSettings:(id)arg3 resolvedCaptureSettings:(id)arg4 isPreBracketedEV0:(BOOL)arg5 ;
-(void)stillImageCoordinator:(id)arg1 didSelectNewReferenceFrameWithPTS:(SCD_Struct_BW2)arg2 transform:(id)arg3 forSettings:(id)arg4 ;
-(void)stillImageCoordinator:(id)arg1 didCapturePhotoForSettings:(id)arg2 ;
-(void)stillImageCoordinator:(id)arg1 willPrepareStillImageCaptureWithSettings:(id)arg2 clientInitiated:(BOOL)arg3 ;
-(void)stillImageCoordinator:(id)arg1 didCancelMomentCaptureForSettingsID:(long long)arg2 streamingDisruptionEndPTS:(SCD_Struct_BW2)arg3 ;
-(void)remoteQueueSinkNode:(id)arg1 queueBecameReady:(remoteQueueSenderOpaqueRef)arg2 ;
-(void)remoteQueueSinkNode:(id)arg1 localQueueBecameReady:(localQueueOpaqueRef)arg2 ;
-(void)node:(id)arg1 format:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)node:(id)arg1 willRenderSampleBuffer:(opaqueCMSampleBufferRef)arg2 forInput:(id)arg3 ;
-(void)imageQueueSinkNode:(id)arg1 didAttemptToEnqueuePreviewSampleBuffer:(opaqueCMSampleBufferRef)arg2 withSuccess:(BOOL)arg3 ;
-(void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1 ;
-(void)imageQueueSinkNodeDidDisplayFirstFrame:(id)arg1 atHostTime:(long long)arg2 ;
-(void)graphDidPrepareNodes:(id)arg1 ;
-(void)graph:(id)arg1 didFinishStartingWithError:(int)arg2 ;
-(void)graphDidResolveRetainedBufferCounts:(id)arg1 ;
-(void)stagingNode:(id)arg1 readyToReceiveRequestsWithEarliestAllowedStillImageCaptureHostPTS:(SCD_Struct_BW2)arg2 ;
-(void)stagingNode:(id)arg1 willEmitIrisRequest:(id)arg2 ;
-(void)stagingNode:(id)arg1 waitingToEmitFrameWithPTS:(SCD_Struct_BW2)arg2 ;
-(void)layoutMonitor:(id)arg1 didUpdateLayoutWithForegroundApps:(id)arg2 obscuredApps:(id)arg3 transitioningApps:(id)arg4 ;
-(id)initWithFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)previewStitcher:(id)arg1 overCaptureStatusDidChange:(int)arg2 ;
-(void)previewStitcher:(id)arg1 didApplyWiderShift:(CGPoint)arg2 widerScaleFactor:(float)arg3 forWiderPortType:(id)arg4 narrowerShift:(CGPoint)arg5 narrowerScaleFactor:(float)arg6 forNarrowerPortType:(id)arg7 ;
@end

