/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface HKAdjustableTapTargetButton : UIButton {

	BOOL _insetSet;
	UIEdgeInsets _hitTargetInsets;

}

@property (assign,nonatomic) UIEdgeInsets hitTargetInsets;              //@synthesize hitTargetInsets=_hitTargetInsets - In the implementation block
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHitTargetInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitTargetInsets;
@end

