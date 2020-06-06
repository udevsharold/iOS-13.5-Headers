/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface TUSegmentedColorView : UIView {

	 startColor;
	 endColor;
	 numberOfSegments;
	 direction;

}

@property (retain,nonatomic) UIColor * startColor; 
@property (retain,nonatomic) UIColor * endColor; 
@property (assign,nonatomic) long long numberOfSegments; 
@property (assign,nonatomic) long long direction; 
-(id)initWithCoder:(id)arg1 ;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(long long)numberOfSegments;
-(void)setStartColor:(UIColor *)arg1 ;
-(void)setEndColor:(UIColor *)arg1 ;
-(UIColor *)startColor;
-(UIColor *)endColor;
-(void)setNumberOfSegments:(long long)arg1 ;
@end

