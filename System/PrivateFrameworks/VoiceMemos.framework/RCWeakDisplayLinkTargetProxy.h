/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/RCDisplayLinkTargetProxy.h>

@class RCWeakRef;

@interface RCWeakDisplayLinkTargetProxy : RCDisplayLinkTargetProxy {

	RCWeakRef* _weakTarget;
	SEL _weakTargetSelector;

}
-(void)dealloc;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)displayLinkFired:(id)arg1 ;
@end
