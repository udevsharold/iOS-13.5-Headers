/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol WFInfoButtonTableViewCellDelegate;
@class UIButton, UIImageView, NSArray;

@interface WFInfoButtonTableViewCell : UITableViewCell {

	unsigned long long _accessoryMode;
	id<WFInfoButtonTableViewCellDelegate> _delegate;
	UIButton* _infoButton;
	UIImageView* _checkmarkView;

}

@property (assign,nonatomic) unsigned long long accessoryMode;                                   //@synthesize accessoryMode=_accessoryMode - In the implementation block
@property (assign,getter=isChecked,nonatomic) BOOL checked; 
@property (assign,nonatomic,__weak) id<WFInfoButtonTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * infoButton;                                            //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,readonly) UIImageView * checkmarkView;                                      //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (nonatomic,readonly) NSArray * accessoryViews; 
-(id<WFInfoButtonTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<WFInfoButtonTableViewCellDelegate>)arg1 ;
-(unsigned long long)accessibilityTraits;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSArray *)accessoryViews;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
-(void)infoButtonPressed:(id)arg1 ;
-(UIButton *)infoButton;
-(UIImageView *)checkmarkView;
-(void)setAccessoryMode:(unsigned long long)arg1 ;
-(unsigned long long)accessoryMode;
@end

