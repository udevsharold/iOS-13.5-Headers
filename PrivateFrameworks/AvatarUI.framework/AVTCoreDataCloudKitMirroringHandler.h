/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTCoreDataCloudKitMirroringHandler.h>

@protocol AVTCoreDataCloudKitMirroringHandler
@property (assign,nonatomic,__weak) id<AVTCoreDataCloudKitMirroringHandlerDelegate> delegate; 
@required
-(id<AVTCoreDataCloudKitMirroringHandlerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)exportChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)startObservingResetSyncWithNotificationCenter:(id)arg1;
-(void)scheduleExportChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)importChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)resetZoneWithManagedObjectContext:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end


@protocol AVTCoreDataCloudKitMirroringHandlerDelegate, AVTUILogger, AVTBlockScheduler, NSObject;
@class NSNotificationCenter;

@interface AVTCoreDataCloudKitMirroringHandler : NSObject <AVTCoreDataCloudKitMirroringHandler> {

	BOOL _exportInFlight;
	id<AVTCoreDataCloudKitMirroringHandlerDelegate> _delegate;
	id<AVTUILogger> _logger;
	id<AVTBlockScheduler> _blockScheduler;
	id<NSObject> _willResetNotificationToken;
	id<NSObject> _didResetNotificationToken;
	NSNotificationCenter* _notificationCenter;

}

@property (nonatomic,readonly) id<AVTUILogger> logger;                                                     //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<AVTBlockScheduler> blockScheduler;                                       //@synthesize blockScheduler=_blockScheduler - In the implementation block
@property (nonatomic,retain) id<NSObject> willResetNotificationToken;                                      //@synthesize willResetNotificationToken=_willResetNotificationToken - In the implementation block
@property (nonatomic,retain) id<NSObject> didResetNotificationToken;                                       //@synthesize didResetNotificationToken=_didResetNotificationToken - In the implementation block
@property (nonatomic,retain) NSNotificationCenter * notificationCenter;                                    //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (assign,nonatomic) BOOL exportInFlight;                                                          //@synthesize exportInFlight=_exportInFlight - In the implementation block
@property (assign,nonatomic,__weak) id<AVTCoreDataCloudKitMirroringHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<AVTCoreDataCloudKitMirroringHandlerDelegate>)delegate;
-(void)setDelegate:(id<AVTCoreDataCloudKitMirroringHandlerDelegate>)arg1 ;
-(id<AVTUILogger>)logger;
-(NSNotificationCenter *)notificationCenter;
-(id<AVTBlockScheduler>)blockScheduler;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(id<NSObject>)willResetNotificationToken;
-(id<NSObject>)didResetNotificationToken;
-(void)willResetSync:(id)arg1 ;
-(void)setWillResetNotificationToken:(id<NSObject>)arg1 ;
-(void)didResetSync:(id)arg1 ;
-(void)setDidResetNotificationToken:(id<NSObject>)arg1 ;
-(BOOL)exportInFlight;
-(void)setExportInFlight:(BOOL)arg1 ;
-(void)exportChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startObservingResetSyncWithNotificationCenter:(id)arg1 ;
-(void)scheduleExportChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)importChangesWithManagedObjectContext:(id)arg1 workQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)resetZoneWithManagedObjectContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithLogger:(id)arg1 blockScheduler:(id)arg2 ;
@end

