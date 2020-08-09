/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
@class NSMutableArray, NSNumber;

@interface WFLSMResult : NSObject {

	NSMutableArray* categoryJudgements;
	NSNumber* threshold;

}

@property (copy) NSNumber * threshold; 
+(id)LSMResultWithLSMResultRef:(LSMResultRef)arg1 threshold:(id)arg2 ;
+(id)extractScoresFromLSMResults:(LSMResultRef)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(BOOL)isRestricted;
-(NSNumber *)threshold;
-(void)setThreshold:(NSNumber *)arg1 ;
-(long long)numberOfCategories;
-(id)initWithLSMResultRef:(LSMResultRef)arg1 threshold:(id)arg2 ;
-(long long)bestMatchingCategory;
-(float)scoreForCategory:(long long)arg1 ;
-(void)setScore:(float)arg1 forCategory:(long long)arg2 ;
@end
