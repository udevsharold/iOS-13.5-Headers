/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKRecord;

@interface HDCloudSyncRecord : NSObject {

	CKRecord* _record;

}

@property (nonatomic,retain) CKRecord * record;              //@synthesize record=_record - In the implementation block
+(id)_valueInRecord:(id)arg1 forKey:(id)arg2 type:(Class)arg3 encrypted:(BOOL)arg4 error:(id*)arg5 ;
+(id)recordWithCKRecord:(id)arg1 error:(id*)arg2 ;
+(BOOL)hasFutureSchema:(id)arg1 ;
+(BOOL)_validateOptionalValueInRecord:(id)arg1 forKey:(id)arg2 type:(Class)arg3 encrypted:(BOOL)arg4 error:(id*)arg5 ;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2 ;
@end
