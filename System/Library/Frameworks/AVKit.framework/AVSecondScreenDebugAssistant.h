/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVPlayer, UIScene, NSString, AVSecondScreenViewController, CADisplay, AVObservationController;

@interface AVSecondScreenDebugAssistant : NSObject {

	AVPlayer* _player;
	UIScene* _scene;
	NSString* _debugText;
	AVSecondScreenViewController* _secondScreenViewController;
	CADisplay* _debugInfoDisplay;
	AVObservationController* _observationController;

}

@property (nonatomic,retain) CADisplay * debugInfoDisplay;                                                  //@synthesize debugInfoDisplay=_debugInfoDisplay - In the implementation block
@property (nonatomic,retain) AVObservationController * observationController;                               //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                             //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) UIScene * scene;                                                        //@synthesize scene=_scene - In the implementation block
@property (nonatomic,copy) NSString * debugText;                                                            //@synthesize debugText=_debugText - In the implementation block
@property (assign,nonatomic,__weak) AVSecondScreenViewController * secondScreenViewController;              //@synthesize secondScreenViewController=_secondScreenViewController - In the implementation block
-(id)init;
-(void)dealloc;
-(UIScene *)scene;
-(void)setScene:(UIScene *)arg1 ;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVObservationController *)observationController;
-(CADisplay *)debugInfoDisplay;
-(void)setDebugInfoDisplay:(CADisplay *)arg1 ;
-(void)setObservationController:(AVObservationController *)arg1 ;
-(void)setDebugText:(NSString *)arg1 ;
-(void)setSecondScreenViewController:(AVSecondScreenViewController *)arg1 ;
-(id)_currentEnabledVideoTrack;
-(id)_currentDisplay;
-(id)_currentVideoDynamicRange;
-(void)_updateDebugLabelText;
-(void)_actuallyUpdateDebugLabelTextWithCurrentResolution:(id)arg1 currentVideoDynamicRange:(id)arg2 ;
-(NSString *)debugText;
-(AVSecondScreenViewController *)secondScreenViewController;
@end

