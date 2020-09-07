/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BFFCapabilities : NSObject {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	BOOL _shouldShowWalletInitialized;
	BOOL _shouldShowWallet;

}
+(id)sharedCapabilities;
-(id)init;
-(void)dealloc;
-(BOOL)supportsApplePay;
-(BOOL)isAppleTV;
-(void)localeChanged:(id)arg1 ;
-(void)shouldShowWallet:(/*^block*/id)arg1 ;
@end
