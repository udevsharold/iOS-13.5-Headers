/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class WFWorkflowIcon, NSData, UIImageView;

@interface WFWorkflowWizardNameIconButton : UIButton {

	WFWorkflowIcon* _icon;
	NSData* _customImageData;
	UIImageView* _backgroundImageView;

}

@property (assign,nonatomic,__weak) UIImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,readonly) WFWorkflowIcon * icon;                               //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSData * customImageData;                            //@synthesize customImageData=_customImageData - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(WFWorkflowIcon *)icon;
-(UIImageView *)backgroundImageView;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(NSData *)customImageData;
-(void)setIcon:(id)arg1 customImageData:(id)arg2 ;
@end

