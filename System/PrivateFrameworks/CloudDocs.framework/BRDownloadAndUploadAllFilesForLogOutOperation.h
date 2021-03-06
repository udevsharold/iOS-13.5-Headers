/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@class BRGlobalProgressProxy, NSMutableArray, NSOperationQueue, BRUploadAllFilesForLogOutOperation, NSString;

@interface BRDownloadAndUploadAllFilesForLogOutOperation : BROperation <NSProgressReporting> {

	BRGlobalProgressProxy* _progress;
	NSMutableArray* _fileCoordinators;
	/*^block*/id _downloadAllFilesCompletionBlock;
	NSOperationQueue* _internalQueue;
	BRUploadAllFilesForLogOutOperation* _uploadOp;

}

@property (retain) BRGlobalProgressProxy * progress;                //@synthesize progress=_progress - In the implementation block
@property (copy) id downloadAllFilesCompletionBlock;                //@synthesize downloadAllFilesCompletionBlock=_downloadAllFilesCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(void)main;
-(BRGlobalProgressProxy *)progress;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setProgress:(BRGlobalProgressProxy *)arg1 ;
-(id)downloadAllFilesCompletionBlock;
-(void)setDownloadAllFilesCompletionBlock:(id)arg1 ;
@end

