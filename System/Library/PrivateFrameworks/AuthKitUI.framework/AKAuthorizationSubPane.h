/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AKAuthorizationSubPaneAdding.h>

@class UIViewController, UIView;

@interface AKAuthorizationSubPane : NSObject <AKAuthorizationSubPaneAdding> {

	UIViewController* _viewController;
	UIView* _internalView;
	double _internalCustomSpacingAfter;

}

@property (nonatomic,readonly) UIView * internalView;                          //@synthesize internalView=_internalView - In the implementation block
@property (assign,nonatomic) double internalCustomSpacingAfter;                //@synthesize internalCustomSpacingAfter=_internalCustomSpacingAfter - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic) double customSpacingAfter; 
-(UIView *)view;
-(UIViewController *)viewController;
-(id)initWithView:(id)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(void)setCustomSpacingAfter:(double)arg1 ;
-(UIView *)internalView;
-(double)internalCustomSpacingAfter;
-(void)setInternalCustomSpacingAfter:(double)arg1 ;
-(void)addToStackView:(id)arg1 context:(id)arg2 ;
-(void)addToConstraints:(id)arg1 context:(id)arg2 ;
-(double)customSpacingAfter;
@end

