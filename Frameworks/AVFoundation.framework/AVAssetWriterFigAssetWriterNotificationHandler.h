/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference;

@interface AVAssetWriterFigAssetWriterNotificationHandler : NSObject {

	OpaqueFigAssetWriterRef _figAssetWriter;
	int _didNotCallDelegate;
	AVWeakReference* _weakReferenceToSelf;
	AVWeakReference* _weakReferenceToDelegate;
	int _notificationHandlersAreRegistered;

}

@property (setter=_setWeakReferenceToDelegate:,getter=_weakReferenceToDelegate,retain) AVWeakReference * weakReferenceToDelegate;              //@synthesize weakReferenceToDelegate=_weakReferenceToDelegate - In the implementation block
@property (__weak) id<AVAssetWriterFigAssetWriterNotificationHandlerDelegate> delegate; 
-(void)dealloc;
-(id<AVAssetWriterFigAssetWriterNotificationHandlerDelegate>)delegate;
-(void)setDelegate:(id<AVAssetWriterFigAssetWriterNotificationHandlerDelegate>)arg1 ;
-(void)_handleServerDiedNotification;
-(id)_weakReferenceToDelegate;
-(void)_setWeakReferenceToDelegate:(id)arg1 ;
-(void)_teardownNotificationHandlers;
-(void)_callDelegateIfNotCalledWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 ;
-(void)_handleCompletedWritingNotification;
-(void)_handleFailedNotificationWithError:(id)arg1 ;
@end

