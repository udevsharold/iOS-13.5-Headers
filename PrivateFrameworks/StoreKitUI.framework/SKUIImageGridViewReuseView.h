/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class NSMapTable, SKUIImageGridViewElement, NSArray, NSString;

@interface SKUIImageGridViewReuseView : SKUIViewReuseView <SKUIViewElementView> {

	NSMapTable* _imageViewToImageResourceCacheKey;
	NSMapTable* _viewElementViews;
	SKUIImageGridViewElement* _imageGridViewElement;
	NSArray* _imageViews;

}

@property (nonatomic,retain) NSArray * imageViews;                  //@synthesize imageViews=_imageViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
-(id)init;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setImageViews:(NSArray *)arg1 ;
-(NSArray *)imageViews;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
@end

