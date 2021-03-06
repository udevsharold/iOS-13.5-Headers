/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PowerUISignalMonitor <NSObject>
@required
+(id)monitorWithDelegate:(id)arg1;
-(void)startMonitoring;
-(void)stopMonitoring;
-(unsigned long long)signalID;
-(id)requiredFullChargeDate;

@end

