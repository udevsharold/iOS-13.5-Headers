/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/REMReplicaManagerProviding.h>

@class REMStore, NSString;

@interface _REMDefaultReplicaManagerProvider : NSObject <REMReplicaManagerProviding> {

	REMStore* _store;

}

@property (nonatomic,readonly) REMStore * store;                    //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithStore:(id)arg1 ;
-(REMStore *)store;
-(id)unsavedReplicaManagersForAccountIDs:(id)arg1 ;
-(id)replicaManagerForAccountID:(id)arg1 ;
@end

