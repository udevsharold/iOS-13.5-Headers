/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class _UIFocusMovementInfo, _UIFocusInputDeviceInfo;

@interface UIFocusMovementAction : BSAction

@property (nonatomic,readonly) _UIFocusMovementInfo * focusMovementInfo; 
@property (nonatomic,readonly) _UIFocusInputDeviceInfo * inputDeviceInfo; 
@property (nonatomic,readonly) BOOL shouldPerformHapticFeedback; 
-(long long)UIActionType;
-(BOOL)shouldPerformHapticFeedback;
-(_UIFocusInputDeviceInfo *)inputDeviceInfo;
-(id)initWithFocusMovementInfo:(id)arg1 inputDeviceInfo:(id)arg2 shouldPerformHapticFeedback:(BOOL)arg3 ;
-(id)initWithFocusMovementInfo:(id)arg1 ;
-(_UIFocusMovementInfo *)focusMovementInfo;
@end

