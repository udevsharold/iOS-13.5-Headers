/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLUbiquitousItemFetcher.h>
#import <libobjc.A.dylib/FPItemCollectionDelegate.h>

@class FPItem, QLURLHandler, FPItemCollection, NSString;

@interface QLFPItemFetcher : QLUbiquitousItemFetcher <FPItemCollectionDelegate> {

	FPItem* _fpItem;
	QLURLHandler* _fetchedURLHandler;
	FPItemCollection* _itemCollection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)fileURL;
-(id)itemSize;
-(id)shareableItem;
-(BOOL)isLongFetchOperation;
-(void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)prepareShareableItem:(/*^block*/id)arg1 ;
-(void)_registerItemCollectionIfNeeded;
-(void)_unregisterItemCollectionIfNeeded;
-(void)_urlHandler:(/*^block*/id)arg1 ;
-(void)dataForCollectionShouldBeReloaded:(id)arg1 ;
-(void)collection:(id)arg1 didUpdateObservedItem:(id)arg2 ;
-(void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3 ;
-(void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2 ;
-(void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3 ;
-(void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(/*^block*/id)arg2 ;
-(id)initWithFPItem:(id)arg1 shouldZipPackageIfNeeded:(BOOL)arg2 ;
@end
