/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIPrototypingMenuCell.h>

@class UISwitch;

@interface _UIPrototypingMenuBoolCell : _UIPrototypingMenuCell {

	UISwitch* _valueSwitch;

}

@property (nonatomic,retain) UISwitch * valueSwitch;              //@synthesize valueSwitch=_valueSwitch - In the implementation block
+(long long)_layoutAxis;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_switchDidChangeValue:(id)arg1 ;
-(void)_prototypingSettingDidChange;
-(UISwitch *)valueSwitch;
-(void)setValueSwitch:(UISwitch *)arg1 ;
@end

