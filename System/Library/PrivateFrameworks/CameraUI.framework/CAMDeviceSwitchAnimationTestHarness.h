/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMModeAndDeviceConfigurationTestHarness.h>

@class CAMViewfinderViewController;

@interface CAMDeviceSwitchAnimationTestHarness : CAMModeAndDeviceConfigurationTestHarness {

	CAMViewfinderViewController* _viewfinder;
	long long _desiredDevicePosition;

}
+(id)harnessWithTestName:(id)arg1 viewfinder:(id)arg2 devicePosition:(long long)arg3 ;
-(void)startTesting;
-(void)ensureCaptureDevicePosition:(long long)arg1 mode:(long long)arg2 thenPerform:(/*^block*/id)arg3 ;
-(id)initWithTestName:(id)arg1 viewfinder:(id)arg2 devicePosition:(long long)arg3 ;
@end
