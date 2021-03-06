/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DMFConfigurationSourceClientInterface <NSObject>
@required
-(void)probe:(/*^block*/id)arg1;
-(void)configurationStatusDidChange:(id)arg1 completion:(/*^block*/id)arg2;
-(void)configurationEventsDidChange:(id)arg1 completion:(/*^block*/id)arg2;
-(void)configurationEngineRequestedAsset:(id)arg1 completion:(/*^block*/id)arg2;

@end

