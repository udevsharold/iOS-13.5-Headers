/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMTimerStatusIndicator : CAMControlStatusIndicator {

	long long _timerDuration;

}

@property (assign,nonatomic) long long timerDuration;              //@synthesize timerDuration=_timerDuration - In the implementation block
-(id)valueText;
-(long long)timerDuration;
-(id)imageNameForCurrentState;
-(BOOL)canShowValue;
-(void)setTimerDuration:(long long)arg1 ;
@end

