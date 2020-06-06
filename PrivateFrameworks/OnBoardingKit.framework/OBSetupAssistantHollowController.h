/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBWelcomeController.h>

@class OBHollowButton;

@interface OBSetupAssistantHollowController : OBWelcomeController {

	OBHollowButton* _contentButton;

}

@property (nonatomic,retain) OBHollowButton * contentButton;              //@synthesize contentButton=_contentButton - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(OBHollowButton *)contentButton;
-(void)addHollowButtonWithTitle:(id)arg1 target:(id)arg2 downPressSelector:(SEL)arg3 upLiftSelector:(SEL)arg4 ;
-(void)setContentButton:(OBHollowButton *)arg1 ;
@end

