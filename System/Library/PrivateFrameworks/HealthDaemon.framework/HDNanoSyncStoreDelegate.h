/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDNanoSyncStoreDelegate <NSObject>
@property (nonatomic,readonly) BOOL isMaster; 
@required
-(BOOL)isMaster;
-(void)nanoSyncStore:(id)arg1 remoteSystemBuildVersionDidChange:(id)arg2;
-(void)nanoSyncStore:(id)arg1 restoreStateDidChange:(long long)arg2;
-(void)nanoSyncStore:(id)arg1 deviceNameDidChange:(id)arg2;

@end

