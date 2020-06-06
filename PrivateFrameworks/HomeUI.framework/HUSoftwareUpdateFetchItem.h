/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class HMHome, NAFuture;

@interface HUSoftwareUpdateFetchItem : HFItem {

	HMHome* _home;
	NAFuture* _softwareUpdateFetchFuture;

}

@property (nonatomic,readonly) HMHome * home;                                   //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NAFuture * softwareUpdateFetchFuture;              //@synthesize softwareUpdateFetchFuture=_softwareUpdateFetchFuture - In the implementation block
-(id)init;
-(HMHome *)home;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(NAFuture *)softwareUpdateFetchFuture;
-(void)setSoftwareUpdateFetchFuture:(NAFuture *)arg1 ;
-(id)initWithHome:(id)arg1 softwareUpdateFetchFuture:(id)arg2 ;
@end

