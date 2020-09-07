/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HUAppleMusicAccountModule;

@interface HUAppleMusicAccountItemManager : HFItemManager {

	BOOL _shouldDisableUpdates;
	HUAppleMusicAccountModule* _module;

}

@property (assign,nonatomic) BOOL shouldDisableUpdates;                         //@synthesize shouldDisableUpdates=_shouldDisableUpdates - In the implementation block
@property (nonatomic,readonly) HUAppleMusicAccountModule * module;              //@synthesize module=_module - In the implementation block
-(HUAppleMusicAccountModule *)module;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithMediaProfileContainer:(id)arg1 delegate:(id)arg2 ;
-(void)_moduleStateDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(void)setShouldDisableUpdates:(BOOL)arg1 ;
-(BOOL)shouldDisableUpdates;
@end
