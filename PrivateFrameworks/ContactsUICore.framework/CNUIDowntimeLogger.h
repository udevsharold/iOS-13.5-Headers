/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSObject;

@interface CNUIDowntimeLogger : NSObject {

	NSObject*<OS_os_log> _log;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> log;              //@synthesize log=_log - In the implementation block
+(id)sharedLogger;
-(id)init;
-(NSObject*<OS_os_log>)log;
-(id)initWithLog:(id)arg1 ;
-(void)logSuccessFetchingContacts:(id)arg1 ofFamilyMember:(id)arg2 ;
-(void)logFailure:(id)arg1 fetchingContactsOfFamilyMember:(id)arg2 ;
-(void)logResultOfFetchingContacts:(id)arg1 ofFamilyMember:(id)arg2 ;
-(void)logSuccessUpdatingContactListByAddingContacts:(id)arg1 ofFamilyMember:(id)arg2 ;
-(void)logFailure:(id)arg1 updatingContactListByAddingContacts:(id)arg2 ofFamilyMember:(id)arg3 ;
-(void)logSuccessUpdatingContactListByRemovingContacts:(id)arg1 ofFamilyMember:(id)arg2 ;
-(void)logFailure:(id)arg1 updatingContactListByRemovingContacts:(id)arg2 ofFamilyMember:(id)arg3 ;
-(void)logSuccessUpdatingContactWhitelistByAddingContacts:(id)arg1 ofFamilyMember:(id)arg2 ;
-(void)logFailure:(id)arg1 updatingContactWhitelistByAddingContacts:(id)arg2 ofFamilyMember:(id)arg3 ;
-(void)logSuccessUpdatingContactWhitelistByRemovingContacts:(id)arg1 ofFamilyMember:(id)arg2 ;
-(void)logFailure:(id)arg1 updatingContactWhitelistByRemovingContacts:(id)arg2 ofFamilyMember:(id)arg3 ;
-(void)logFetchingFamilyCircleError:(id)arg1 ;
-(void)logFetchingMeError:(id)arg1 ;
@end

