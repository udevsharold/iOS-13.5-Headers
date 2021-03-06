/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MBManagerDelegate.h>

@protocol OS_dispatch_queue;
@class MBManager, NSObject, NSError, RPFileTransferSession;

@interface MBDeviceTransferTask : NSObject <MBManagerDelegate> {

	MBManager* _manager;
	NSObject*<OS_dispatch_queue> _queue;
	AB _started;
	AB _canceled;
	AB _finished;
	AB _suspended;
	NSError* _completionError;
	/*^block*/id _progressHandler;
	/*^block*/id _connectionStateHandler;
	/*^block*/id _connectionInfoHandler;
	/*^block*/id _completionHandler;
	RPFileTransferSession* _fileTransferSession;

}

@property (nonatomic,retain) MBManager * manager;                                      //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) RPFileTransferSession * fileTransferSession;              //@synthesize fileTransferSession=_fileTransferSession - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,retain) NSError * completionError;                                //@synthesize completionError=_completionError - In the implementation block
@property (nonatomic,copy) id progressHandler;                                         //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id connectionStateHandler;                                  //@synthesize connectionStateHandler=_connectionStateHandler - In the implementation block
@property (nonatomic,copy) id connectionInfoHandler;                                   //@synthesize connectionInfoHandler=_connectionInfoHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                                       //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)dealloc;
-(void)_suspend;
-(void)_resume;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancel;
-(void)start;
-(BOOL)finished;
-(MBManager *)manager;
-(BOOL)canceled;
-(void)_start;
-(BOOL)started;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setManager:(MBManager *)arg1 ;
-(NSError *)completionError;
-(void)setCompletionError:(NSError *)arg1 ;
-(void)_cancel;
-(void)_finishWithError:(id)arg1 ;
-(long long)taskType;
-(void)setFileTransferSession:(RPFileTransferSession *)arg1 ;
-(id)initWithFileTransferSession:(id)arg1 ;
-(RPFileTransferSession *)fileTransferSession;
-(void)setConnectionInfoHandler:(id)arg1 ;
-(void)managerDidLoseConnectionToService:(id)arg1 ;
-(void)manager:(id)arg1 didUpdateDeviceTransferConnectionInfo:(id)arg2 ;
-(void)setConnectionStateHandler:(id)arg1 ;
-(id)connectionStateHandler;
-(id)connectionInfoHandler;
-(BOOL)_handleCompletionWithError:(id*)arg1 ;
@end

