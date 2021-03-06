/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGBestOfPastMemoryGenerator : PGMemoryGenerator {

	NSDate* _localStartDate;
	NSDate* _localEndDate;

}

@property (assign,nonatomic) NSDate * localStartDate;              //@synthesize localStartDate=_localStartDate - In the implementation block
@property (assign,nonatomic) NSDate * localEndDate;                //@synthesize localEndDate=_localEndDate - In the implementation block
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(void)setLocalStartDate:(NSDate *)arg1 ;
-(void)setLocalEndDate:(NSDate *)arg1 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
@end

