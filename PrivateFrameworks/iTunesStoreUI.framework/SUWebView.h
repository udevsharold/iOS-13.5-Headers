/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIWebView.h>

@class UIColor, UIView, NSString;

@interface SUWebView : UIWebView {

	BOOL _isPinned;
	UIColor* _originalBackgroundColor;
	char _originalShowsBackgroundShadow;
	double _pinnedHeaderInsetAdjustment;
	UIView* _pinnedHeaderView;
	unsigned _scrollingDisabled : 1;
	BOOL _showsTopBackgroundShadow;
	long long _synchronousLayoutCount;
	UIColor* _topBackgroundColor;

}

@property (assign,nonatomic) id<SUWebViewDelegate> delegate; 
@property (assign,getter=isScrollingEnabled,nonatomic) BOOL scrollingEnabled; 
@property (nonatomic,readonly) NSString * title; 
@property (assign,nonatomic) BOOL showsTopBackgroundShadow;                                //@synthesize showsTopBackgroundShadow=_showsTopBackgroundShadow - In the implementation block
@property (nonatomic,retain) UIColor * topBackgroundColor;                                 //@synthesize topBackgroundColor=_topBackgroundColor - In the implementation block
@property (nonatomic,readonly) id windowScriptObject; 
-(NSString *)title;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)loadArchive:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setScrollingEnabled:(BOOL)arg1 ;
-(void)view:(id)arg1 didSetFrame:(CGRect)arg2 oldFrame:(CGRect)arg3 ;
-(void)_setRichTextReaderViewportSettings;
-(id)windowScriptObject;
-(void)beginSynchronousLayout;
-(void)endSynchronousLayout;
-(BOOL)getStatusBarStyle:(long long*)arg1 ;
-(BOOL)isScrollingEnabled;
-(void)_setPinnedHeaderView:(id)arg1 withTopInsetAdjustment:(double)arg2 ;
-(BOOL)showsTopBackgroundShadow;
-(void)setShowsTopBackgroundShadow:(BOOL)arg1 ;
-(UIColor *)topBackgroundColor;
-(void)setTopBackgroundColor:(UIColor *)arg1 ;
@end

