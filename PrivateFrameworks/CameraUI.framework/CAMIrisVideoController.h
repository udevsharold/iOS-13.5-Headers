/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAMNebulaDaemonIrisClientProtocol.h>

@protocol CAMIrisVideoControllerDelegate, OS_dispatch_queue;
@class NSObject, CAMNebulaDaemonProxyManager, NSMutableArray, NSMutableDictionary, NSString;

@interface CAMIrisVideoController : NSObject <CAMNebulaDaemonIrisClientProtocol> {

	id<CAMIrisVideoControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> __mutexQueue;
	CAMNebulaDaemonProxyManager* __nebulaDaemonProxyManager;
	NSMutableArray* __jobsToBeSent;
	NSMutableDictionary* __pendingJobs;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _mutexQueue;                             //@synthesize _mutexQueue=__mutexQueue - In the implementation block
@property (nonatomic,readonly) CAMNebulaDaemonProxyManager * _nebulaDaemonProxyManager;              //@synthesize _nebulaDaemonProxyManager=__nebulaDaemonProxyManager - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _jobsToBeSent;                                       //@synthesize _jobsToBeSent=__jobsToBeSent - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _pendingJobs;                                   //@synthesize _pendingJobs=__pendingJobs - In the implementation block
@property (nonatomic,__weak,readonly) id<CAMIrisVideoControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CAMIrisVideoControllerDelegate>)delegate;
-(NSMutableDictionary *)_pendingJobs;
-(NSObject*<OS_dispatch_queue>)_mutexQueue;
-(void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2 ;
-(void)nebulaDaemonDidCompleteLocalVideoPersistenceWithResult:(id)arg1 ;
-(NSMutableArray *)_jobsToBeSent;
-(void)_submitJob:(id)arg1 ;
-(void)_notifyDelegateOfVideoLocalPersistenceResult:(id)arg1 forVideoPersistenceUUID:(id)arg2 ;
-(id)initWithNebulaDaemonProxyManager:(id)arg1 delegate:(id)arg2 ;
-(BOOL)shouldHandleLivePhotoRenderingForRequest:(id)arg1 ;
-(void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2 ;
-(BOOL)isWaitingOnNebuladForRequest:(id)arg1 ;
-(CAMNebulaDaemonProxyManager *)_nebulaDaemonProxyManager;
@end

