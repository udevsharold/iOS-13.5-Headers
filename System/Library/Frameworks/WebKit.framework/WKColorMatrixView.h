/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol WKColorMatrixViewDelegate;
@interface WKColorMatrixView : UIView {

	RetainPtr<NSArray<NSArray<UIColor *> *> >* _colorMatrix;
	RetainPtr<NSArray<NSArray<WKColorButton *> *> >* _colorButtons;
	id<WKColorMatrixViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WKColorMatrixViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WKColorMatrixViewDelegate>)delegate;
-(void)setDelegate:(id<WKColorMatrixViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 colorMatrix:(id)arg2 ;
-(void)colorButtonTapped:(id)arg1 ;
@end
