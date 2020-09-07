/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKRandomDistribution.h>

@interface GKShuffledDistribution : GKRandomDistribution {

	long long _delta;
	float _uniformDistance;
	long long _lastInt;
	long long _nextIntsCapacity;
	long long _nextIntsCount;
	long long* _nextInts;

}
-(void)dealloc;
-(id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3 ;
-(long long)nextInt;
-(float)uniformDistance;
-(void)setUniformDistance:(float)arg1 ;
-(id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3 delta:(long long)arg4 ;
@end
