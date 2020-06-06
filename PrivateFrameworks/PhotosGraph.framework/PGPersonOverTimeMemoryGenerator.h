/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSString;

@interface PGPersonOverTimeMemoryGenerator : PGFeaturedMemoryGenerator {

	unsigned long long _numberOfInsufficientlyFacedRejects;
	unsigned long long _numberOfBuildFailureRejects;
	NSString* _personUUID;

}

@property (nonatomic,retain) NSString * personUUID;              //@synthesize personUUID=_personUUID - In the implementation block
-(NSString *)personUUID;
-(void)setPersonUUID:(NSString *)arg1 ;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(id)_computeOverTheTimeFacedAssetsForPersonWithUUID:(id)arg1 inFacedAssets:(id)arg2 ;
@end

