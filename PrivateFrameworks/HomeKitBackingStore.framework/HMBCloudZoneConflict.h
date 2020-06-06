/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class CKRecord;

@interface HMBCloudZoneConflict : HMFObject {

	CKRecord* _client;
	CKRecord* _server;
	CKRecord* _ancestor;

}

@property (nonatomic,readonly) CKRecord * client;                //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) CKRecord * server;                //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) CKRecord * ancestor;              //@synthesize ancestor=_ancestor - In the implementation block
-(CKRecord *)client;
-(CKRecord *)server;
-(id)initWithError:(id)arg1 ;
-(id)initWithClientRecord:(id)arg1 serverRecord:(id)arg2 ancestorRecord:(id)arg3 ;
-(CKRecord *)ancestor;
@end

