/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKClinicalSourceAuthorizationController, HKSource;

@interface HKClinicalAuthorizationDisplayController : NSObject {

	HKClinicalSourceAuthorizationController* _authorizationController;

}

@property (nonatomic,readonly) HKClinicalSourceAuthorizationController * authorizationController;              //@synthesize authorizationController=_authorizationController - In the implementation block
@property (nonatomic,copy,readonly) HKSource * source; 
-(id)init;
-(HKSource *)source;
-(HKClinicalSourceAuthorizationController *)authorizationController;
-(id)initWithAuthorizationController:(id)arg1 ;
-(id)currentTimeDisplayStringForReadAuthorizationFooter;
-(id)currentTimeTitleForReadAuthorizationModeFooterWithSelectedMode:(long long)arg1 formatBlock:(/*^block*/id)arg2 ;
-(id)committedTitleForReadAuthorizationModeFooterWithSelectedMode:(long long)arg1 formatBlock:(/*^block*/id)arg2 ;
-(id)_displayStringForReadAuthorizationDate:(id)arg1 ;
-(id)_displayReadAuthorizationDateForMode:(long long)arg1 ;
@end
