/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StocksUI/StocksUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>

@interface StocksUI.StockFeedViewController : UIViewController <UICollectionViewDelegate> {

	 styler;
	 eventHandler;
	 blueprintViewController;
	 blueprintSelectionProvider;
	 sharingActivityProviderFactory;
	 stock;
	 cardViewScrollViewCoordinator;
	 alertPresenter;
	 statusBarView;
	 stockFeedTitleView;
	 overlayView;

}

@property (readonly,nonatomic) long long preferredStatusBarStyle; 
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

