/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIView, NSMutableArray;

@interface CACContainerViewController : UIViewController {

	UIView* _viewAboveContainedViews;
	NSMutableArray* _viewControllers;

}

@property (nonatomic,retain) NSMutableArray * viewControllers;                //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,readonly) UIView * viewAboveContainedViews; 
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(NSMutableArray *)viewControllers;
-(void)setViewControllers:(NSMutableArray *)arg1 ;
-(UIView *)viewAboveContainedViews;
-(void)installViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)uninstallViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end
