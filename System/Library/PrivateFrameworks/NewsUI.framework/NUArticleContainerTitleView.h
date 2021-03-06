/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NUTitleView, NUPageStyle;

@interface NUArticleContainerTitleView : UIView {

	NUTitleView* _titleView;
	NUPageStyle* _pageStyle;

}

@property (nonatomic,readonly) NUTitleView * titleView;              //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NUPageStyle * pageStyle;                //@synthesize pageStyle=_pageStyle - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NUTitleView *)titleView;
-(NUPageStyle *)pageStyle;
-(void)setPageStyle:(NUPageStyle *)arg1 ;
-(void)applyPageStyle:(id)arg1 ;
@end

