/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CEKWheelScrubberViewDelegate <NSObject>
@optional
-(void)wheelScrubberViewWillBeginScrolling:(id)arg1;
-(void)wheelScrubberViewDidScroll:(id)arg1;
-(void)wheelScrubberViewWillEndScrolling:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3;
-(void)wheelScrubberViewDidEndScrolling:(id)arg1;

@required
-(void)wheelScrubberView:(id)arg1 updateCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
-(void)wheelScrubberViewDidChangeSelectedIndex:(id)arg1;

@end

