/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STTimer;

@interface STTimerShowTimerAndPerformAction : AFSiriRequest {

	unsigned long long _action;
	STTimer* _timer;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)action;
-(id)timer;
-(id)_initWithTimer:(id)arg1 action:(unsigned long long)arg2 ;
@end

