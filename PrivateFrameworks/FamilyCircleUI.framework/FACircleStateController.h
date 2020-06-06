/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FARequestConfigurator, UIViewController, RUIStyle;

@interface FACircleStateController : NSObject {

	FARequestConfigurator* _requestConfigurator;
	/*^block*/id _performOperationCompletion;
	UIViewController* _presenter;
	RUIStyle* _customRUIStyle;

}

@property (assign,nonatomic,__weak) UIViewController * presenter;              //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,retain) RUIStyle * customRUIStyle;                        //@synthesize customRUIStyle=_customRUIStyle - In the implementation block
-(id)init;
-(UIViewController *)presenter;
-(id)initWithPresenter:(id)arg1 ;
-(void)performOperationWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPresenter:(UIViewController *)arg1 ;
-(void)_performOperationWithContext:(id)arg1 viewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_contextRequiresRemoteService:(id)arg1 ;
-(void)_presentViewServiceWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_ensurePresenterWithCompletion:(/*^block*/id)arg1 ;
-(void)setCustomRUIStyle:(RUIStyle *)arg1 ;
-(RUIStyle *)customRUIStyle;
@end

