/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DNDSAssertionSyncManager.h>

@protocol OS_dispatch_queue, DNDSLegacyAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate;
@class NSObject, NPSManager, NPSDomainAccessor, DNDSClientDetailsProvider, NSString;

@interface DNDSLegacyAssertionSyncManager : NSObject <DNDSAssertionSyncManager> {

	NSObject*<OS_dispatch_queue> _queue;
	NPSManager* _npsManager;
	NPSDomainAccessor* _accessor;
	DNDSClientDetailsProvider* _clientDetailsProvider;
	id<DNDSLegacyAssertionSyncManagerDataSource> _dataSource;
	id<DNDSAssertionSyncManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<DNDSLegacyAssertionSyncManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<DNDSAssertionSyncManagerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
+(void)cleanupState;
-(void)dealloc;
-(id<DNDSAssertionSyncManagerDelegate>)delegate;
-(void)setDelegate:(id<DNDSAssertionSyncManagerDelegate>)arg1 ;
-(void)resume;
-(id<DNDSLegacyAssertionSyncManagerDataSource>)dataSource;
-(void)setDataSource:(id<DNDSLegacyAssertionSyncManagerDataSource>)arg1 ;
-(void)_endMonitoringForChanges;
-(void)_beginMonitoringForChanges;
-(void)_updateForReason:(unsigned long long)arg1 ;
-(void)_queue_updateToggleSyncForReason:(unsigned long long)arg1 ;
-(void)_queue_updateGizmoAssertionSyncWithModeAssertionUpdateContext:(id)arg1 ;
-(id)_queue_gizmoUpdateDate;
-(BOOL)_queue_updateCompanionToggleSyncForGizmoUpdateDate:(id)arg1 modeAssertionUpdateContext:(id)arg2 ;
-(void)_queue_updateGizmoToggleSyncForState:(id)arg1 companionUpdateDate:(id)arg2 reason:(unsigned long long)arg3 ;
-(void)_queue_updateCompanionAssertionMirroringForState:(id)arg1 ;
-(void)updateForStateUpdate:(id)arg1 ;
-(id)initWithClientDetailsProvider:(id)arg1 pairedDevice:(id)arg2 ;
-(void)_updateGizmoAssertionSync;
@end

