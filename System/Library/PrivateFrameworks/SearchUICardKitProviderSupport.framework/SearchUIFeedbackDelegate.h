/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SearchUIFeedbackDelegate <SFFeedbackListener>
@optional
-(void)presentViewController:(id)arg1;
-(void)willDismissViewController:(id)arg1;
-(void)updateViewControllerTitle:(id)arg1;
-(void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
-(BOOL)shouldHandleCardSectionEngagement:(id)arg1;
-(void)presentViewControllerForCard:(id)arg1 animate:(BOOL)arg2;
-(void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(BOOL)arg2;
-(void)cardSectionViewDidInvalidateSize:(id)arg1;

@end
