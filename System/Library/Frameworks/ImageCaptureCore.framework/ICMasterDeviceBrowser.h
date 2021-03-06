/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, PTPCameraDeviceManager, MSCameraDeviceManager;

@interface ICMasterDeviceBrowser : NSObject {

	NSMutableArray* _devices;
	NSMutableArray* _browsers;
	NSMutableArray* _suspendedBrowsers;
	long long _numberOfBrowsingBrowsers;
	PTPCameraDeviceManager* _ptpDevManager;
	MSCameraDeviceManager* _msDevManager;

}

@property (readonly) NSMutableArray * devices;               //@synthesize devices=_devices - In the implementation block
@property (readonly) NSMutableArray * browsers;              //@synthesize browsers=_browsers - In the implementation block
+(BOOL)exists;
+(id)defaultBrowser;
-(id)init;
-(void)dealloc;
-(NSMutableArray *)devices;
-(NSMutableArray *)browsers;
-(void)handleCommandCompletionNotification:(id)arg1 ;
-(void)handleImageCaptureEventNotification:(id)arg1 ;
-(int)start:(id)arg1 ;
-(void)stop:(id)arg1 ;
-(void)addBrowser:(id)arg1 ;
-(BOOL)startPTPCameraBrowser;
-(BOOL)startMSCameraBrowser;
-(void)removeBrowser:(id)arg1 ;
-(id)deviceWithDelegate:(id)arg1 ;
@end

