/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>
#import <libobjc.A.dylib/MTMaterialGrouping.h>

@class NSString, NSArray;

@interface NCToggleControlPair : UIView <PLContentSizeCategoryAdjusting, MTMaterialGrouping> {

	NSString* _materialGroupNameBase;
	NSArray* _toggleControls;

}

@property (nonatomic,readonly) NSArray * toggleControls;                          //@synthesize toggleControls=_toggleControls - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory; 
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
@property (nonatomic,copy) NSString * materialGroupNameBase;                      //@synthesize materialGroupNameBase=_materialGroupNameBase - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(BOOL)adjustForContentSizeCategoryChange;
-(NSString *)materialGroupNameBase;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(void)setLeadingControlExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithLeadingToggleControl:(id)arg1 trailingToggleControl:(id)arg2 ;
-(NSArray *)toggleControls;
-(void)_handleTouchUpInside:(id)arg1 withEvent:(id)arg2 ;
-(double)_effectiveValueForMinValue:(double)arg1 withFont:(id)arg2 ;
-(id)_leadingToggleControl;
-(id)_trailingToggleControl;
-(double)_effectiveInterControlPadding;
@end

