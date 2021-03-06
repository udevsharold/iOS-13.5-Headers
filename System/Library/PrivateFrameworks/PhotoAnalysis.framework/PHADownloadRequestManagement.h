/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHADownloadRequestManagement <NSObject>
@property (assign) unsigned long long expectedRequestsCount; 
@required
-(void)requestPermissionToDownloadWithPhotoLibrary:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(unsigned long long)expectedRequestsCount;
-(void)setExpectedRequestsCount:(unsigned long long)arg1;

@end

