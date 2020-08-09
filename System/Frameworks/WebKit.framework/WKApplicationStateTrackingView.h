/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface WKApplicationStateTrackingView : UIView {

	WeakObjCPtr<WKWebView> _webViewToTrack;
	unique_ptr<WebKit::ApplicationStateTracker, std::__1::default_delete<WebKit::ApplicationStateTracker> >* _applicationStateTracker;

}

@property (nonatomic,readonly) BOOL isBackground; 
@property (nonatomic,readonly) UIView * _contentView; 
-(UIView *)_contentView;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_applicationDidEnterBackground;
-(BOOL)isBackground;
-(id)initWithFrame:(CGRect)arg1 webView:(id)arg2 ;
-(void)_applicationDidFinishSnapshottingAfterEnteringBackground;
-(void)_applicationWillEnterForeground;
@end
