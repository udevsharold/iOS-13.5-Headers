/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore;

@interface _ICQAccountManager : NSObject {

	ACAccountStore* _accountStore;

}

@property (readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
-(id)init;
-(id)initWithAccountStore:(id)arg1 ;
-(ACAccountStore *)accountStore;
@end

