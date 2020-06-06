/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SKUIComposeTextFieldListViewDelegate;
@class NSMutableArray, UIResponder;

@interface SKUIComposeTextFieldListView : UIView {

	id<SKUIComposeTextFieldListViewDelegate> _delegate;
	NSMutableArray* _fields;
	BOOL _isValid;
	long long _style;

}

@property (nonatomic,readonly) long long composeReviewStyle;                                        //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIComposeTextFieldListViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) UIResponder * initialFirstResponder; 
-(void)dealloc;
-(BOOL)isValid;
-(id<SKUIComposeTextFieldListViewDelegate>)delegate;
-(void)setDelegate:(id<SKUIComposeTextFieldListViewDelegate>)arg1 ;
-(double)height;
-(void)layoutSubviews;
-(void)reloadData;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(UIResponder *)initialFirstResponder;
-(id)textForFieldAtIndex:(unsigned long long)arg1 ;
-(long long)composeReviewStyle;
-(void)composeTextFieldValidityChanged:(id)arg1 ;
-(void)_updateValidity;
@end

