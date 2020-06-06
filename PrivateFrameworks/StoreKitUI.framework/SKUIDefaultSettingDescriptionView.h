/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUISettingDescriptionView.h>

@class UIView, SKUIViewReuseView;

@interface SKUIDefaultSettingDescriptionView : SKUISettingDescriptionView {

	BOOL _hasDisclosureChevron;
	UIEdgeInsets _padding;
	UIView* _viewElementView;
	SKUIViewReuseView* _viewReuseView;

}
+(BOOL)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3 ;
+(UIEdgeInsets)_paddingForStyle:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)hasDisclosureChevron;
@end

