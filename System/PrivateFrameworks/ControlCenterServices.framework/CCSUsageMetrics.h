/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterServices.framework/ControlCenterServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CCSUsageMetrics : NSObject

@property (nonatomic,readonly) unsigned long long userInvocationCount; 
+(id)sharedInstance;
-(unsigned long long)userInvocationCount;
-(void)incrementUserInvocationCount;
@end

