/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView, NSMutableArray;

@interface WFRowOfIconsView : UIView {

	unsigned long long _maxNumberOfIcons;
	UIStackView* _stackView;
	NSMutableArray* _iconViews;
	double _height;

}

@property (nonatomic,readonly) unsigned long long maxNumberOfIcons;              //@synthesize maxNumberOfIcons=_maxNumberOfIcons - In the implementation block
@property (nonatomic,readonly) UIStackView * stackView;                          //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * iconViews;                       //@synthesize iconViews=_iconViews - In the implementation block
@property (nonatomic,readonly) double height;                                    //@synthesize height=_height - In the implementation block
-(double)height;
-(CGSize)intrinsicContentSize;
-(UIStackView *)stackView;
-(void)setIcons:(id)arg1 ;
-(unsigned long long)maxNumberOfIcons;
-(NSMutableArray *)iconViews;
-(id)initWithMaxNumberOfIcons:(unsigned long long)arg1 height:(double)arg2 ;
-(void)setHomeIcons:(id)arg1 ;
-(void)rebuildSubviewsForItems:(id)arg1 ;
@end

