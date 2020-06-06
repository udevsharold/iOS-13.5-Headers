/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVCustomControlsViewProviding.h>

@protocol SVCustomControlsLayoutGuideProviding, SVVideoViewControllerProviding;
@class UIView, NSString;

@interface SVCustomControlsViewProvider : NSObject <SVCustomControlsViewProviding> {

	UIView* _controlsView;
	id<SVCustomControlsLayoutGuideProviding> _layoutGuideProvider;
	id<SVVideoViewControllerProviding> _viewControllerProvider;

}

@property (nonatomic,readonly) id<SVVideoViewControllerProviding> viewControllerProvider;                 //@synthesize viewControllerProvider=_viewControllerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * controlsView;                                                     //@synthesize controlsView=_controlsView - In the implementation block
@property (nonatomic,readonly) id<SVCustomControlsLayoutGuideProviding> layoutGuideProvider;              //@synthesize layoutGuideProvider=_layoutGuideProvider - In the implementation block
-(UIView *)controlsView;
-(id<SVCustomControlsLayoutGuideProviding>)layoutGuideProvider;
-(id)initWithViewControllerProvider:(id)arg1 layoutGuideProvider:(id)arg2 ;
-(id<SVVideoViewControllerProviding>)viewControllerProvider;
@end

