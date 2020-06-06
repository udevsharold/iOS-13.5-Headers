/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGTitleGenerator.h>

@class NSSet;

@interface PGPeopleMemoryTitleGenerator : PGTitleGenerator {

	unsigned long long _type;
	NSSet* _personNodes;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSSet * personNodes;                  //@synthesize personNodes=_personNodes - In the implementation block
-(unsigned long long)type;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)initWithMomentNodes:(id)arg1 personNodes:(id)arg2 type:(unsigned long long)arg3 ;
-(id)_titleForPeople;
-(id)_titleForSocialGroup;
-(id)_titleForEarlyMoments;
-(id)_timeTitleForEarlyMoments;
-(BOOL)_person:(id)arg1 isPresentInAnyMomentOfMoments:(id)arg2 ;
-(id)_birthdayTitleForPeople;
-(id)_timeTitleForPeople;
-(BOOL)_useSplitTimeTitlesIfNeeded;
-(NSSet *)personNodes;
@end

