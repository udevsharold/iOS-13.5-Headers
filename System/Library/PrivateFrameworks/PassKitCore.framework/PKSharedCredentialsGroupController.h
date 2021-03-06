/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PassKitCore/PassKitCore-Structs.h>
@class PKPeerPaymentContactResolver, PKPaymentWebService, NSObject, NSHashTable, NSDictionary, NSArray, PKPaymentPass;

@interface PKSharedCredentialsGroupController : NSObject {

	PKPeerPaymentContactResolver* _contactResolver;
	PKPaymentWebService* _webService;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _delegates;
	os_unfair_lock_s _delegateLock;
	NSDictionary* _sharedCredentialsForCredential;
	NSDictionary* _invitationReceiptsForCredential;
	NSDictionary* _credentialForIdentifier;
	BOOL _canSendInvitation;
	BOOL _sharingEnabled;
	NSArray* _groups;
	PKPaymentPass* _pass;

}

@property (nonatomic,readonly) NSArray * groups;                      //@synthesize groups=_groups - In the implementation block
@property (nonatomic,readonly) NSArray * nonLocalGroups; 
@property (nonatomic,readonly) BOOL sharingEnabled;                   //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * pass;                  //@synthesize pass=_pass - In the implementation block
-(NSArray *)groups;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(BOOL)sharingEnabled;
-(PKPaymentPass *)pass;
-(void)parseCredentialsOnPass:(id)arg1 ;
-(void)immobilizerTokenCountWithCompletion:(/*^block*/id)arg1 ;
-(void)didUpdateGroups;
-(void)updateGroupsWithCredential:(id)arg1 ;
-(id)initWithPass:(id)arg1 contactResolver:(id)arg2 webService:(id)arg3 queue:(id)arg4 ;
-(id)contactForGroup:(id)arg1 ;
-(void)fetchContactForGroup:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)canSendInvitationWithCompletion:(/*^block*/id)arg1 ;
-(void)revokeGroup:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSArray *)nonLocalGroups;
@end

