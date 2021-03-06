/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol HKVerticalMarginDelegate;
@interface HKVerticalMarginView : UIView {

	unsigned long long _offsetOptions;
	id<HKVerticalMarginDelegate> _marginDelegate;
	double _currentKeyboardHeight;

}

@property (assign,nonatomic) double currentKeyboardHeight;                             //@synthesize currentKeyboardHeight=_currentKeyboardHeight - In the implementation block
@property (assign,nonatomic) unsigned long long offsetOptions;                         //@synthesize offsetOptions=_offsetOptions - In the implementation block
@property (nonatomic,retain) id<HKVerticalMarginDelegate> marginDelegate;              //@synthesize marginDelegate=_marginDelegate - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(double)currentKeyboardHeight;
-(void)setCurrentKeyboardHeight:(double)arg1 ;
-(id)_findViewController;
-(void)keyboardWasShown:(id)arg1 ;
-(void)keyboardWillBeHidden:(id)arg1 ;
-(double)_topOffsetWithController:(id)arg1 ;
-(double)_bottomOffsetWithController:(id)arg1 ;
-(double)_findTabBarHeightWithController:(id)arg1 ;
-(id)initWithSubview:(id)arg1 offsetOptions:(unsigned long long)arg2 ;
-(unsigned long long)offsetOptions;
-(void)setOffsetOptions:(unsigned long long)arg1 ;
-(id<HKVerticalMarginDelegate>)marginDelegate;
-(void)setMarginDelegate:(id<HKVerticalMarginDelegate>)arg1 ;
@end

