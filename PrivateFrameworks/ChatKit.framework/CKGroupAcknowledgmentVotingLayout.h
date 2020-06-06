/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSArray;

@interface CKGroupAcknowledgmentVotingLayout : UICollectionViewLayout {

	BOOL _isAnimatedLayoutChange;
	unsigned long long _layoutMode;
	long long _expandedSection;
	NSArray* _ballotItems;
	NSArray* _fromBallotItems;
	CGPoint _previousCollapsedContentOffset;
	CGSize _fromContentSize;
	CGPoint _fromContentOffset;

}

@property (nonatomic,copy) NSArray * ballotItems;                                 //@synthesize ballotItems=_ballotItems - In the implementation block
@property (assign,nonatomic) long long expandedSection;                           //@synthesize expandedSection=_expandedSection - In the implementation block
@property (assign,nonatomic) BOOL isAnimatedLayoutChange;                         //@synthesize isAnimatedLayoutChange=_isAnimatedLayoutChange - In the implementation block
@property (nonatomic,retain) NSArray * fromBallotItems;                           //@synthesize fromBallotItems=_fromBallotItems - In the implementation block
@property (assign,nonatomic) CGSize fromContentSize;                              //@synthesize fromContentSize=_fromContentSize - In the implementation block
@property (assign,nonatomic) CGPoint fromContentOffset;                           //@synthesize fromContentOffset=_fromContentOffset - In the implementation block
@property (assign,nonatomic) unsigned long long layoutMode;                       //@synthesize layoutMode=_layoutMode - In the implementation block
@property (assign,nonatomic) CGPoint previousCollapsedContentOffset;              //@synthesize previousCollapsedContentOffset=_previousCollapsedContentOffset - In the implementation block
-(id)init;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)finalizeAnimatedBoundsChange;
-(unsigned long long)layoutMode;
-(void)setLayoutMode:(unsigned long long)arg1 ;
-(long long)expandedSection;
-(void)preapareForLayoutAnimationAroundSection:(long long)arg1 ;
-(void)setPreviousCollapsedContentOffset:(CGPoint)arg1 ;
-(void)_setupAnimatedCollapsedLayout;
-(void)cleanupAnimationCache;
-(CGPoint)previousCollapsedContentOffset;
-(void)setIsAnimatedLayoutChange:(BOOL)arg1 ;
-(void)setExpandedSection:(long long)arg1 ;
-(void)setFromContentSize:(CGSize)arg1 ;
-(void)setFromContentOffset:(CGPoint)arg1 ;
-(NSArray *)ballotItems;
-(void)setFromBallotItems:(NSArray *)arg1 ;
-(long long)_numberOfBallots;
-(BOOL)isAnimatedLayoutChange;
-(CGSize)fromContentSize;
-(void)setBallotItems:(NSArray *)arg1 ;
-(BOOL)_shouldFillInFromCenter;
-(double)_totalBallotContainersWidth;
-(NSArray *)fromBallotItems;
-(CGPoint)fromContentOffset;
-(void)_initializeBallotItems;
-(void)_setupCollapsedLayout;
-(void)_setupExpandedLayout;
@end

