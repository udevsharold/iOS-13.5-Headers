/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSString, NSCountedSet;

@interface FCTopicalNode : NSObject <NSCopying> {

	double _score;
	BOOL _scored;
	NSSet* _identifiers;
	NSString* _identifier;
	NSSet* _displayedElements;
	NSCountedSet* _topicCollections;
	FCTopicalNode* _parent;
	NSSet* _children;
	double _scoreMultiplier;
	double _relatedness;
	double _specificity;
	double _parentRawScore;
	double _relatednessThreshold;
	double _relatednessKWeight;
	double _topicScoreWeight;
	double _highestScoringRelativeScoreMultiplier;
	NSString* _storedNodeIdentifier;

}

@property (retain) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSSet * identifiers;                                       //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,retain) NSSet * displayedElements;                                 //@synthesize displayedElements=_displayedElements - In the implementation block
@property (nonatomic,retain) NSCountedSet * topicCollections;                           //@synthesize topicCollections=_topicCollections - In the implementation block
@property (assign,nonatomic,__weak) FCTopicalNode * parent;                             //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) NSSet * children;                                          //@synthesize children=_children - In the implementation block
@property (assign,nonatomic) double score; 
@property (assign,nonatomic) double scoreMultiplier;                                    //@synthesize scoreMultiplier=_scoreMultiplier - In the implementation block
@property (assign,nonatomic) BOOL scored;                                               //@synthesize scored=_scored - In the implementation block
@property (assign,nonatomic) double relatedness;                                        //@synthesize relatedness=_relatedness - In the implementation block
@property (assign,nonatomic) double specificity;                                        //@synthesize specificity=_specificity - In the implementation block
@property (assign,nonatomic) double parentRawScore;                                     //@synthesize parentRawScore=_parentRawScore - In the implementation block
@property (assign,nonatomic) double relatednessThreshold;                               //@synthesize relatednessThreshold=_relatednessThreshold - In the implementation block
@property (assign,nonatomic) double relatednessKWeight;                                 //@synthesize relatednessKWeight=_relatednessKWeight - In the implementation block
@property (assign,nonatomic) double topicScoreWeight;                                   //@synthesize topicScoreWeight=_topicScoreWeight - In the implementation block
@property (assign,nonatomic) double highestScoringRelativeScoreMultiplier;              //@synthesize highestScoringRelativeScoreMultiplier=_highestScoringRelativeScoreMultiplier - In the implementation block
@property (nonatomic,retain) NSString * storedNodeIdentifier;                           //@synthesize storedNodeIdentifier=_storedNodeIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCTopicalNode *)parent;
-(void)setParent:(FCTopicalNode *)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(double)score;
-(void)setScore:(double)arg1 ;
-(NSSet *)children;
-(void)setChildren:(NSSet *)arg1 ;
-(NSSet *)identifiers;
-(void)setIdentifiers:(NSSet *)arg1 ;
-(void)setSpecificity:(double)arg1 ;
-(double)specificity;
-(double)relatednessKWeight;
-(double)relatednessThreshold;
-(double)relatedness;
-(double)parentRawScore;
-(void)setRelatedness:(double)arg1 ;
-(void)setParentRawScore:(double)arg1 ;
-(id)leaves;
-(BOOL)scored;
-(void)setScored:(BOOL)arg1 ;
-(double)scoreMultiplier;
-(double)topicScoreWeight;
-(NSSet *)displayedElements;
-(id)calculateLeafScoresWithTopicScoreProvider:(/*^block*/id)arg1 ;
-(double)individualScoreWithTopicScoreProvider:(/*^block*/id)arg1 ;
-(void)calculateNonLeafScoresWithTopicProvider:(/*^block*/id)arg1 ;
-(double)highestScoringRelativeScoreMultiplier;
-(void)setScoreMultiplier:(double)arg1 ;
-(id)initWithIdentifier:(id)arg1 displayedElements:(id)arg2 allTopicCollections:(id)arg3 relatednessThreshold:(double)arg4 relatednessKWeight:(double)arg5 topicScoreWeight:(double)arg6 highestScoringRelativeScoreMultiplier:(double)arg7 ;
-(void)considerEdge:(id)arg1 withNodeScorer:(/*^block*/id)arg2 ;
-(void)calculateScoreWithTopicScoreProvider:(/*^block*/id)arg1 ;
-(void)setDisplayedElements:(NSSet *)arg1 ;
-(NSCountedSet *)topicCollections;
-(void)setTopicCollections:(NSCountedSet *)arg1 ;
-(void)setRelatednessThreshold:(double)arg1 ;
-(void)setRelatednessKWeight:(double)arg1 ;
-(void)setTopicScoreWeight:(double)arg1 ;
-(void)setHighestScoringRelativeScoreMultiplier:(double)arg1 ;
-(NSString *)storedNodeIdentifier;
-(void)setStoredNodeIdentifier:(NSString *)arg1 ;
@end

