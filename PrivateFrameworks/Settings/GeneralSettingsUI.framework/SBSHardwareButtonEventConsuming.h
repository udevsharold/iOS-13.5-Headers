/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSHardwareButtonEventConsuming <NSObject>
@optional
-(void)consumeSinglePressDownForButtonKind:(long long)arg1;
-(void)consumeSinglePressUpForButtonKind:(long long)arg1;
-(void)consumeDoublePressDownForButtonKind:(long long)arg1;
-(void)consumeDoublePressUpForButtonKind:(long long)arg1;
-(void)consumeTriplePressUpForButtonKind:(long long)arg1;
-(void)consumeLongPressForButtonKind:(long long)arg1;
-(void)consumeAnyPressEventForButtonKind:(long long)arg1;
-(void)consumeStateChange:(long long)arg1 forButtonKind:(long long)arg2;

@end

