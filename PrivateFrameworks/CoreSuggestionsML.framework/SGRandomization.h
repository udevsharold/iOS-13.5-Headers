/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSuggestionsML/CoreSuggestionsML-Structs.h>
@interface SGRandomization : NSObject
+(void)shuffleMutableArray:(id)arg1 withRng:(id)arg2 ;
+(void)shuffleMutableArray:(id)arg1 inRange:(NSRange)arg2 withRng:(id)arg3 ;
+(void)shuffleMutableArray:(id)arg1 inApproxEqualEpsilon:(double)arg2 withValueBlock:(/*^block*/id)arg3 withRng:(id)arg4 ;
+(id)shuffledSamplingWithoutReplacementForK:(unsigned long long)arg1 fromN:(unsigned long long)arg2 withRng:(id)arg3 ;
@end

