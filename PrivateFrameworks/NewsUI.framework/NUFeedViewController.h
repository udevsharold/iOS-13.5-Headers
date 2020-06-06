/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol NUFeedDataProvider, NUFeedTriggerProvider;
@class UICollectionView, NSString;

@interface NUFeedViewController : UIViewController <UICollectionViewDataSource> {

	BOOL _viewHasAppearedOnce;
	id<NUFeedDataProvider> _feedDataProvider;
	id<NUFeedTriggerProvider> _feedTriggerProvider;
	UICollectionView* _collectionView;
	CGRect _laidOutBounds;

}

@property (nonatomic,readonly) id<NUFeedDataProvider> feedDataProvider;                    //@synthesize feedDataProvider=_feedDataProvider - In the implementation block
@property (nonatomic,readonly) id<NUFeedTriggerProvider> feedTriggerProvider;              //@synthesize feedTriggerProvider=_feedTriggerProvider - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                          //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) BOOL viewHasAppearedOnce;                                     //@synthesize viewHasAppearedOnce=_viewHasAppearedOnce - In the implementation block
@property (assign,nonatomic) CGRect laidOutBounds;                                         //@synthesize laidOutBounds=_laidOutBounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)viewHasAppearedOnce;
-(void)setViewHasAppearedOnce:(BOOL)arg1 ;
-(id<NUFeedTriggerProvider>)feedTriggerProvider;
-(CGRect)laidOutBounds;
-(void)setLaidOutBounds:(CGRect)arg1 ;
-(id<NUFeedDataProvider>)feedDataProvider;
-(id)initWithFeedDataProvider:(id)arg1 feedTriggerProvider:(id)arg2 ;
@end

