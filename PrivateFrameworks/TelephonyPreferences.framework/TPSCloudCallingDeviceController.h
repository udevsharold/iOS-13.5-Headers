/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUCallCapabilitiesDelegatePrivate.h>

@protocol TPSCloudCallingDeviceControllerDelegate;
@class NSArray, NSString;

@interface TPSCloudCallingDeviceController : NSObject <TUCallCapabilitiesDelegatePrivate> {

	BOOL _enabled;
	id<TPSCloudCallingDeviceControllerDelegate> _delegate;
	NSArray* _devices;

}

@property (nonatomic,copy) NSArray * devices;                                                          //@synthesize devices=_devices - In the implementation block
@property (assign,nonatomic,__weak) id<TPSCloudCallingDeviceControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                             //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id<TPSCloudCallingDeviceControllerDelegate>)delegate;
-(void)setDelegate:(id<TPSCloudCallingDeviceControllerDelegate>)arg1 ;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(void)didChangeCloudCallingDevices;
@end

