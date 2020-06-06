/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CAMModeAndDeviceConfigurationChangeListener : NSObject {

	long long _desiredMode;
	long long _desiredDevicePosition;
	/*^block*/id _handler;

}

@property (assign,nonatomic) long long desiredMode;                        //@synthesize desiredMode=_desiredMode - In the implementation block
@property (assign,nonatomic) long long desiredDevicePosition;              //@synthesize desiredDevicePosition=_desiredDevicePosition - In the implementation block
@property (nonatomic,copy) id handler;                                     //@synthesize handler=_handler - In the implementation block
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)setDesiredMode:(long long)arg1 ;
-(long long)desiredMode;
-(long long)desiredDevicePosition;
-(void)setDesiredDevicePosition:(long long)arg1 ;
@end

