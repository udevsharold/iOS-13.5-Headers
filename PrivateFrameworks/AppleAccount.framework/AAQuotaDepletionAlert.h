/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ACAccountStore, ACAccount;

@interface AAQuotaDepletionAlert : NSObject {

	NSString* _dataclass;
	ACAccountStore* _accountStore;
	ACAccount* _primaryAccount;

}
+(BOOL)_isDisabledDataclass:(id)arg1 ;
-(id)init;
-(id)_deviceSpecificLocalizedString:(id)arg1 ;
-(id)_primaryAccount;
-(void)showWithHandler:(/*^block*/id)arg1 ;
-(id)initForDataclass:(id)arg1 ;
-(BOOL)showIfNecessaryWithHandler:(/*^block*/id)arg1 ;
@end

