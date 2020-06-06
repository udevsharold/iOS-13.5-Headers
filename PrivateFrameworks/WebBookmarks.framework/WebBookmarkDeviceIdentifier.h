/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSURL, NSUUID, NSObject;

@interface WebBookmarkDeviceIdentifier : NSObject {

	NSURL* _plistURL;
	NSUUID* _UUID;
	BOOL _encounteredErrorWhileObtainingUUID;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _fileMonitor;
	BOOL _readOnly;

}

@property (nonatomic,readonly) NSUUID * UUID; 
@property (nonatomic,readonly) BOOL encounteredErrorWhileObtainingUUID; 
@property (assign,getter=isReadOnly,nonatomic) BOOL readOnly;                        //@synthesize readOnly=_readOnly - In the implementation block
+(void)_postWebBookmarkMetaDataChangeDistributedNotification:(id)arg1 ;
+(void)clearDeviceIdentifierWithPlistURL:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSUUID *)UUID;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)isReadOnly;
-(void)stopObservingChanges;
-(void)_setUpWithPlistURL:(id)arg1 readOnly:(BOOL)arg2 queue:(id)arg3 ;
-(void)_createOrLoadMetaData;
-(void)_metaDataDidChange:(id)arg1 ;
-(void)_registerForMedadaDataFileChangeDistributedNotification;
-(void)_cancelMonitoringMetaDataFile;
-(void)_resumeMonitoringMetaDataFile;
-(id)initWithPlistURL:(id)arg1 readOnly:(BOOL)arg2 ;
-(BOOL)encounteredErrorWhileObtainingUUID;
@end

