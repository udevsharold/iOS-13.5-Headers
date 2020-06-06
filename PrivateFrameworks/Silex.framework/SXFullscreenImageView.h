/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SXFullscreenImageViewDelegate;
@class SXImageView, UIScrollView, UITapGestureRecognizer, UIActivityIndicatorView, NSString;

@interface SXFullscreenImageView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate> {

	BOOL _isZooming;
	id<SXFullscreenImageViewDelegate> _delegate;
	SXImageView* _contentView;
	UIScrollView* _scrollView;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	unsigned long long _viewIndex;
	unsigned long long _activeGestureCount;
	double _currentScale;
	UIActivityIndicatorView* _activityIndicator;
	CGPoint _currentTranslation;
	CGRect _contentViewFrame;

}

@property (nonatomic,retain) SXImageView * contentView;                                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                        //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * doubleTapGestureRecognizer;              //@synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL isZooming;                                                   //@synthesize isZooming=_isZooming - In the implementation block
@property (assign,nonatomic) unsigned long long activeGestureCount;                            //@synthesize activeGestureCount=_activeGestureCount - In the implementation block
@property (assign,nonatomic) CGPoint currentTranslation;                                       //@synthesize currentTranslation=_currentTranslation - In the implementation block
@property (assign,nonatomic) double currentScale;                                              //@synthesize currentScale=_currentScale - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                      //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic,__weak) id<SXFullscreenImageViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGRect contentViewFrame;                                          //@synthesize contentViewFrame=_contentViewFrame - In the implementation block
@property (nonatomic,readonly) unsigned long long viewIndex;                                   //@synthesize viewIndex=_viewIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXFullscreenImageViewDelegate>)delegate;
-(void)setDelegate:(id<SXFullscreenImageViewDelegate>)arg1 ;
-(SXImageView *)contentView;
-(void)setContentView:(SXImageView *)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidZoom:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(BOOL)isZooming;
-(CGPoint)currentTranslation;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setup;
-(UITapGestureRecognizer *)doubleTapGestureRecognizer;
-(void)handleDoubleTap:(id)arg1 ;
-(void)setDoubleTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setupGestures;
-(CGRect)contentViewFrame;
-(unsigned long long)viewIndex;
-(void)setContentViewFrame:(CGRect)arg1 ;
-(void)setIsZooming:(BOOL)arg1 ;
-(id)initWithContentView:(id)arg1 viewIndex:(unsigned long long)arg2 ;
-(void)showLoadingIndicator:(BOOL)arg1 ;
-(BOOL)allowsDismissal;
-(unsigned long long)activeGestureCount;
-(void)setActiveGestureCount:(unsigned long long)arg1 ;
-(void)setCurrentTranslation:(CGPoint)arg1 ;
-(double)currentScale;
-(void)setCurrentScale:(double)arg1 ;
@end

