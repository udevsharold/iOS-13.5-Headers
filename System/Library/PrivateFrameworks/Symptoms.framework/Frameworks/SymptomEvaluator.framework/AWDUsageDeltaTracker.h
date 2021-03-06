/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AWDUsageDeltaTracker : NSObject {

	int netType;
	int rootCause;
	unsigned long long startValue;
	unsigned long long lastValue;
	unsigned long long flowCount;

}
-(void)dealloc;
-(id)initForNetworkType:(int)arg1 rootCause:(int)arg2 startValue:(unsigned long long)arg3 ;
-(void)recordUsageValue:(unsigned long long)arg1 ;
-(void)recordFlowCount:(unsigned long long)arg1 ;
@end

