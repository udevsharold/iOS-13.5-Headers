/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UISearchBarLayout, UIView, _UISearchBarTransitionContext;

@interface _UISearchBarTransitionerBase : NSObject {

	_UISearchBarLayout* _activeLayout;
	UIView* _searchBar;
	_UISearchBarTransitionContext* _transitionContext;

}

@property (nonatomic,__weak,readonly) UIView * searchBar;                                    //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) _UISearchBarTransitionContext * transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,readonly) _UISearchBarLayout * activeLayout;                            //@synthesize activeLayout=_activeLayout - In the implementation block
-(id)init;
-(void)cancel;
-(void)complete;
-(_UISearchBarTransitionContext *)transitionContext;
-(void)animate;
-(void)prepare;
-(UIView *)searchBar;
-(_UISearchBarLayout *)activeLayout;
-(id)initWithTransitionContext:(id)arg1 forSearchBar:(id)arg2 ;
-(id)initWithNewTransitionContextForSearchBar:(id)arg1 ;
-(void)setTransitionContext:(_UISearchBarTransitionContext *)arg1 ;
@end

