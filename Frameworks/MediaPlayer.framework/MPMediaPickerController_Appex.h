/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPMediaPickerRemoteViewLoader.h>

@class MPMediaPickerController, UIViewController, _UIResilientRemoteViewContainerViewController, MPMusicMediaPickerRemoteViewController, NSString;

@interface MPMediaPickerController_Appex : NSObject <MPMediaPickerRemoteViewLoader> {

	_UIResilientRemoteViewContainerViewController* _remoteViewContainerViewController;
	MPMusicMediaPickerRemoteViewController* _musicRemoteViewController;
	MPMediaPickerController* _mediaPickerController;
	UIViewController* _remoteViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) MPMediaPickerController * mediaPickerController;              //@synthesize mediaPickerController=_mediaPickerController - In the implementation block
@property (nonatomic,readonly) UIViewController * remoteViewController;                           //@synthesize remoteViewController=_remoteViewController - In the implementation block
-(void)dealloc;
-(UIViewController *)remoteViewController;
-(void)requestRemoteViewController;
-(void)synchronizeSettings;
-(MPMediaPickerController *)mediaPickerController;
-(void)setMediaPickerController:(MPMediaPickerController *)arg1 ;
-(id)serviceController;
@end

