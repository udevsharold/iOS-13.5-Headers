/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class VEKProduction;


@protocol PMEditorMenuViewControllerDelegate <NSObject>
@property (nonatomic,readonly) unsigned long long numberOfClipsInMovie; 
@property (nonatomic,readonly) VEKProduction * production; 
@property (nonatomic,readonly) double sequenceDuration; 
@required
-(VEKProduction *)production;
-(void)prepareLayoutForCollapsedMode;
-(void)prepareLayoutForSpiltMode;
-(void)showTitleEditorViewController;
-(void)showMusicPickerViewController;
-(void)showContentEditorViewController;
-(void)showDurationEditorViewController;
-(void)showKeyAssetSelectionPicker;
-(void)showDebugTitleStylePickerViewController;
-(void)showDebugEditStylePickerViewController;
-(void)showDebugTransitionPickerViewController;
-(void)showDebugFilterPickerViewController;
-(unsigned long long)numberOfClipsInMovie;
-(double)sequenceDuration;

@end

