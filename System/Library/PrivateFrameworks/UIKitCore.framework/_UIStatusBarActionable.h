/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _UIStatusBarAction, UIView;


@protocol _UIStatusBarActionable <NSObject>
@property (nonatomic,retain) _UIStatusBarAction * action; 
@property (nonatomic,retain) _UIStatusBarAction * hoverAction; 
@property (nonatomic,readonly) UIView * hoverView; 
@property (nonatomic,readonly) CGRect absoluteHoverFrame; 
@property (nonatomic,readonly) BOOL hoverHighlightsAsRegion; 
@property (assign,nonatomic) NSDirectionalEdgeInsets extendedHoverInsets; 
@property (assign,nonatomic) UIEdgeInsets actionInsets; 
@property (nonatomic,readonly) id<UILayoutItem> layoutItem; 
@required
-(_UIStatusBarAction *)action;
-(void)setAction:(id)arg1;
-(id<UILayoutItem>)layoutItem;
-(void)setActionInsets:(UIEdgeInsets)arg1;
-(_UIStatusBarAction *)hoverAction;
-(void)setHoverAction:(id)arg1;
-(UIView *)hoverView;
-(CGRect)absoluteHoverFrame;
-(BOOL)hoverHighlightsAsRegion;
-(NSDirectionalEdgeInsets)extendedHoverInsets;
-(void)setExtendedHoverInsets:(NSDirectionalEdgeInsets)arg1;
-(UIEdgeInsets)actionInsets;

@end

