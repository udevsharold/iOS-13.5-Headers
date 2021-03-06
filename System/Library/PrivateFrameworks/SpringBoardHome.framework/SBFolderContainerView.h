/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class SBIconLayoutOverrideStrategy, SBFolderView, UIView;

@interface SBFolderContainerView : SBFTouchPassThroughView {

	double _statusBarHeight;
	SBIconLayoutOverrideStrategy* _iconLayoutOverrideStrategy;
	SBFolderView* _folderView;
	SBFolderContainerView* _childFolderContainerView;
	UIView* _backgroundView;

}

@property (nonatomic,readonly) SBFolderView * folderView;                                            //@synthesize folderView=_folderView - In the implementation block
@property (nonatomic,retain) SBFolderContainerView * childFolderContainerView; 
@property (nonatomic,retain) UIView * backgroundView;                                                //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) double statusBarHeight;                                                 //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
@property (nonatomic,retain) SBIconLayoutOverrideStrategy * iconLayoutOverrideStrategy;              //@synthesize iconLayoutOverrideStrategy=_iconLayoutOverrideStrategy - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(void)setBackgroundView:(UIView *)arg1 ;
-(double)statusBarHeight;
-(void)setStatusBarHeight:(double)arg1 ;
-(id)initWithFolderView:(id)arg1 statusBarHeight:(double)arg2 ;
-(SBFolderView *)folderView;
-(void)setChildFolderContainerView:(SBFolderContainerView *)arg1 ;
-(SBIconLayoutOverrideStrategy *)iconLayoutOverrideStrategy;
-(void)setIconLayoutOverrideStrategy:(SBIconLayoutOverrideStrategy *)arg1 ;
-(CGRect)_frameForFolderView:(id)arg1 ;
-(SBFolderContainerView *)childFolderContainerView;
@end

