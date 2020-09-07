/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIActivityIndicatorView, NSString;

@interface SL_OOPASpinnerTitle : UIView {

	UILabel* _titleView;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,copy) NSString * title; 
-(id)init;
-(void)dealloc;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)startAnimating;
-(void)stopAnimating;
@end
