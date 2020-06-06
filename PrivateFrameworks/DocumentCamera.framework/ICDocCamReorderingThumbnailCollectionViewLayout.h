/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol ICDocCamThumbnailViewLayoutDelegate;
@class NSArray, NSMutableArray, NSString;

@interface ICDocCamReorderingThumbnailCollectionViewLayout : UICollectionViewLayout <UICollectionViewDelegate> {

	BOOL _movingItem;
	BOOL _isScrollingBetweenPages;
	BOOL _isScrubbing;
	BOOL _isUndergoingOrientationChange;
	BOOL _layoutCacheIsValid;
	id<ICDocCamThumbnailViewLayoutDelegate> _delegate;
	double _itemSpacing;
	double _topBottomMargins;
	double _leftMargin;
	double _rightMargin;
	double _itemHeight;
	NSArray* _itemAttributes;
	NSMutableArray* _imageSizeCache;
	unsigned long long _currentItem;
	double _currentInterPageScrollPosition;
	NSMutableArray* _deleteIndexPaths;
	NSMutableArray* _insertIndexPaths;
	CGSize _cachedContentSize;

}

@property (assign,nonatomic) double itemSpacing;                                                     //@synthesize itemSpacing=_itemSpacing - In the implementation block
@property (assign,nonatomic) double topBottomMargins;                                                //@synthesize topBottomMargins=_topBottomMargins - In the implementation block
@property (assign,nonatomic) double leftMargin;                                                      //@synthesize leftMargin=_leftMargin - In the implementation block
@property (assign,nonatomic) double rightMargin;                                                     //@synthesize rightMargin=_rightMargin - In the implementation block
@property (assign,nonatomic) double itemHeight;                                                      //@synthesize itemHeight=_itemHeight - In the implementation block
@property (assign,nonatomic) BOOL layoutCacheIsValid;                                                //@synthesize layoutCacheIsValid=_layoutCacheIsValid - In the implementation block
@property (assign,nonatomic) CGSize cachedContentSize;                                               //@synthesize cachedContentSize=_cachedContentSize - In the implementation block
@property (nonatomic,copy) NSArray * itemAttributes;                                                 //@synthesize itemAttributes=_itemAttributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageSizeCache;                                        //@synthesize imageSizeCache=_imageSizeCache - In the implementation block
@property (assign,nonatomic) unsigned long long currentItem;                                         //@synthesize currentItem=_currentItem - In the implementation block
@property (assign,nonatomic) double currentInterPageScrollPosition;                                  //@synthesize currentInterPageScrollPosition=_currentInterPageScrollPosition - In the implementation block
@property (nonatomic,readonly) double extraSpacingForCurrentItem; 
@property (nonatomic,retain) NSMutableArray * deleteIndexPaths;                                      //@synthesize deleteIndexPaths=_deleteIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableArray * insertIndexPaths;                                      //@synthesize insertIndexPaths=_insertIndexPaths - In the implementation block
@property (nonatomic,__weak,readonly) id<ICDocCamThumbnailViewLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL movingItem;                                                        //@synthesize movingItem=_movingItem - In the implementation block
@property (assign,nonatomic) BOOL isScrollingBetweenPages;                                           //@synthesize isScrollingBetweenPages=_isScrollingBetweenPages - In the implementation block
@property (assign,nonatomic) BOOL isScrubbing;                                                       //@synthesize isScrubbing=_isScrubbing - In the implementation block
@property (assign,nonatomic) BOOL isUndergoingOrientationChange;                                     //@synthesize isUndergoingOrientationChange=_isUndergoingOrientationChange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)effectiveAspectRatioForSize:(CGSize)arg1 ;
-(id<ICDocCamThumbnailViewLayoutDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)setCurrentItem:(unsigned long long)arg1 ;
-(unsigned long long)currentItem;
-(void)setLeftMargin:(double)arg1 ;
-(void)setRightMargin:(double)arg1 ;
-(void)setItemSpacing:(double)arg1 ;
-(double)itemSpacing;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(CGSize)collectionViewContentSize;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)setDeleteIndexPaths:(NSMutableArray *)arg1 ;
-(void)setInsertIndexPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)deleteIndexPaths;
-(NSMutableArray *)insertIndexPaths;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(double)rightMargin;
-(BOOL)isScrubbing;
-(CGSize)cachedContentSize;
-(void)setCachedContentSize:(CGSize)arg1 ;
-(double)itemHeight;
-(void)setIsScrubbing:(BOOL)arg1 ;
-(double)leftMargin;
-(void)setItemAttributes:(NSArray *)arg1 ;
-(NSArray *)itemAttributes;
-(CGSize)itemSizeForImageSize:(CGSize)arg1 ;
-(void)setIsUndergoingOrientationChange:(BOOL)arg1 ;
-(BOOL)movingItem;
-(BOOL)isScrollingBetweenPages;
-(void)setIsScrollingBetweenPages:(BOOL)arg1 ;
-(void)setInterPageScrollPosition:(double)arg1 ;
-(void)setCurrentItem:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setMovingItem:(BOOL)arg1 ;
-(void)updateLayoutCacheIfNecessary;
-(void)setCurrentInterPageScrollPosition:(double)arg1 ;
-(void)setContentOffsetForItem:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(double)horizontalContentOffsetAdjustmentForItem:(unsigned long long)arg1 ;
-(double)extraSpacingForCurrentItem;
-(NSMutableArray *)imageSizeCache;
-(void)setLayoutCacheIsValid:(BOOL)arg1 ;
-(void)setImageSizeCache:(NSMutableArray *)arg1 ;
-(double)horizontalContentOffsetForItem:(unsigned long long)arg1 ;
-(BOOL)isUndergoingOrientationChange;
-(BOOL)layoutCacheIsValid;
-(double)topBottomMargins;
-(void)setItemHeight:(double)arg1 ;
-(double)currentInterPageScrollPosition;
-(void)setTopBottomMargins:(double)arg1 ;
@end

