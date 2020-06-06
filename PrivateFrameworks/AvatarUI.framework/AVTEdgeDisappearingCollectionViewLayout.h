/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class UICollectionViewLayoutAttributes;

@interface AVTEdgeDisappearingCollectionViewLayout : UICollectionViewFlowLayout {

	BOOL _enableEdgeDisappearing;
	BOOL _pinHeaderToVisible;
	UICollectionViewLayoutAttributes* _fixedHeaderLayoutAttributes;

}

@property (nonatomic,retain) UICollectionViewLayoutAttributes * fixedHeaderLayoutAttributes;              //@synthesize fixedHeaderLayoutAttributes=_fixedHeaderLayoutAttributes - In the implementation block
@property (assign,nonatomic) BOOL enableEdgeDisappearing;                                                 //@synthesize enableEdgeDisappearing=_enableEdgeDisappearing - In the implementation block
@property (assign,nonatomic) BOOL pinHeaderToVisible;                                                     //@synthesize pinHeaderToVisible=_pinHeaderToVisible - In the implementation block
-(BOOL)isRTL;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setFixedHeaderLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(BOOL)pinHeaderToVisible;
-(void)modifyLayoutAttributes:(id)arg1 ;
-(BOOL)enableEdgeDisappearing;
-(UICollectionViewLayoutAttributes *)fixedHeaderLayoutAttributes;
-(void)setEnableEdgeDisappearing:(BOOL)arg1 ;
-(void)setPinHeaderToVisible:(BOOL)arg1 ;
@end

