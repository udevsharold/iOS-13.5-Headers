/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper.h>

@class CKRecordZoneID, CKRecordID, NSArray, NSMutableSet;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchRecordsInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper {

	CKRecordZoneID* _zoneID;
	CKRecordID* _recordID;
	NSArray* _desiredKeys;
	NSMutableSet* _records;

}

@property (nonatomic,readonly) CKRecordZoneID * zoneID;              //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,readonly) CKRecordID * recordID;                //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) NSArray * desiredKeys;                //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,readonly) NSMutableSet * records;               //@synthesize records=_records - In the implementation block
-(CKRecordZoneID *)zoneID;
-(CKRecordID *)recordID;
-(NSMutableSet *)records;
-(NSArray *)desiredKeys;
-(id)initWithActivity:(id)arg1 options:(id)arg2 promise:(id)arg3 database:(id)arg4 useAnonymousRequests:(BOOL)arg5 zoneID:(id)arg6 recordID:(id)arg7 desiredKeys:(id)arg8 ;
@end

