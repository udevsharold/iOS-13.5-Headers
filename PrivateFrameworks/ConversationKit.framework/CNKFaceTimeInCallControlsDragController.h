/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@interface CNKFaceTimeInCallControlsDragController : NSObject <UIGestureRecognizerDelegate> {

	 inCallControlsView;
	 constraintsController;
	 panGestureRecognizer;
	 animation;
	 delegate;
	 disabledScrollViews;

}

@property (assign,__weak,nonatomic) id<CNKFaceTimeInCallControlsDragControllerDelegate> delegate; 
@property (readonly,nonatomic) BOOL isDragging; 
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)init;
-(id<CNKFaceTimeInCallControlsDragControllerDelegate>)delegate;
-(void)setDelegate:(id<CNKFaceTimeInCallControlsDragControllerDelegate>)arg1 ;
-(BOOL)isDragging;
-(void)handlePanGestureRecognizer:(id)arg1 ;
-(id)initInCallControlsView:(id)arg1 constraintsController:(id)arg2 ;
-(void)resetGestureRecognizer;
@end

