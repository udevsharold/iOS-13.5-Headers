/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PPContactServerProtocol.h>

@protocol PPContactClientProtocol;
@class PPXPCServerPipelinedBatchQueryManager, NSString;

@interface PPContactServerRequestHandler : NSObject <PPContactServerProtocol> {

	id<PPContactClientProtocol> _clientProxy;
	PPXPCServerPipelinedBatchQueryManager* _queryManager;
	NSString* _clientProcessName;

}

@property (nonatomic,copy) NSString * clientProcessName;              //@synthesize clientProcessName=_clientProcessName - In the implementation block
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)contactNameRecordChangesForClient:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)contactNameRecordChangesForClient:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)contactNameRecordsForClient:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)rankedContactsWithQuery:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)setRemoteObjectProxy:(id)arg1 ;
-(NSString *)clientProcessName;
-(void)setClientProcessName:(NSString *)arg1 ;
-(void)unblockPendingQueries;
@end

