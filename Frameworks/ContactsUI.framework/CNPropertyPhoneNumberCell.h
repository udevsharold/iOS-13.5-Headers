/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@class UIImageView;

@interface CNPropertyPhoneNumberCell : CNPropertySimpleTransportCell {

	BOOL _emergencyPhoneNumber;
	UIImageView* _emergencyImageView;

}

@property (nonatomic,retain) UIImageView * emergencyImageView;                                     //@synthesize emergencyImageView=_emergencyImageView - In the implementation block
@property (assign,getter=isEmergencyPhoneNumber,nonatomic) BOOL emergencyPhoneNumber;              //@synthesize emergencyPhoneNumber=_emergencyPhoneNumber - In the implementation block
-(void)copy:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setProperty:(id)arg1 ;
-(BOOL)shouldPerformDefaultAction;
-(void)updateTransportButtons;
-(void)setEmergencyPhoneNumber:(BOOL)arg1 ;
-(BOOL)shouldShowEmergencyBadge;
-(void)updateEmergencyBadge;
-(void)buildEmergencyImageView;
-(BOOL)isEmergencyPhoneNumber;
-(UIImageView *)emergencyImageView;
-(void)setEmergencyImageView:(UIImageView *)arg1 ;
@end

