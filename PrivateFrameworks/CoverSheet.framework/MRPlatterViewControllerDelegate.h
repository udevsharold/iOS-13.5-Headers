/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRPlatterViewControllerDelegate <NSObject>
@optional
-(void)platterViewController:(id)arg1 shouldDisplayPlatterDidChange:(BOOL)arg2;
-(void)platterViewController:(id)arg1 didReceiveInteractionEvent:(id)arg2;
-(void)platterViewController:(id)arg1 didToggleRoutingPicker:(BOOL)arg2;
-(void)platterViewController:(id)arg1 willToggleRoutingPicker:(BOOL)arg2;
-(void)dismissPlatterViewController:(id)arg1 completion:(/*^block*/id)arg2;
-(id)platterViewController:(id)arg1 presentingViewForPresentedViewController:(id)arg2;
-(void)platterViewController:(id)arg1 homeGestureDismisalAllowedDidChange:(BOOL)arg2;
-(BOOL)shouldPresentUsingViewServicePlatterViewController:(id)arg1;
-(void)platterViewController:(id)arg1 didPickRoute:(id)arg2;

@end

