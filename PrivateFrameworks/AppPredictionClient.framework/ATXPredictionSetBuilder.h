/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData;

@interface ATXPredictionSetBuilder : NSObject {

	NSMutableData* _data;
	int _predictionCount;
	BOOL _finished;

}
-(id)init;
-(id)finish;
-(void)recordPrediction:(id)arg1 score:(float)arg2 ;
@end

