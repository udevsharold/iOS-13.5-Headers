/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/_TVCollectionViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UICollectionView, IKViewElement, NSArray, IKHeaderElement, VUIFavoriteCollectionViewCell, VUICollectionHeaderView, VUICollectionFooterView, VUISportsFavoritesContainerView, NSString;

@interface VUISportsFavoritesTemplateController : _TVBgImageLoadingViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, _TVCollectionViewDelegate, UIGestureRecognizerDelegate> {

	BOOL _requiresRelayout;
	UICollectionView* _collectionView;
	IKViewElement* _templateElement;
	NSArray* _sectionElements;
	IKHeaderElement* _headerElement;
	IKViewElement* _footerElement;
	VUIFavoriteCollectionViewCell* _computationCell;
	VUICollectionHeaderView* _computationHeaderView;
	VUICollectionFooterView* _computationFooterView;
	VUISportsFavoritesContainerView* _containerView;

}

@property (nonatomic,retain) UICollectionView * collectionView;                            //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IKViewElement * templateElement;                              //@synthesize templateElement=_templateElement - In the implementation block
@property (nonatomic,retain) NSArray * sectionElements;                                    //@synthesize sectionElements=_sectionElements - In the implementation block
@property (nonatomic,retain) IKHeaderElement * headerElement;                              //@synthesize headerElement=_headerElement - In the implementation block
@property (nonatomic,retain) IKViewElement * footerElement;                                //@synthesize footerElement=_footerElement - In the implementation block
@property (nonatomic,retain) VUIFavoriteCollectionViewCell * computationCell;              //@synthesize computationCell=_computationCell - In the implementation block
@property (nonatomic,retain) VUICollectionHeaderView * computationHeaderView;              //@synthesize computationHeaderView=_computationHeaderView - In the implementation block
@property (nonatomic,retain) VUICollectionFooterView * computationFooterView;              //@synthesize computationFooterView=_computationFooterView - In the implementation block
@property (nonatomic,retain) VUISportsFavoritesContainerView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didCancel;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(VUISportsFavoritesContainerView *)containerView;
-(void)setContainerView:(VUISportsFavoritesContainerView *)arg1 ;
-(UICollectionView *)collectionView;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(IKViewElement *)templateElement;
-(void)setTemplateElement:(IKViewElement *)arg1 ;
-(IKHeaderElement *)headerElement;
-(void)updateWithViewElement:(id)arg1 ;
-(IKViewElement *)footerElement;
-(void)_animateSectionElementsChanges;
-(CGSize)_expectedCellSizeForElement:(id)arg1 collectionView:(id)arg2 atIndexPath:(id)arg3 ;
-(NSArray *)sectionElements;
-(void)setSectionElements:(NSArray *)arg1 ;
-(void)setHeaderElement:(IKHeaderElement *)arg1 ;
-(void)setFooterElement:(IKViewElement *)arg1 ;
-(VUIFavoriteCollectionViewCell *)computationCell;
-(void)setComputationCell:(VUIFavoriteCollectionViewCell *)arg1 ;
-(VUICollectionHeaderView *)computationHeaderView;
-(void)setComputationHeaderView:(VUICollectionHeaderView *)arg1 ;
-(VUICollectionFooterView *)computationFooterView;
-(void)setComputationFooterView:(VUICollectionFooterView *)arg1 ;
@end

