/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PKSwatchColor;


@protocol PKPaletteColorSwatchProperties <NSObject>
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL showsSelectionHighlight; 
@property (nonatomic,retain) PKSwatchColor * swatchColor; 
@property (assign,nonatomic) long long colorUserInterfaceStyle; 
@required
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1;
-(void)setColorUserInterfaceStyle:(long long)arg1;
-(long long)colorUserInterfaceStyle;
-(BOOL)showsSelectionHighlight;
-(PKSwatchColor *)swatchColor;
-(void)setShowsSelectionHighlight:(BOOL)arg1;
-(void)setSwatchColor:(id)arg1;

@end

