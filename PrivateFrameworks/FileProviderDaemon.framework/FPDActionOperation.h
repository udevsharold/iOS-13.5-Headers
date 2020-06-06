/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPOperation.h>

@class NSProgress, FPDExtensionManager, FPDRequest, FPActionOperationInfo, NSMutableArray, NSMutableDictionary, NSMutableSet, NSError;

@interface FPDActionOperation : FPOperation {

	BOOL _hasFinishedPreflight;
	NSProgress* _progress;
	FPDExtensionManager* _manager;
	FPDRequest* _request;
	FPActionOperationInfo* _info;
	NSMutableArray* _clients;
	NSMutableArray* _clientCompletions;
	NSMutableDictionary* _progressByRoot;
	NSMutableDictionary* _errorsByRoot;
	NSMutableSet* _completedRoots;
	NSMutableDictionary* _createdItemByRoot;
	NSMutableDictionary* _progressCompletionsByRoot;
	NSError* _error;
	unsigned long long _logSection;

}

@property (nonatomic,retain) NSMutableArray * clients;                                     //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientCompletions;                           //@synthesize clientCompletions=_clientCompletions - In the implementation block
@property (assign,nonatomic) BOOL hasFinishedPreflight;                                    //@synthesize hasFinishedPreflight=_hasFinishedPreflight - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * progressByRoot;                         //@synthesize progressByRoot=_progressByRoot - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByRoot;                           //@synthesize errorsByRoot=_errorsByRoot - In the implementation block
@property (nonatomic,retain) NSMutableSet * completedRoots;                                //@synthesize completedRoots=_completedRoots - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * createdItemByRoot;                      //@synthesize createdItemByRoot=_createdItemByRoot - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * progressCompletionsByRoot;              //@synthesize progressCompletionsByRoot=_progressCompletionsByRoot - In the implementation block
@property (nonatomic,retain) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long logSection;                                //@synthesize logSection=_logSection - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                                      //@synthesize progress=_progress - In the implementation block
@property (nonatomic,__weak,readonly) FPDExtensionManager * manager;                       //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) FPDRequest * request;                                       //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) FPActionOperationInfo * info;                               //@synthesize info=_info - In the implementation block
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(NSProgress *)progress;
-(FPDExtensionManager *)manager;
-(FPActionOperationInfo *)info;
-(FPDRequest *)request;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(NSMutableArray *)clients;
-(void)setClients:(NSMutableArray *)arg1 ;
-(void)dumpStateTo:(id)arg1 ;
-(void)registerFrameworkClient:(id)arg1 operationCompletion:(/*^block*/id)arg2 ;
-(id)progressForRoot:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)progressByRoot;
-(void)setProgressByRoot:(NSMutableDictionary *)arg1 ;
-(void)cancelRoot:(id)arg1 ;
-(id)initWithActionInfo:(id)arg1 request:(id)arg2 server:(id)arg3 ;
-(unsigned long long)logSection;
-(void)setHasFinishedPreflight:(BOOL)arg1 ;
-(void)forAllClients:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)createdItemByRoot;
-(NSMutableSet *)completedRoots;
-(NSMutableDictionary *)errorsByRoot;
-(NSMutableDictionary *)progressCompletionsByRoot;
-(void)unregisterClientsAfterCompletion;
-(BOOL)hasFinishedPreflight;
-(void)sendPastUpdatesToClient:(id)arg1 ;
-(NSMutableArray *)clientCompletions;
-(void)setClientCompletions:(NSMutableArray *)arg1 ;
-(void)setErrorsByRoot:(NSMutableDictionary *)arg1 ;
-(void)setCompletedRoots:(NSMutableSet *)arg1 ;
-(void)setCreatedItemByRoot:(NSMutableDictionary *)arg1 ;
-(void)setProgressCompletionsByRoot:(NSMutableDictionary *)arg1 ;
-(void)setLogSection:(unsigned long long)arg1 ;
@end

