/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerUI/PowerUISignalMonitor.h>

@protocol PowerUISignalMonitorDelegate, OS_os_log;
@class PKPassLibrary, NSObject, NSString;

@interface PowerUIWalletSignalMonitor : NSObject <PowerUISignalMonitor> {

	PKPassLibrary* _wallet;
	id<PowerUISignalMonitorDelegate> _delegate;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) PKPassLibrary * wallet;                                 //@synthesize wallet=_wallet - In the implementation block
@property (nonatomic,retain) id<PowerUISignalMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                               //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)monitorWithDelegate:(id)arg1 ;
-(id<PowerUISignalMonitorDelegate>)delegate;
-(void)setDelegate:(id<PowerUISignalMonitorDelegate>)arg1 ;
-(NSObject*<OS_os_log>)log;
-(id)initWithDelegate:(id)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)startMonitoring;
-(void)stopMonitoring;
-(unsigned long long)signalID;
-(id)requiredFullChargeDate;
-(void)initializeWallet;
-(void)sourceInformationChangedNotification:(id)arg1 ;
-(PKPassLibrary *)wallet;
-(void)setWallet:(PKPassLibrary *)arg1 ;
@end

