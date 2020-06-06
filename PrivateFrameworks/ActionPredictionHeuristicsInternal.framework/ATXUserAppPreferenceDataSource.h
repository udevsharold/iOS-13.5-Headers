/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXHeuristicDevice;

@interface ATXUserAppPreferenceDataSource : NSObject {

	ATXHeuristicDevice* _device;

}
-(id)initWithDevice:(id)arg1 ;
-(BOOL)parametersExistInValidCombinationsForParameters:(id)arg1 andValidCombinations:(id)arg2 ;
-(BOOL)appSupportsParameterCombination:(id)arg1 forIntent:(id)arg2 forBundleId:(id)arg3 ;
-(void)preferredAppForIntentName:(id)arg1 andParameterCombination:(id)arg2 callback:(/*^block*/id)arg3 ;
@end

