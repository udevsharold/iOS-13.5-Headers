/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ADBannerViewDelegate <NSObject>
@optional
-(void)bannerViewActionDidFinish:(id)arg1;
-(BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
-(void)bannerViewWillLoadAd:(id)arg1;
-(void)bannerViewDidLoadAd:(id)arg1;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;

@end
