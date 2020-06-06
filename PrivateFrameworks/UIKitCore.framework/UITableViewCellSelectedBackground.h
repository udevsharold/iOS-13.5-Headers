/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIVisualEffectView, NSArray;

@interface UITableViewCellSelectedBackground : UIView {

	long long _selectionStyle;
	UIColor* _multiselectBackgroundColor;
	UIColor* _selectionTintColor;
	UIColor* _noneStyleBackgroundColor;
	UIVisualEffectView* _selectionEffectsView;
	BOOL _multiselect;

}

@property (assign,nonatomic) long long selectionStyle;                           //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (nonatomic,retain) UIColor * multiselectBackgroundColor;               //@synthesize multiselectBackgroundColor=_multiselectBackgroundColor - In the implementation block
@property (assign,getter=isMultiselect,nonatomic) BOOL multiselect; 
@property (nonatomic,retain) UIColor * selectionTintColor;                       //@synthesize selectionTintColor=_selectionTintColor - In the implementation block
@property (nonatomic,copy) NSArray * selectionEffects; 
@property (nonatomic,retain) UIColor * noneStyleBackgroundColor;                 //@synthesize noneStyleBackgroundColor=_noneStyleBackgroundColor - In the implementation block
-(void)layoutSubviews;
-(void)setSelectionTintColor:(UIColor *)arg1 ;
-(UIColor *)selectionTintColor;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)_canDrawContent;
-(long long)selectionStyle;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)setMultiselect:(BOOL)arg1 ;
-(BOOL)isMultiselect;
-(NSArray *)selectionEffects;
-(void)setSelectionEffects:(NSArray *)arg1 ;
-(void)setNoneStyleBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)multiselectBackgroundColor;
-(void)setMultiselectBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)noneStyleBackgroundColor;
@end

