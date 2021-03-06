/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UILabel.h>

@class UIImageView;

@interface CKLabel : UILabel {

	UIImageView* _titleIconImageView;
	long long _titleIconImageType;

}

@property (nonatomic,retain) UIImageView * titleIconImageView;              //@synthesize titleIconImageView=_titleIconImageView - In the implementation block
@property (assign,nonatomic) long long titleIconImageType;                  //@synthesize titleIconImageType=_titleIconImageType - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)setTitleIconImageType:(long long)arg1 ;
-(UIImageView *)titleIconImageView;
-(BOOL)isLTR;
-(void)setTitleIconImageView:(UIImageView *)arg1 ;
-(long long)titleIconImageType;
-(CGSize)sizeOfTitleLabel;
-(CGSize)sizeOfAccessoryImageView;
-(CGRect)rectToDrawTextInForRect:(CGRect)arg1 ;
@end

