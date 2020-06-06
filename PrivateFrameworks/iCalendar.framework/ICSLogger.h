/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICSLoggingDelegate;
@interface ICSLogger : NSObject {

	int _logCount;
	id<ICSLoggingDelegate> _loggingDelegate;

}
+(id)sharedInstance;
+(void)setDelegate:(id)arg1 ;
+(void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 message:(id)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 format:(id)arg3 args:(char*)arg4 ;
@end

