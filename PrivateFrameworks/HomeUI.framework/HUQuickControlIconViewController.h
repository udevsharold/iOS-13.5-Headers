/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HUQuickControlIconView, HFDictionaryValueControlItem, HUQuickControlIconViewProfile;

@interface HUQuickControlIconViewController : HUQuickControlSingleControlViewController {

	HUQuickControlIconView* _quickControlIconView;

}

@property (nonatomic,readonly) HFDictionaryValueControlItem * controlItem; 
@property (nonatomic,readonly) HUQuickControlIconViewProfile * viewProfile; 
@property (nonatomic,retain) HUQuickControlIconView * quickControlIconView;              //@synthesize quickControlIconView=_quickControlIconView - In the implementation block
+(id)controlItemPredicate;
+(Class)controlItemClass;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(void)setQuickControlIconView:(HUQuickControlIconView *)arg1 ;
-(HUQuickControlIconView *)quickControlIconView;
@end

