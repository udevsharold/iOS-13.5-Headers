/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIButtonBarLayout.h>

@class UIBarButtonItem, UIView, NSLayoutConstraint;

@interface _UIButtonBarSpacerLayout : _UIButtonBarLayout {

	UIBarButtonItem* _item;
	UIView* _spacer;
	NSLayoutConstraint* _requestedSize;
	NSLayoutConstraint* _minimumSize;
	NSLayoutConstraint* _equalSize;
	BOOL _flexible;
	long long _spacerType;

}

@property (nonatomic,readonly) long long spacerType;              //@synthesize spacerType=_spacerType - In the implementation block
+(long long)typeOfSpacerBetweenLayout:(id)arg1 andLayout:(id)arg2 ;
+(id)spacerForLayoutMetrics:(id)arg1 betweenLayout:(id)arg2 andLayout:(id)arg3 ;
-(id)description;
-(double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1 ;
-(id)barButtonItem;
-(BOOL)isSpaceLayout;
-(void)_configure;
-(void)_addLayoutViews:(id)arg1 ;
-(void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2 ;
-(id)initWithLayoutMetrics:(id)arg1 ;
-(BOOL)suppressSpacing;
-(id)initWithLayoutMetrics:(id)arg1 barButtonItem:(id)arg2 ;
-(long long)spacerType;
@end

