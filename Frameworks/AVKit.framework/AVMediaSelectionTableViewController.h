/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class AVMediaSelectionOption, AVPlayerController;

@interface AVMediaSelectionTableViewController : UITableViewController {

	AVMediaSelectionOption* _selectedAudioMediaSelectionOption;
	AVMediaSelectionOption* _selectedLegibleMediaSelectionOption;
	AVPlayerController* _playerController;

}

@property (nonatomic,retain) AVPlayerController * playerController;              //@synthesize playerController=_playerController - In the implementation block
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)playerControllerMediaSelectionChanged:(id)arg1 ;
-(BOOL)_isSelectedOrCurrentAudioMediaSelectionOption:(id)arg1 ;
-(BOOL)_isSelectedOrCurrentLegibleMediaSelectionOption:(id)arg1 ;
@end

