/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBLockOverlayViewController.h>

@class SBLockScreenTemperatureWarningView, NSString;

@interface SBLockScreenTemperatureWarningViewController : SBLockOverlayViewController {

	SBLockScreenTemperatureWarningView* _warningView;

}

@property (nonatomic,__weak,readonly) NSString * slideToUnlockText; 
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSString *)slideToUnlockText;
@end
