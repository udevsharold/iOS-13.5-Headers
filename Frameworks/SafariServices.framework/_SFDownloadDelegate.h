/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _SFDownloadDelegate <NSObject>
@optional
-(BOOL)downloadShouldImportPlaceholderToDownloadsFolder:(id)arg1;
-(void)downloadDidImportFileToDownloadsFolder:(id)arg1;
-(void)downloadDidReceiveResponse:(id)arg1;
-(void)downloadDidResume:(id)arg1;
-(void)createDirectoryForDownload:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)downloadShouldContinueAfterReceivingResponse:(id)arg1 decisionHandler:(/*^block*/id)arg2;
-(void)downloadContentsDidChange:(id)arg1;
-(void)downloadWillBeDeleted:(id)arg1;

@required
-(void)downloadDidFinish:(id)arg1;
-(void)downloadDidFail:(id)arg1;
-(void)downloadDidStart:(id)arg1;

@end

