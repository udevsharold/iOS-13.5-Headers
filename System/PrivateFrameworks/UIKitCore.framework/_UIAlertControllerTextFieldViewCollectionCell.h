/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class _UIAlertControllerTextFieldView, UITapGestureRecognizer;

@interface _UIAlertControllerTextFieldViewCollectionCell : UICollectionViewCell {

	_UIAlertControllerTextFieldView* _textField;
	UITapGestureRecognizer* _selectButtonGesture;

}

@property (nonatomic,readonly) _UIAlertControllerTextFieldView * textField; 
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)preferredFocusedView;
-(_UIAlertControllerTextFieldView *)textField;
-(void)_selectButton:(id)arg1 ;
-(void)setTextField:(id)arg1 horizontalMargin:(double)arg2 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
@end
