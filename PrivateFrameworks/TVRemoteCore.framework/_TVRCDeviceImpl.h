/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _TVRCDeviceImpl <NSObject>
@optional
-(BOOL)isPaired;
-(void)sendEvent:(id)arg1 options:(id)arg2 response:(/*^block*/id)arg3;

@required
-(id)name;
-(id)identifier;
-(void)disconnect;
-(long long)connectionType;
-(id)model;
-(void)connect;
-(id)keyboardController;
-(void)setDevice:(id)arg1;
-(void)sendButtonEvent:(id)arg1;
-(void)sendGameControllerEvent:(id)arg1;
-(id)supportedButtons;
-(BOOL)supportsTouchEvents;
-(void)sendTouchEvent:(id)arg1;
-(id)voiceRecorder;
-(id)alternateIdentifiers;
-(unsigned long long)pairingCapability;
-(void)setAuthenticationSupported:(BOOL)arg1;

@end

