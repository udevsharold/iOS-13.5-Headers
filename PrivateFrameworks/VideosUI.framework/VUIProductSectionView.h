/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIProductMetadataLayout, VUILabel, NSArray, UIView;

@interface VUIProductSectionView : UIView {

	VUIProductMetadataLayout* _layout;
	VUILabel* _headerView;
	NSArray* _infoViews;
	UIView* _footerView;
	UIView* _defaultFocusView;
	VUILabel* _prototypeInfoHeaderLabel;

}

@property (nonatomic,retain) UIView * defaultFocusView;                        //@synthesize defaultFocusView=_defaultFocusView - In the implementation block
@property (nonatomic,retain) VUILabel * prototypeInfoHeaderLabel;              //@synthesize prototypeInfoHeaderLabel=_prototypeInfoHeaderLabel - In the implementation block
@property (nonatomic,retain) VUIProductMetadataLayout * layout;                //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * headerView;                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSArray * infoViews;                              //@synthesize infoViews=_infoViews - In the implementation block
@property (nonatomic,retain) UIView * footerView;                              //@synthesize footerView=_footerView - In the implementation block
+(id)headerViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)footerLabelWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)footerDescriptionWithString:(id)arg1 layout:(id)arg2 maxLine:(unsigned long long)arg3 existingView:(id)arg4 ;
-(VUIProductMetadataLayout *)layout;
-(void)setLayout:(VUIProductMetadataLayout *)arg1 ;
-(id)preferredFocusEnvironments;
-(BOOL)canBecomeFocused;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUILabel *)headerView;
-(void)setHeaderView:(VUILabel *)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(NSArray *)infoViews;
-(void)setInfoViews:(NSArray *)arg1 ;
-(void)setDefaultFocusView:(UIView *)arg1 ;
-(UIView *)defaultFocusView;
-(VUILabel *)prototypeInfoHeaderLabel;
-(void)setPrototypeInfoHeaderLabel:(VUILabel *)arg1 ;
@end

