/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBrightness/CBFilter.h>

@interface CBProxFilter : CBFilter {

	float _proxReleaseTime;
	BOOL _proxHasJustBeenRemoved;
	float _proxTriggerDelay;
	BOOL _triggered;

}

@property (assign,getter=isTriggered,nonatomic) BOOL triggered;              //@synthesize triggered=_triggered - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setTriggered:(BOOL)arg1 ;
-(id)handleALSEvent:(id)arg1 ;
-(id)handleProximityEvent:(id)arg1 ;
-(id)filterEvent:(id)arg1 ;
-(BOOL)isTriggered;
@end
