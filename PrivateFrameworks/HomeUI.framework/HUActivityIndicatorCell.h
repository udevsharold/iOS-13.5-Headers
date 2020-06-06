/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@class HUTitleDescriptionContentView, UIImageView, UIActivityIndicatorView, UIImage, NSString;

@interface HUActivityIndicatorCell : UITableViewCell <HUDisableableCellProtocol> {

	BOOL _disabled;
	BOOL _animating;
	HUTitleDescriptionContentView* _titleDescriptionView;
	UIImageView* _iconImageView;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,readonly) HUTitleDescriptionContentView * titleDescriptionView;              //@synthesize titleDescriptionView=_titleDescriptionView - In the implementation block
@property (nonatomic,readonly) UIImageView * iconImageView;                                       //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicatorView;                   //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) id<HFStringGenerator> titleText; 
@property (nonatomic,retain) id<HFStringGenerator> descriptionText; 
@property (nonatomic,retain) UIImage * icon; 
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                                   //@synthesize animating=_animating - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                                     //@synthesize disabled=_disabled - In the implementation block
-(NSString *)description;
-(void)prepareForReuse;
-(BOOL)isDisabled;
-(void)layoutSubviews;
-(void)setDisabled:(BOOL)arg1 ;
-(UIImage *)icon;
-(BOOL)isAnimating;
-(void)setIcon:(UIImage *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setTitleText:(id<HFStringGenerator>)arg1 ;
-(UIImageView *)iconImageView;
-(UIActivityIndicatorView *)activityIndicatorView;
-(id<HFStringGenerator>)titleText;
-(id<HFStringGenerator>)descriptionText;
-(void)setDescriptionText:(id<HFStringGenerator>)arg1 ;
-(void)_setupConstraints;
-(HUTitleDescriptionContentView *)titleDescriptionView;
@end

