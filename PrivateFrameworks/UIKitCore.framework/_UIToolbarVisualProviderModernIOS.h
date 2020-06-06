/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIToolbarVisualProvider.h>
#import <UIKitCore/_UIBarButtonItemViewOwner.h>
#import <UIKitCore/_UIBarAppearanceChangeObserver.h>

@class _UIBarBackground, _UIBarBackgroundLayout, UIView, _UIToolbarContentView, NSString;

@interface _UIToolbarVisualProviderModernIOS : _UIToolbarVisualProvider <_UIBarButtonItemViewOwner, _UIBarAppearanceChangeObserver> {

	_UIBarBackground* _backgroundView;
	_UIBarBackgroundLayout* _backgroundViewLayout;
	UIView* _customBackgroundView;
	_UIToolbarContentView* _contentView;
	long long _itemDistribution;
	BOOL _useModernAppearance;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)_updateContentView;
-(void)appearance:(id)arg1 categoriesChanged:(long long)arg2 ;
-(void)setCustomBackgroundView:(id)arg1 ;
-(void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2 ;
-(void)_itemStandardViewNeedsUpdate:(id)arg1 ;
-(void)_itemDidChangeWidth:(id)arg1 ;
-(void)_itemDidChangeSelectionState:(id)arg1 ;
-(void)_itemDidChangeHiddenState:(id)arg1 ;
-(void)_itemDidChangeEnabledState:(id)arg1 ;
-(void)setItemDistribution:(long long)arg1 ;
-(long long)itemDistribution;
-(void)_itemDidChangeSecondaryActions:(id)arg1 ;
-(void)_itemDidChangeSecondaryActionState:(id)arg1 ;
-(id)appearanceObserver;
-(id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2 ;
-(CGSize)defaultSizeForOrientation:(long long)arg1 ;
-(void)updateArchivedSubviews:(id)arg1 ;
-(void)updateBackgroundGroupName;
-(void)setUseModernAppearance:(BOOL)arg1 ;
-(BOOL)useModernAppearance;
-(void)_updateBackgroundModern;
-(CGRect)backgroundFrame;
-(id)currentBackgroundView;
-(void)updateBarForStyle:(long long)arg1 ;
-(void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3 ;
-(BOOL)toolbarIsSmall;
-(void)updateBarBackgroundSize;
-(void)updateBarBackground;
-(void)updateAppearance;
-(id)_currentCustomBackground;
-(void)_setViewOwnersAndUpdateContentViewForItems:(id)arg1 withOldItems:(id)arg2 animated:(BOOL)arg3 ;
-(CGRect)_backgroundFrame;
-(void)_updateBackgroundLegacyForPosition:(long long)arg1 ;
@end

