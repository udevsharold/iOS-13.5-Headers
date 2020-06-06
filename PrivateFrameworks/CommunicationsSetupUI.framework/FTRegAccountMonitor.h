/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
@class IMServiceImpl, NSArray, FTRegConnectionHandler;

@interface FTRegAccountMonitor : NSObject {

	long long _serviceType;
	IMServiceImpl* _service;
	NSArray* _accounts;
	FTRegConnectionHandler* _connectionHandler;
	struct {
		unsigned listeningForNotifications : 1;
	}  _monitorFlags;

}

@property (assign,nonatomic) long long serviceType;                          //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) IMServiceImpl * service;                        //@synthesize service=_service - In the implementation block
@property (nonatomic,retain,readonly) NSArray * activeAccounts;              //@synthesize accounts=_accounts - In the implementation block
-(void)dealloc;
-(long long)serviceType;
-(IMServiceImpl *)service;
-(NSArray *)activeAccounts;
-(void)setService:(IMServiceImpl *)arg1 ;
-(void)_startListeningForNotifications;
-(void)setServiceType:(long long)arg1 ;
-(id)initWithServiceType:(long long)arg1 ;
-(void)_handleDaemonConnected:(id)arg1 ;
-(id)logName;
-(void)_stopListeningForNotifications;
-(void)_handleAccountNotification:(id)arg1 ;
-(void)_updateAccountState:(BOOL)arg1 ;
-(id)_activeAccounts;
-(BOOL)_shouldHandleAccountNofication:(id)arg1 ;
@end

