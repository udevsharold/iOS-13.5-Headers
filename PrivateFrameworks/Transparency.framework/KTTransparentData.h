/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSData;

@interface KTTransparentData : NSObject <NSSecureCoding> {

	NSMutableArray* _accounts;
	NSData* _inclusionProof;
	NSData* _uriVRFOutput;

}

@property (retain) NSMutableArray * accounts;              //@synthesize accounts=_accounts - In the implementation block
@property (retain) NSData * uriVRFOutput;                  //@synthesize uriVRFOutput=_uriVRFOutput - In the implementation block
@property (retain) NSData * inclusionProof;                //@synthesize inclusionProof=_inclusionProof - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)filterLoggableDatas:(id)arg1 deviceIdVRFOutput:(id)arg2 ;
+(id)filterLoggableDatas:(id)arg1 clientDataVRFOutput:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)serialize;
-(NSMutableArray *)accounts;
-(void)setAccounts:(NSMutableArray *)arg1 ;
-(id)accountForAccountId:(id)arg1 ;
-(BOOL)updateWithMutation:(id)arg1 error:(id*)arg2 ;
-(NSData *)inclusionProof;
-(NSData *)uriVRFOutput;
-(void)setInclusionProof:(NSData *)arg1 ;
-(void)setUriVRFOutput:(NSData *)arg1 ;
-(BOOL)updateWithMapLeaf:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateWithSMTs:(id)arg1 error:(id*)arg2 ;
-(id)initWithUriVRFOutput:(id)arg1 mapLeaf:(id)arg2 pendingSMTs:(id)arg3 error:(id*)arg4 ;
-(void)markAccountsWithMutationMs:(unsigned long long)arg1 ;
-(void)addAccountsObject:(id)arg1 ;
-(void)removeAccountsObject:(id)arg1 ;
-(id)mutationsFromSMTs:(id)arg1 error:(id*)arg2 ;
-(id)sortMutationsByTimestamp:(id)arg1 ;
-(id)initWithUriVRFOutput:(id)arg1 ;
-(BOOL)validateAndUpdateWithSyncedLoggableDatas:(id)arg1 accountId:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateOtherAccountIDsInactiveForAccountId:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateActiveClientDatasForAccountId:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateAndUpdateWithServerLoggableDatas:(id)arg1 accountId:(id)arg2 error:(id*)arg3 ;
-(id)earliestAddedDate:(id)arg1 ;
@end

