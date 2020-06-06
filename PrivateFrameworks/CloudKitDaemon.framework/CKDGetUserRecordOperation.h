/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDFetchRecordsOperation.h>

@class CKRecord;

@interface CKDGetUserRecordOperation : CKDFetchRecordsOperation {

	CKRecord* _userRecord;

}

@property (nonatomic,retain) CKRecord * userRecord;              //@synthesize userRecord=_userRecord - In the implementation block
-(void)main;
-(id)analyticsPayload;
-(CKRecord *)userRecord;
-(void)setUserRecord:(CKRecord *)arg1 ;
-(void)fetchRecordsWithIDs:(id)arg1 andFullRecords:(id)arg2 ;
@end

