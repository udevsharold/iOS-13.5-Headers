/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SearchUIFeedbackDelegate;
@class UIView, UIButton, SearchUIImageView, SearchUICardSectionRowModel;

@interface SearchUIHorizontallyScrollingButtonController : NSObject {

	BOOL _scrollsWithoutStoppingAtBoundaries;
	BOOL _wantsSeparators;
	UIView* _view;
	UIButton* _button;
	double _width;
	double _spacing;
	SearchUIImageView* _thumbnailView;
	id<SearchUIFeedbackDelegate> _feedbackDelegate;
	SearchUICardSectionRowModel* _cardSectionRowModel;

}

@property (nonatomic,retain) UIView * view;                                                     //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UIButton * button;                                                 //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) double width;                                                      //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) double spacing;                                                    //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) BOOL scrollsWithoutStoppingAtBoundaries;                           //@synthesize scrollsWithoutStoppingAtBoundaries=_scrollsWithoutStoppingAtBoundaries - In the implementation block
@property (assign,nonatomic) BOOL wantsSeparators;                                              //@synthesize wantsSeparators=_wantsSeparators - In the implementation block
@property (nonatomic,retain) SearchUIImageView * thumbnailView;                                 //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIFeedbackDelegate> feedbackDelegate;              //@synthesize feedbackDelegate=_feedbackDelegate - In the implementation block
@property (nonatomic,retain) SearchUICardSectionRowModel * cardSectionRowModel;                 //@synthesize cardSectionRowModel=_cardSectionRowModel - In the implementation block
-(double)spacing;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(UIView *)view;
-(void)setSpacing:(double)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(UIButton *)button;
-(void)setButton:(UIButton *)arg1 ;
-(SearchUIImageView *)thumbnailView;
-(void)setThumbnailView:(SearchUIImageView *)arg1 ;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(void)setCardSectionRowModel:(SearchUICardSectionRowModel *)arg1 ;
-(BOOL)wantsSeparators;
-(BOOL)scrollsWithoutStoppingAtBoundaries;
-(SearchUICardSectionRowModel *)cardSectionRowModel;
-(void)setScrollsWithoutStoppingAtBoundaries:(BOOL)arg1 ;
-(void)setWantsSeparators:(BOOL)arg1 ;
@end

