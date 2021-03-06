/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSQuickActionsDelegate <NSObject>
@required
-(BOOL)isPortrait;
-(BOOL)hasCamera;
-(BOOL)hasFlashlight;
-(BOOL)allowsFlashlight;
-(BOOL)allowsCameraPress;
-(void)touchBeganForButton:(id)arg1;
-(void)fireActionForButton:(id)arg1;
-(void)touchEndedForButton:(id)arg1;

@end

