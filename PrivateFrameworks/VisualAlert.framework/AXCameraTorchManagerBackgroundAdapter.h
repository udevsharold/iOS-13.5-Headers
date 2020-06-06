/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AXCameraTorchManager;
@class NSObject;

@interface AXCameraTorchManagerBackgroundAdapter : NSObject {

	NSObject*<OS_dispatch_queue> _q;
	id<AXCameraTorchManager> _synchronousManager;

}

@property (nonatomic,readonly) id<AXCameraTorchManager> synchronousTorchManager;              //@synthesize synchronousManager=_synchronousManager - In the implementation block
-(id)initWithCameraTorchManager:(id)arg1 ;
-(void)openTorchDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)closeTorchDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)turnTorchOnWithCompletion:(/*^block*/id)arg1 ;
-(void)turnTorchOffWithCompletion:(/*^block*/id)arg1 ;
-(id<AXCameraTorchManager>)synchronousTorchManager;
@end

