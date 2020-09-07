/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface VMUDebugTimer : NSObject {

	NSDate* _programStartTime;
	NSDate* _eventStartTime;
	NSString* _eventMessage;

}
+(id)sharedTimer;
+(id)sharedTimerIfCreated;
-(id)init;
-(void)stop;
-(void)_endEvent;
-(void)startWithMessage:(id)arg1 ;
@end
