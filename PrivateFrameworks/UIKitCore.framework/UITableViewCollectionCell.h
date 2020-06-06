/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UICollectionViewTableAllRowAttributes.h>

@class UIColor, UIVisualEffect;

@interface UITableViewCollectionCell : UITableViewCell <UICollectionViewTableAllRowAttributes>

@property (assign,nonatomic) long long separatorStyle; 
@property (assign,nonatomic) UIEdgeInsets separatorInset; 
@property (assign,nonatomic) BOOL separatorInsetIsRelativeToCellEdges; 
@property (nonatomic,copy) UIColor * separatorColor; 
@property (nonatomic,retain) UIVisualEffect * separatorEffect; 
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (assign,nonatomic) int sectionLocation; 
@property (assign,nonatomic) BOOL layoutMarginsFollowReadableWidth; 
@property (assign,nonatomic) BOOL insetsContentViewsToSafeArea; 
@property (assign,nonatomic) double defaultLeadingCellMarginWidth; 
@property (assign,nonatomic) double defaultTrailingCellMarginWidth; 
@property (assign,nonatomic) double indexBarExtentFromEdge; 
@property (assign,nonatomic) UIEdgeInsets backgroundInset; 
@property (assign,nonatomic) long long indentationLevel; 
@property (assign,nonatomic) BOOL drawsSeparatorAtTopOfSection; 
@property (assign,nonatomic) BOOL drawsSeparatorAtBottomOfSection; 
@property (assign,nonatomic) long long accessoryType; 
@property (assign,nonatomic) long long editingStyle; 
@property (assign,nonatomic) BOOL shouldIndentWhileEditing; 
@property (assign,nonatomic) BOOL showsReorderControl; 
-(UIVisualEffect *)separatorEffect;
-(void)setSeparatorEffect:(UIVisualEffect *)arg1 ;
-(BOOL)separatorInsetIsRelativeToCellEdges;
-(void)setSeparatorInsetIsRelativeToCellEdges:(BOOL)arg1 ;
-(BOOL)insetsContentViewsToSafeArea;
-(void)setInsetsContentViewsToSafeArea:(BOOL)arg1 ;
-(double)defaultLeadingCellMarginWidth;
-(void)setDefaultLeadingCellMarginWidth:(double)arg1 ;
-(double)defaultTrailingCellMarginWidth;
-(void)setDefaultTrailingCellMarginWidth:(double)arg1 ;
-(double)indexBarExtentFromEdge;
-(void)setIndexBarExtentFromEdge:(double)arg1 ;
-(UIEdgeInsets)backgroundInset;
-(void)setBackgroundInset:(UIEdgeInsets)arg1 ;
-(BOOL)drawsSeparatorAtTopOfSection;
-(void)setDrawsSeparatorAtTopOfSection:(BOOL)arg1 ;
-(BOOL)drawsSeparatorAtBottomOfSection;
-(void)setDrawsSeparatorAtBottomOfSection:(BOOL)arg1 ;
@end

