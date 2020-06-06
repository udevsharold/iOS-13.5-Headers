/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface AMSUILoadingView : UIView {

	UIActivityIndicatorView* _activityIndicator;
	UILabel* _label;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UILabel * label;                                          //@synthesize label=_label - In the implementation block
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)startAnimating;
-(void)stopAnimating;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setLoadingText:(id)arg1 ;
@end

