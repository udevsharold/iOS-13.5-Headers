/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PGTitleSpecCollection : NSObject {

	NSArray* _specPools;

}

@property (nonatomic,readonly) NSArray * specPools;              //@synthesize specPools=_specPools - In the implementation block
+(id)collectionWithSpecPools:(id)arg1 ;
-(id)description;
-(id)initWithSpecPools:(id)arg1 ;
-(id)allPossibleTitlesWithMomentNodes:(id)arg1 ;
-(id)allPossibleTitlesWithHighlightMomentNodes:(id)arg1 ;
-(id)_allPossibleTitlesWithMomentNodes:(id)arg1 forHighlight:(BOOL)arg2 ;
-(NSArray *)specPools;
@end

