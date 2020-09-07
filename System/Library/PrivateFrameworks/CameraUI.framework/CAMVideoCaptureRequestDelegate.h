/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMVideoCaptureRequestDelegate <NSObject>
@optional
-(void)videoRequestDidStartCapturing:(id)arg1;
-(void)videoRequestDidStopCapturing:(id)arg1;
-(void)videoRequestDidCompleteCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)videoRequestDidCompleteLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)videoRequestDidCompleteRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;

@end
