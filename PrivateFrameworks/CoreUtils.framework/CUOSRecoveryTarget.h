/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CUBLEAdvertiser, NSObject;

@interface CUOSRecoveryTarget : NSObject {

	BOOL _activateCalled;
	CUBLEAdvertiser* _bleAdvertiser;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _progressHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)init;
-(void)_activate;
-(void)invalidate;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(void)_invalidated;
-(void)activate;
-(void)_reportProgressType:(int)arg1 ;
@end
