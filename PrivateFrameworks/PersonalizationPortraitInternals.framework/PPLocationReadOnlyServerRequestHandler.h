/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PPLocationReadOnlyServerProtocol.h>

@protocol PPLocationClientProtocol;
@class PPXPCServerPipelinedBatchQueryManager, NSString, _PASBundleIdResolver;

@interface PPLocationReadOnlyServerRequestHandler : NSObject <PPLocationReadOnlyServerProtocol> {

	id<PPLocationClientProtocol> _clientProxy;
	PPXPCServerPipelinedBatchQueryManager* _queryManager;
	NSString* _clientProcessName;
	_PASBundleIdResolver* _bundleIdResolver;

}

@property (nonatomic,copy) NSString * clientProcessName;                           //@synthesize clientProcessName=_clientProcessName - In the implementation block
@property (nonatomic,retain) _PASBundleIdResolver * bundleIdResolver;              //@synthesize bundleIdResolver=_bundleIdResolver - In the implementation block
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)locationRecordsWithQuery:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)rankedLocationsWithQuery:(id)arg1 queryId:(unsigned long long)arg2 ;
-(void)setRemoteObjectProxy:(id)arg1 ;
-(NSString *)clientProcessName;
-(void)setClientProcessName:(NSString *)arg1 ;
-(_PASBundleIdResolver *)bundleIdResolver;
-(void)setBundleIdResolver:(_PASBundleIdResolver *)arg1 ;
-(void)unblockPendingQueries;
@end

