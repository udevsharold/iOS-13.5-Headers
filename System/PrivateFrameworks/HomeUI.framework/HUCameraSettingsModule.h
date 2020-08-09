/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController;


@protocol HUCameraSettingsModule <NSObject>
@property (nonatomic,readonly) unsigned long long displayStyle; 
@property (nonatomic,retain) UIViewController * presentingViewController; 
@optional
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(id)arg1;
-(unsigned long long)displayStyle;
-(id)didSelectItem:(id)arg1;

@required
-(BOOL)isItemHeader:(id)arg1;

@end
