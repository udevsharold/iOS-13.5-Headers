/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CAMURLConfigurationRequest : NSObject {

	BOOL _wantsQRCodeForSession;
	long long _requestedCaptureMode;
	long long _requestedCaptureDevice;

}

@property (nonatomic,readonly) long long requestedCaptureMode;                //@synthesize requestedCaptureMode=_requestedCaptureMode - In the implementation block
@property (nonatomic,readonly) long long requestedCaptureDevice;              //@synthesize requestedCaptureDevice=_requestedCaptureDevice - In the implementation block
@property (nonatomic,readonly) BOOL wantsQRCodeForSession;                    //@synthesize wantsQRCodeForSession=_wantsQRCodeForSession - In the implementation block
-(long long)requestedCaptureMode;
-(long long)requestedCaptureDevice;
-(BOOL)wantsQRCodeForSession;
-(BOOL)_initializeFromQueryDictionary:(id)arg1 ;
-(BOOL)_captureModeFromString:(id)arg1 outCaptureMode:(long long*)arg2 ;
-(long long)_captureDeviceFromString:(id)arg1 outCaptureDevice:(long long*)arg2 ;
-(id)initWithQueryDictionary:(id)arg1 ;
@end

