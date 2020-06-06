/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SIMToolkitUI/STKAlertSession.h>

@class STKSessionBehavior;

@interface STKSIMToolkitAlertSession : STKAlertSession {

	long long _event;
	STKSessionBehavior* _behavior;

}

@property (nonatomic,readonly) long long event;                            //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) STKSessionBehavior * behavior;              //@synthesize behavior=_behavior - In the implementation block
-(long long)event;
-(STKSessionBehavior *)behavior;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)sendResponse:(long long)arg1 withBOOLResult:(BOOL)arg2 ;
-(void)sendSuccessWithSelectedIndex:(unsigned long long)arg1 ;
-(id)initWithLogger:(id)arg1 responseProvider:(id)arg2 event:(long long)arg3 options:(id)arg4 behavior:(id)arg5 sound:(id)arg6 ;
@end

