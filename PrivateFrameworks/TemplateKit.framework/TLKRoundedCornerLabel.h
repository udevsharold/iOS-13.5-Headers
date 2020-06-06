/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKLabel.h>

@class UIView;

@interface TLKRoundedCornerLabel : TLKLabel {

	BOOL _large;
	UIView* _borderView;

}

@property (nonatomic,retain) UIView * borderView;              //@synthesize borderView=_borderView - In the implementation block
@property (assign,nonatomic) BOOL large;                       //@synthesize large=_large - In the implementation block
-(void)setBorderView:(UIView *)arg1 ;
-(UIView *)borderView;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(id)initWithProminence:(unsigned long long)arg1 ;
-(void)setLarge:(BOOL)arg1 ;
-(BOOL)large;
@end

