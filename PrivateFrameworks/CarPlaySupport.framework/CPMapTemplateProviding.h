/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:04 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPMapTemplateProviding <CPBaseTemplateProviding>
@required
-(void)setHostGuidanceBackgroundColor:(id)arg1;
-(void)setHostTripEstimateStyle:(unsigned long long)arg1;
-(void)setHostAutoHidesNavigationBar:(BOOL)arg1;
-(void)setHostHidesButtonsWithNavigationBar:(BOOL)arg1;
-(void)setMapButton:(id)arg1 hidden:(BOOL)arg2;
-(void)setMapButton:(id)arg1 focusedImage:(id)arg2;
-(void)hostSetMapButton:(id)arg1 imageSet:(id)arg2;
-(void)hostSetMapButtons:(id)arg1;
-(void)setHostTripPreviews:(id)arg1 textConfiguration:(id)arg2 previewOnlyRouteChoices:(BOOL)arg3;
-(void)hostUpdateTravelEstimates:(id)arg1 forTripIdentifier:(id)arg2;
-(void)hostSetPanInterfaceVisible:(BOOL)arg1 animated:(BOOL)arg2;
-(void)hostPanInterfaceVisible:(/*^block*/id)arg1;
-(void)showNavigationAlert:(id)arg1 animated:(BOOL)arg2;
-(void)dismissNavigationAlertAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)updateNavigationAlert:(id)arg1;

@end

