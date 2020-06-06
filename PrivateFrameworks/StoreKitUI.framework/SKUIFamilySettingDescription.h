/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUISettingDescription.h>

@class SKUISettingsFamilyViewStateCoordinator;

@interface SKUIFamilySettingDescription : SKUISettingDescription {

	SKUISettingsFamilyViewStateCoordinator* _viewStateCoordinator;
	long long _viewState;

}

@property (nonatomic,readonly) long long viewState;              //@synthesize viewState=_viewState - In the implementation block
+(Class)_viewClassForSettingDescription:(id)arg1 ;
-(long long)viewState;
-(BOOL)_initiallyHidden;
-(id)initWithViewElement:(id)arg1 parent:(id)arg2 ;
-(void)handleSelectionOnCompletion:(/*^block*/id)arg1 ;
-(void)_updateViewState;
-(void)_updateWithViewState:(long long)arg1 ;
@end

