/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKDAssetDirectoryContext : NSObject {

	NSString* _mmcsWorkingDirectory;
	NSString* _assetDbPath;
	NSString* _fileStagingPath;
	NSString* _fileDownloadPath;

}

@property (nonatomic,retain) NSString * mmcsWorkingDirectory;              //@synthesize mmcsWorkingDirectory=_mmcsWorkingDirectory - In the implementation block
@property (nonatomic,retain) NSString * assetDbPath;                       //@synthesize assetDbPath=_assetDbPath - In the implementation block
@property (nonatomic,retain) NSString * fileStagingPath;                   //@synthesize fileStagingPath=_fileStagingPath - In the implementation block
@property (nonatomic,retain) NSString * fileDownloadPath;                  //@synthesize fileDownloadPath=_fileDownloadPath - In the implementation block
-(NSString *)fileDownloadPath;
-(void)setMmcsWorkingDirectory:(NSString *)arg1 ;
-(void)setAssetDbPath:(NSString *)arg1 ;
-(void)setFileStagingPath:(NSString *)arg1 ;
-(void)setFileDownloadPath:(NSString *)arg1 ;
-(NSString *)mmcsWorkingDirectory;
-(NSString *)assetDbPath;
-(NSString *)fileStagingPath;
@end

