/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivityItemProvider.h>

@class SKUIProductPageItem, SKUIClientContext;

@interface SKUIDeferredActivityItemProvider : UIActivityItemProvider {

	SKUIProductPageItem* _productPageItem;
	SKUIClientContext* _clientContext;
	/*^block*/id _itemProvider;

}

@property (copy) id itemProvider;                                             //@synthesize itemProvider=_itemProvider - In the implementation block
@property (retain) SKUIClientContext * clientContext;                         //@synthesize clientContext=_clientContext - In the implementation block
@property (copy,readonly) SKUIProductPageItem * productPageItem;              //@synthesize productPageItem=_productPageItem - In the implementation block
+(id)placeholderItem;
-(id)itemProvider;
-(void)setItemProvider:(id)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIProductPageItem *)productPageItem;
-(id)initWithProductPageItem:(id)arg1 clientContext:(id)arg2 ;
-(id)initWithProductPageItemProvider:(/*^block*/id)arg1 clientContext:(id)arg2 ;
-(id)initWithProductPageItemProvider:(/*^block*/id)arg1 clientContext:(id)arg2 placeholderItem:(id)arg3 ;
@end

