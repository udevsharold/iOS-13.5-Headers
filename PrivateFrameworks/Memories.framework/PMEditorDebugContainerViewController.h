/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol PMPlayerControlling;
@class MiroMemory, PMDebugPickerViewController;

@interface PMEditorDebugContainerViewController : UIViewController {

	id<PMPlayerControlling> _playerController;
	MiroMemory* _memory;
	unsigned long long _pickerMode;
	PMDebugPickerViewController* _moodPartPicker;

}

@property (nonatomic,retain) PMDebugPickerViewController * moodPartPicker;                 //@synthesize moodPartPicker=_moodPartPicker - In the implementation block
@property (assign,nonatomic,__weak) id<PMPlayerControlling> playerController;              //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic,__weak) MiroMemory * memory;                                   //@synthesize memory=_memory - In the implementation block
@property (assign,nonatomic) unsigned long long pickerMode;                                //@synthesize pickerMode=_pickerMode - In the implementation block
-(MiroMemory *)memory;
-(void)viewDidLoad;
-(void)didReceiveMemoryWarning;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(id<PMPlayerControlling>)playerController;
-(void)setPlayerController:(id<PMPlayerControlling>)arg1 ;
-(void)setMemory:(MiroMemory *)arg1 ;
-(unsigned long long)pickerMode;
-(void)setPickerMode:(unsigned long long)arg1 ;
-(void)setMoodPartPicker:(PMDebugPickerViewController *)arg1 ;
-(PMDebugPickerViewController *)moodPartPicker;
@end

