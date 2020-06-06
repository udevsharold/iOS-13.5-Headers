/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/REMChangeObject.h>

@class REMChangeTransaction, NSArray, _REMNSPersistentHistoryChangeStorage, NSPersistentHistoryChange;

@interface REMNSPersistentHistoryChange : REMChangeObject {

	BOOL _isCoalesced;
	REMChangeTransaction* _internal_ChangeTransaction;
	NSArray* _coalescedChanges;
	_REMNSPersistentHistoryChangeStorage* _storage;
	NSPersistentHistoryChange* _persistentHistoryChange;

}

@property (retain) _REMNSPersistentHistoryChangeStorage * storage;                                  //@synthesize storage=_storage - In the implementation block
@property (__weak,readonly) NSPersistentHistoryChange * persistentHistoryChange;                    //@synthesize persistentHistoryChange=_persistentHistoryChange - In the implementation block
@property (assign,nonatomic,__weak) REMChangeTransaction * internal_ChangeTransaction;              //@synthesize internal_ChangeTransaction=_internal_ChangeTransaction - In the implementation block
@property (assign,nonatomic) BOOL isCoalesced;                                                      //@synthesize isCoalesced=_isCoalesced - In the implementation block
@property (nonatomic,retain) NSArray * coalescedChanges;                                            //@synthesize coalescedChanges=_coalescedChanges - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortStringForChangeType:(long long)arg1 ;
+(id)stringForChangeType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(_REMNSPersistentHistoryChangeStorage *)storage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)changeType;
-(void)setStorage:(_REMNSPersistentHistoryChangeStorage *)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(id)changedObjectID;
-(id)tombstone;
-(id)transaction;
-(BOOL)isCoalesced;
-(long long)changeID;
-(id)updatedProperties;
-(NSArray *)coalescedChanges;
-(NSPersistentHistoryChange *)persistentHistoryChange;
-(REMChangeTransaction *)internal_ChangeTransaction;
-(void)setInternal_ChangeTransaction:(REMChangeTransaction *)arg1 ;
-(id)initWithPersistentHistoryChange:(id)arg1 ;
-(id)changedManagedObjectID;
-(void)resolveWithObjectID:(id)arg1 ;
-(id)copyForCoalescing;
-(void)setIsCoalesced:(BOOL)arg1 ;
-(void)setCoalescedChanges:(NSArray *)arg1 ;
@end

