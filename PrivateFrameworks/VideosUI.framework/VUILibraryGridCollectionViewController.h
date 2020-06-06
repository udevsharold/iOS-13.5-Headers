/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/VUILibraryDataSourceDelegate.h>
#import <libobjc.A.dylib/VUIFamilySharingContentProtocol.h>

@protocol VUILibraryGridCollectionViewControllerDelegate;
@class VUIFamilyMember, NSMutableDictionary, VUICollectionHeaderView, UIBarButtonItem, NSString, VUIMediaEntitiesDataSource, VUIMediaEntityFetchRequest, UICollectionViewCell, VUIViewControllerContentPresenter, UICollectionViewDiffableDataSource, NSArray;

@interface VUILibraryGridCollectionViewController : UICollectionViewController <VUILibraryDataSourceDelegate, VUIFamilySharingContentProtocol> {

	BOOL _requiresRelayout;
	CGSize _cellSize;
	NSMutableDictionary* _cellMetrics;
	VUICollectionHeaderView* _sizingHeaderView;
	BOOL _hideLockupTitles;
	BOOL _forceBackButton;
	BOOL _waitingForFetch;
	VUIFamilyMember* _familyMember;
	id<VUILibraryGridCollectionViewControllerDelegate> _delegate;
	long long _gridFilter;
	long long _gridStyle;
	long long _gridType;
	UIBarButtonItem* _libraryBarButton;
	NSString* _pageType;
	VUIMediaEntitiesDataSource* _entitiesDataSource;
	VUIMediaEntityFetchRequest* _fetchRequest;
	UICollectionViewCell* _sizingCell;
	double _cellWidth;
	UIBarButtonItem* _currentNavBarButtonItem;
	VUIViewControllerContentPresenter* _contentPresenter;
	UICollectionViewDiffableDataSource* _diffableDataSource;
	NSArray* _mediaEntities;

}

@property (nonatomic,retain) VUIMediaEntitiesDataSource * entitiesDataSource;                                 //@synthesize entitiesDataSource=_entitiesDataSource - In the implementation block
@property (nonatomic,retain) VUIMediaEntityFetchRequest * fetchRequest;                                       //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,retain) UICollectionViewCell * sizingCell;                                               //@synthesize sizingCell=_sizingCell - In the implementation block
@property (assign,nonatomic) double cellWidth;                                                                //@synthesize cellWidth=_cellWidth - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * currentNavBarButtonItem;                                       //@synthesize currentNavBarButtonItem=_currentNavBarButtonItem - In the implementation block
@property (nonatomic,retain) VUIViewControllerContentPresenter * contentPresenter;                            //@synthesize contentPresenter=_contentPresenter - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * diffableDataSource;                         //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (assign,nonatomic) BOOL waitingForFetch;                                                            //@synthesize waitingForFetch=_waitingForFetch - In the implementation block
@property (nonatomic,retain) NSArray * mediaEntities;                                                         //@synthesize mediaEntities=_mediaEntities - In the implementation block
@property (assign,nonatomic,__weak) id<VUILibraryGridCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long gridFilter;                                                            //@synthesize gridFilter=_gridFilter - In the implementation block
@property (assign,nonatomic) long long gridStyle;                                                             //@synthesize gridStyle=_gridStyle - In the implementation block
@property (assign,nonatomic) long long gridType;                                                              //@synthesize gridType=_gridType - In the implementation block
@property (assign,nonatomic) BOOL hideLockupTitles;                                                           //@synthesize hideLockupTitles=_hideLockupTitles - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * libraryBarButton;                                              //@synthesize libraryBarButton=_libraryBarButton - In the implementation block
@property (assign,nonatomic) BOOL forceBackButton;                                                            //@synthesize forceBackButton=_forceBackButton - In the implementation block
@property (nonatomic,retain) NSString * pageType;                                                             //@synthesize pageType=_pageType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) VUIFamilyMember * familyMember;                                                  //@synthesize familyMember=_familyMember - In the implementation block
-(void)dealloc;
-(id<VUILibraryGridCollectionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VUILibraryGridCollectionViewControllerDelegate>)arg1 ;
-(VUIMediaEntityFetchRequest *)fetchRequest;
-(id)initWithDataSource:(id)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(void)_updateLayout;
-(void)setFetchRequest:(VUIMediaEntityFetchRequest *)arg1 ;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(VUIFamilyMember *)familyMember;
-(void)setFamilyMember:(VUIFamilyMember *)arg1 ;
-(NSString *)pageType;
-(void)setPageType:(NSString *)arg1 ;
-(UICollectionViewCell *)sizingCell;
-(void)setSizingCell:(UICollectionViewCell *)arg1 ;
-(long long)gridType;
-(id)_createCollectionView;
-(VUIViewControllerContentPresenter *)contentPresenter;
-(void)setContentPresenter:(VUIViewControllerContentPresenter *)arg1 ;
-(void)setCellWidth:(double)arg1 ;
-(double)cellWidth;
-(void)_updateNavigationBarPadding;
-(id)_createDiffableDataSourceSnapshot;
-(NSArray *)mediaEntities;
-(void)dataSourceDidFinishFetching:(id)arg1 ;
-(void)dataSourceDidFinishFetchingArtwork:(id)arg1 ;
-(void)setMediaEntities:(NSArray *)arg1 ;
-(long long)gridStyle;
-(double)_computeBottomMargin;
-(id)_getEntityIdentifiersFromEntities;
-(void)_applySnapshotFromEntitiesAndAnimateDifferences:(BOOL)arg1 ;
-(id)_createDiffableDataSource;
-(VUIMediaEntitiesDataSource *)entitiesDataSource;
-(void)setWaitingForFetch:(BOOL)arg1 ;
-(void)_updateCurrentViewIfNeeded;
-(void)_applyInitialSnapshot;
-(void)_configureSizingCellForItemAtIndexPath:(id)arg1 ;
-(BOOL)waitingForFetch;
-(void)_iOSHandleCellSelectionAtIndexPath:(id)arg1 ;
-(id)_createCollectionViewFlowLayout;
-(BOOL)hideLockupTitles;
-(void)updateWithLatestMediaEntities:(id)arg1 ;
-(void)setTitle:(id)arg1 withLargeTitleDisplayEnabled:(BOOL)arg2 ;
-(long long)gridFilter;
-(void)setGridFilter:(long long)arg1 ;
-(void)setGridStyle:(long long)arg1 ;
-(void)setGridType:(long long)arg1 ;
-(void)setHideLockupTitles:(BOOL)arg1 ;
-(UIBarButtonItem *)libraryBarButton;
-(void)setLibraryBarButton:(UIBarButtonItem *)arg1 ;
-(BOOL)forceBackButton;
-(void)setForceBackButton:(BOOL)arg1 ;
-(void)setEntitiesDataSource:(VUIMediaEntitiesDataSource *)arg1 ;
-(UIBarButtonItem *)currentNavBarButtonItem;
-(void)setCurrentNavBarButtonItem:(UIBarButtonItem *)arg1 ;
@end

