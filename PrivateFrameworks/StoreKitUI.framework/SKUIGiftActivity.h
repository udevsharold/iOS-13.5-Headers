/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>
#import <libobjc.A.dylib/SKUIGiftViewControllerDelegate.h>

@class SKUIClientContext, SKUIProductPageItem, NSString;

@interface SKUIGiftActivity : UIActivity <SKUIGiftViewControllerDelegate> {

	SKUIClientContext* _clientContext;
	SKUIProductPageItem* _item;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(id)activityImage;
-(id)_beforeActivity;
-(void)giftViewController:(id)arg1 didFinishWithResult:(BOOL)arg2 ;
-(id)initWithItem:(id)arg1 clientContext:(id)arg2 ;
@end

