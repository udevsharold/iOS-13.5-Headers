/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUZipArchive.h>

@protocol OS_dispatch_queue, TSUReadChannel;
@class NSObject, NSURL;

@interface TSUZipFileArchive : TSUZipArchive {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _archiveLength;
	id<TSUReadChannel> _archiveReadChannel;
	NSURL* _temporaryDirectoryURL;

}
+(void)readArchiveFromURL:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)debugDescription;
-(id)initWithURL:(id)arg1 ;
-(void)removeTemporaryDirectory;
-(unsigned long long)archiveLength;
-(id)readChannel;
-(BOOL)openWithURL:(id)arg1 ;
-(void)createTemporaryDirectoryRelativeToURL:(id)arg1 ;
-(BOOL)reopenWithTemporaryURL:(id)arg1 ;
-(id)initWithWriter:(id)arg1 atURL:(id)arg2 ;
-(BOOL)copyToTemporaryLocationRelativeToURL:(id)arg1 ;
@end
