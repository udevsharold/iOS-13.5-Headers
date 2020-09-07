/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REPredictor.h>

@interface RETimePredictor : REPredictor
+(double)updateInterval;
+(id)supportedFeatures;
-(void)update;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
@end
