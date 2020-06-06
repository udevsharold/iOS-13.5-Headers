/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSArray, WCContentIndex;

@interface WCFileStorage : NSObject {

	NSString* _pairingID;
	NSObject*<OS_dispatch_queue> _fileQueue;
	NSArray* _outstandingFileTransfers;
	WCContentIndex* _fileIndex;
	WCContentIndex* _fileResultsIndex;
	WCContentIndex* _userInfoIndex;
	WCContentIndex* _userInfoResultsIndex;

}

@property (retain) NSObject*<OS_dispatch_queue> fileQueue;              //@synthesize fileQueue=_fileQueue - In the implementation block
@property (retain) NSArray * outstandingFileTransfers;                  //@synthesize outstandingFileTransfers=_outstandingFileTransfers - In the implementation block
@property (retain) WCContentIndex * fileIndex;                          //@synthesize fileIndex=_fileIndex - In the implementation block
@property (retain) WCContentIndex * fileResultsIndex;                   //@synthesize fileResultsIndex=_fileResultsIndex - In the implementation block
@property (retain) WCContentIndex * userInfoIndex;                      //@synthesize userInfoIndex=_userInfoIndex - In the implementation block
@property (retain) WCContentIndex * userInfoResultsIndex;               //@synthesize userInfoResultsIndex=_userInfoResultsIndex - In the implementation block
@property (nonatomic,copy) NSString * pairingID;                        //@synthesize pairingID=_pairingID - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)homeDirectoryURL;
-(NSString *)pairingID;
-(void)setPairingID:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)fileQueue;
-(void)createWatchDirectoryIfNeeded:(id)arg1 ;
-(void)deleteAppContextReceived:(BOOL)arg1 ;
-(id)loadOutstandingUserInfoTransfersAndComplicationUserInfo:(id*)arg1 ;
-(id)persistOutgoingUserInfoTransfer:(id)arg1 ;
-(void)deleteOutstandingUserInfoTransfer:(id)arg1 ;
-(id)loadOutstandingFileTransfers;
-(void)persistOutgoingFileTransfer:(id)arg1 ;
-(void)deleteOutstandingFileTransfer:(id)arg1 ;
-(void)persistAppContextData:(id)arg1 received:(BOOL)arg2 ;
-(id)loadAppContextReceived:(BOOL)arg1 ;
-(id)loadAppContextDataFromInbox;
-(void)deleteAppContextDataFromInbox;
-(void)cleanupSessionFileFromInbox:(id)arg1 ;
-(void)enumerateIncomingFilesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateFileTransferResultsWithBlock:(/*^block*/id)arg1 ;
-(void)deleteUserInfoTransferFromInbox:(id)arg1 ;
-(void)enumerateIncomingUserInfosWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateUserInfoResultsWithBlock:(/*^block*/id)arg1 ;
-(void)cleanUpWatchContentDirectoryWithCurrentAppInstallationID:(id)arg1 ;
-(void)cleanUpOldPairingIDFoldersWithPairedDevicesPairingIDs:(id)arg1 ;
-(NSArray *)outstandingFileTransfers;
-(void)resetIndexes;
-(WCContentIndex *)fileIndex;
-(void)setFileIndex:(WCContentIndex *)arg1 ;
-(WCContentIndex *)fileResultsIndex;
-(void)setFileResultsIndex:(WCContentIndex *)arg1 ;
-(WCContentIndex *)userInfoIndex;
-(void)setUserInfoIndex:(WCContentIndex *)arg1 ;
-(WCContentIndex *)userInfoResultsIndex;
-(void)setUserInfoResultsIndex:(WCContentIndex *)arg1 ;
-(id)outgoingFileTransferPath;
-(id)appendPathForFileTransfer:(id)arg1 toPath:(id)arg2 ;
-(BOOL)removeItemAtURL:(id)arg1 numberOfRetries:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)appContextFolderURL:(BOOL)arg1 ;
-(void)deleteRelatedMetadataForSessionFileFromInbox:(id)arg1 ;
-(void)deleteFileFolderForSessionFileFromInbox:(id)arg1 ;
-(void)cleanUpOldPairingIDFolderInFolder:(id)arg1 pairedDevicesPairingIDs:(id)arg2 ;
-(id)receivedAppContextFolderURL;
-(id)localAppContextFolderURL;
-(void)setFileQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setOutstandingFileTransfers:(NSArray *)arg1 ;
@end

