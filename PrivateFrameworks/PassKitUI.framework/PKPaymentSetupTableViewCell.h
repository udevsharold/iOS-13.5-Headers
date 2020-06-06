/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class UILabel, UIImageView;

@interface PKPaymentSetupTableViewCell : PKTableViewCell {

	UILabel* _betaLabel;
	BOOL _showBetaBadge;
	UIImageView* _thumbnailImageView;

}

@property (nonatomic,readonly) UIImageView * thumbnailImageView;              //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (assign,nonatomic) BOOL showBetaBadge;                              //@synthesize showBetaBadge=_showBetaBadge - In the implementation block
+(CGSize)defaultImageViewSize;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)thumbnailImageView;
-(void)setShowBetaBadge:(BOOL)arg1 ;
-(BOOL)showBetaBadge;
@end

