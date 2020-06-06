/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTTimerObserver <NSObject>
@required
-(void)source:(id)arg1 didAddTimers:(id)arg2;
-(void)source:(id)arg1 didUpdateTimers:(id)arg2;
-(void)source:(id)arg1 didRemoveTimers:(id)arg2;
-(void)source:(id)arg1 didDismissTimer:(id)arg2;
-(void)source:(id)arg1 didFireTimer:(id)arg2;
-(void)nextTimerDidChange:(id)arg1;

@end

