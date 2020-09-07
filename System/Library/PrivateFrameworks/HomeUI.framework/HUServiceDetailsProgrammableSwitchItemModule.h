/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUServiceDetailsItemModule.h>

@class HUCharacteristicEventOptionProvider, NSSet;

@interface HUServiceDetailsProgrammableSwitchItemModule : HUServiceDetailsItemModule {

	HUCharacteristicEventOptionProvider* _programmableSwitchOptionsProvider;
	NSSet* _itemProviders;

}

@property (nonatomic,copy) NSSet * itemProviders;                                                                    //@synthesize itemProviders=_itemProviders - In the implementation block
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> sourceItem; 
@property (nonatomic,readonly) HUCharacteristicEventOptionProvider * programmableSwitchOptionsProvider;              //@synthesize programmableSwitchOptionsProvider=_programmableSwitchOptionsProvider - In the implementation block
-(NSSet *)itemProviders;
-(void)setItemProviders:(NSSet *)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(HUCharacteristicEventOptionProvider *)programmableSwitchOptionsProvider;
@end
