/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HULockIconStateTransition : NSObject {

	unsigned long long _fromState;
	unsigned long long _toState;

}

@property (nonatomic,readonly) unsigned long long fromState;              //@synthesize fromState=_fromState - In the implementation block
@property (nonatomic,readonly) unsigned long long toState;                //@synthesize toState=_toState - In the implementation block
+(id)transitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(unsigned long long)fromState;
-(unsigned long long)toState;
@end

