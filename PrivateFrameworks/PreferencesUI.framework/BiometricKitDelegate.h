/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BiometricKitDelegate <NSObject>
@optional
-(void)statusMessage:(unsigned)arg1;
-(void)enrollProgress:(id)arg1;
-(void)enrollResult:(id)arg1;
-(void)matchResult:(id)arg1 withDetails:(id)arg2;
-(void)matchResult:(id)arg1;
-(void)homeButtonPressed;
-(void)touchIDButtonPressed:(BOOL)arg1;
-(void)templateUpdate:(id)arg1 withDetails:(id)arg2;
-(void)taskResumeStatus:(int)arg1;
-(void)enrollUpdate:(id)arg1;
-(void)enrollFeedback:(id)arg1;

@end

