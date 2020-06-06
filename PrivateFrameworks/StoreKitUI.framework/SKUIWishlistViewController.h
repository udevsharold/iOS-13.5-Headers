/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIItemListTableDelegate.h>

@protocol SKUIWishlistDelegate;
@class _UIBackdropView, UIBarButtonItem, _UIContentUnavailableView, SKUIItemListTableViewController, SKUISyncWishlistOperation, SKUIWishlist, NSString;

@interface SKUIWishlistViewController : SKUIViewController <SKUIItemListTableDelegate> {

	_UIBackdropView* _backdropView;
	id<SKUIWishlistDelegate> _delegate;
	UIBarButtonItem* _deleteButton;
	BOOL _editing;
	_UIContentUnavailableView* _emptyWishlistView;
	SKUIItemListTableViewController* _itemListViewController;
	BOOL _reloadOnNextAppear;
	SKUISyncWishlistOperation* _syncOperation;
	SKUIWishlist* _wishlist;
	long long _wishlistState;

}

@property (assign,nonatomic,__weak) id<SKUIWishlistDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wishlistBarButtonItemWithClientContext:(id)arg1 ;
-(void)dealloc;
-(id<SKUIWishlistDelegate>)delegate;
-(void)setDelegate:(id<SKUIWishlistDelegate>)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(id)contentScrollView;
-(void)setClientContext:(id)arg1 ;
-(void)_updateDeleteButton;
-(void)_setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_doneAction:(id)arg1 ;
-(void)_deleteAction:(id)arg1 ;
-(void)itemList:(id)arg1 didRemoveItemAtIndexPath:(id)arg2 ;
-(void)itemList:(id)arg1 didDeselectItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemList:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_wishlistDidChangeNotification:(id)arg1 ;
-(id)_itemListViewController;
-(void)_reloadChildView;
-(long long)_wishlistState;
-(void)_syncWishlist;
-(void)_reloadWishlist;
-(void)_reloadNavigationBarAnimated:(BOOL)arg1 ;
-(void)_deleteItemsAtIndexPaths:(id)arg1 ;
-(id)_wishlist;
-(void)_finishSignInWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_signInAction:(id)arg1 ;
-(id)_emptyWishlistView;
-(void)_destroyEmptyWishlistView;
-(void)_toggleEditAction:(id)arg1 ;
-(BOOL)_isEditingEnabled;
-(void)_finishSyncWithResult:(BOOL)arg1 didChange:(BOOL)arg2 error:(id)arg3 ;
-(void)_reloadForAccountsChanged;
@end

