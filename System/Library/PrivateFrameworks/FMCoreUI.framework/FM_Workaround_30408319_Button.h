/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@class NSLayoutConstraint;

@interface FM_Workaround_30408319_Button : UIButton {

	NSLayoutConstraint* _fm_workaround_height_constraint;

}

@property (nonatomic,retain) NSLayoutConstraint * fm_workaround_height_constraint;              //@synthesize fm_workaround_height_constraint=_fm_workaround_height_constraint - In the implementation block
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(NSLayoutConstraint *)fm_workaround_height_constraint;
-(void)setFm_workaround_height_constraint:(NSLayoutConstraint *)arg1 ;
@end

