/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TISKEvent.h>

@class TIKeyboardCandidate, TIKeyboardTouchEvent;

@interface TISKPathEvent : TISKEvent {

	TIKeyboardCandidate* _candidate;
	TIKeyboardTouchEvent* _pathTouchUp;

}
-(id)description;
-(void)reportToSession:(id)arg1 ;
-(void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2 ;
-(BOOL)isMissingATouch;
-(id)init:(id)arg1 candidate:(id)arg2 order:(long long)arg3 ;
@end

