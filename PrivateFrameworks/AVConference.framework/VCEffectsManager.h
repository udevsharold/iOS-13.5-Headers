/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject, NSMutableArray;

@interface VCEffectsManager : NSObject {

	id _delegate;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;
	NSMutableArray* _effectsArray;
	BOOL _effectsRegistered;
	opaque_pthread_mutex_t _loggingLock;
	SCD_Struct_AV77 _lastPrintTimestamp;
	SCD_Struct_AV77 _lastReceivedTimestamp;
	SCD_Struct_AV77 _lastSentTimestamp;
	int _consecutiveDroppedFrameCount;
	int _cameraFrameCount;
	int _sentFrameCount;
	int _receivedFrameCount;
	int _droppedFrameCount;
	int _failedFrameCount;
	BOOL _forceDisableEffectsHealthCheck;
	int _thermalPressureLevel;

}

@property (assign,nonatomic) id<VCEffectsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableArray * effectsArray;                                //@synthesize effectsArray=_effectsArray - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(id<VCEffectsManagerDelegate>)delegate;
-(void)setDelegate:(id<VCEffectsManagerDelegate>)arg1 ;
-(void)setAnimoji:(id)arg1 ;
-(void)registerBlocksForService;
-(void)setMemoji:(id)arg1 ;
-(BOOL)isFaceMeshTrackingEnabled;
-(BOOL)isEffectsOn;
-(void)capturedPixelBuffer:(CVBufferRef)arg1 depthDataPixelBuffer:(CVBufferRef)arg2 time:(SCD_Struct_AV77)arg3 imageData:(id)arg4 ;
-(void)encodeProcessedPixelBuffer:(CVBufferRef)arg1 time:(SCD_Struct_AV77)arg2 imageData:(id)arg3 processTime:(id)arg4 ;
-(void)addStickerWithURL:(id)arg1 isFaceSticker:(BOOL)arg2 atPosition:(CGPoint)arg3 identifier:(id)arg4 ;
-(void)clearAllStickers:(BOOL)arg1 ;
-(void)updateThermalLevel:(int)arg1 ;
-(void)resetEffectsLogging;
-(NSMutableArray *)effectsArray;
-(void)renderPixelBuffer:(CVBufferRef)arg1 time:(SCD_Struct_AV77)arg2 ;
-(void)capturedPixelBuffer:(CVBufferRef)arg1 depthBuffer:(CVBufferRef)arg2 time:(SCD_Struct_AV77)arg3 imageData:(id)arg4 toClient:(id)arg5 ;
-(BOOL)checkEffectsHealth;
-(void)effectsRegistered:(BOOL)arg1 ;
-(void)setEffectsArray:(NSMutableArray *)arg1 ;
@end

