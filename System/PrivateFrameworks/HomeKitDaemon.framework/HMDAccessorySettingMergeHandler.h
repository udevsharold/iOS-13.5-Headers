/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HMDAccessorySettingMergeHandler : NSObject
+(BOOL)mergeFirst:(id)arg1 second:(id)arg2 mergeStrategy:(id)arg3 ;
+(id)_mergeValidValueConstraintsFirst:(id)arg1 second:(id)arg2 ;
+(id)_mergeRangeConstraintsFirst:(id)arg1 second:(id)arg2 ;
+(id)_mergeFirst:(id)arg1 second:(id)arg2 mergedConstraints:(id)arg3 mergeStrategy:(id)arg4 ;
+(BOOL)_extractMinMaxStep:(id)arg1 minConstraint:(id*)arg2 maxConstraint:(id*)arg3 stepConstraint:(id*)arg4 first:(id)arg5 ;
+(BOOL)_isNumber:(id)arg1 betweenStart:(id)arg2 andEnd:(id)arg3 first:(id)arg4 ;
@end

