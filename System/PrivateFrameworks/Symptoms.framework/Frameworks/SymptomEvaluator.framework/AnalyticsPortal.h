/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCListener, ServiceImpl;

@interface AnalyticsPortal : NSObject {

	NSXPCListener* listener;
	ServiceImpl* si;

}
+(id)sharedInstance;
+(void)shutdown;
+(void)clientTransactionsRelease;
+(void)setListeningPort:(const char*)arg1 queue:(id)arg2 ;
-(void)shutdown;
-(void)clientTransactionsRelease;
-(void)setListeningPort:(const char*)arg1 queue:(id)arg2 ;
@end

