/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <UIKitCore/UITextField.h>

@interface _AKInsetTextField : UITextField {

	CGSize _insetSize;

}

@property (assign,nonatomic) CGSize insetSize;              //@synthesize insetSize=_insetSize - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)rightViewRectForBounds:(CGRect)arg1 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
-(CGSize)insetSize;
-(void)setInsetSize:(CGSize)arg1 ;
@end

