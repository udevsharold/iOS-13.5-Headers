/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimerUI/MTUIBaseTableViewCell.h>

@protocol MTUISwitchTableViewCellDelegate;
@class UISwitch;

@interface MTUISwitchTableViewCell : MTUIBaseTableViewCell {

	id<MTUISwitchTableViewCellDelegate> _delegate;
	UISwitch* _enabledSwitch;

}

@property (nonatomic,retain) UISwitch * enabledSwitch;                                         //@synthesize enabledSwitch=_enabledSwitch - In the implementation block
@property (assign,nonatomic,__weak) id<MTUISwitchTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MTUISwitchTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<MTUISwitchTableViewCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UISwitch *)enabledSwitch;
-(void)setEnabledSwitch:(UISwitch *)arg1 ;
-(void)switchAction:(id)arg1 ;
-(void)setSwitchStateEnabled:(BOOL)arg1 ;
@end

