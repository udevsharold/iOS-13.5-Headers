/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSArray, NoteContext, ACAccountStore, NSObject, NSLock;

@interface AccountUtilities : NSObject {

	NSArray* _accountIDsEnabledForNotes;
	NoteContext* _noteContext;
	ACAccountStore* _accountStore;
	NSObject*<OS_dispatch_group> _backgroundDispatchGroup;
	NSLock* _updateAccountInfosLock;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                                     //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> backgroundDispatchGroup;              //@synthesize backgroundDispatchGroup=_backgroundDispatchGroup - In the implementation block
@property (retain) NSLock * updateAccountInfosLock;                                             //@synthesize updateAccountInfosLock=_updateAccountInfosLock - In the implementation block
+(id)sharedAccountUtilities;
-(id)init;
-(void)dealloc;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(ACAccountStore *)accountStore;
-(void)_accountStoreDidChange:(id)arg1 ;
-(id)localAccountDisplayName;
-(id)defaultStoreSyncIdWithDesiredSyncId:(id)arg1 ;
-(void)updateAccountInfos;
-(BOOL)localNotesExist;
-(NSObject*<OS_dispatch_group>)backgroundDispatchGroup;
-(NSLock *)updateAccountInfosLock;
-(id)freshContext;
-(void)startKeepingAccountInfosUpToDate;
-(id)accountsEnabledForNotes;
-(id)accountIDsEnabledForNotes;
-(void)setBackgroundDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setUpdateAccountInfosLock:(NSLock *)arg1 ;
@end

