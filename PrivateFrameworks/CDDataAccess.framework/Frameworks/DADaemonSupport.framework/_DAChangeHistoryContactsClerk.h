/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DADaemonSupport/DAChangeHistoryClerk.h>

@class CNContactStore;

@interface _DAChangeHistoryContactsClerk : DAChangeHistoryClerk {

	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
+(id)os_log;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(void)unregisterClientWithIdentifier:(id)arg1 forContainer:(id)arg2 ;
-(void)registerClientWithIdentifier:(id)arg1 forContainer:(id)arg2 ;
-(id)identifiersOfAllRegisterdClients;
@end

