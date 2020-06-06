/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIView;

@interface SearchUIBackgroundView : UIView {

	BOOL _shouldUseInsetRoundedSections;
	BOOL _inPreviewPlatter;
	UIView* _platterView;

}

@property (retain) UIView * platterView;                                                   //@synthesize platterView=_platterView - In the implementation block
@property (assign,nonatomic) BOOL shouldUseInsetRoundedSections;                           //@synthesize shouldUseInsetRoundedSections=_shouldUseInsetRoundedSections - In the implementation block
@property (assign,getter=isInPreviewPlatter,nonatomic) BOOL inPreviewPlatter;              //@synthesize inPreviewPlatter=_inPreviewPlatter - In the implementation block
-(id)init;
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setPlatterView:(UIView *)arg1 ;
-(UIView *)platterView;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(BOOL)shouldUseInsetRoundedSections;
-(void)setInPreviewPlatter:(BOOL)arg1 ;
-(BOOL)isInPreviewPlatter;
@end

