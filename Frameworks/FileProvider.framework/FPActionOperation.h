/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPOperation.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol FPXOperationService;
@class NSProgress, NSDictionary, NSString, FPStitchingSession, FPItemManager, FPService, NSArray, FPItem;

@interface FPActionOperation : FPOperation <NSProgressReporting> {

	NSDictionary* _itemsByDomainID;
	NSString* _providerIdentifier;
	BOOL _multiProviders;
	unsigned long long _logSection;
	FPStitchingSession* _stitcher;
	unsigned long long _attemptedRecoveryCount;
	BOOL _finishAfterPreflight;
	BOOL _skipPreflight;
	BOOL _setupRemoteOperationService;
	BOOL _haveErrorRecovery;
	BOOL _havePreflight;
	BOOL _haveStitching;
	/*^block*/id _placeholdersCreationBlock;
	/*^block*/id _actionCompletionBlock;
	NSProgress* _progress;
	/*^block*/id _errorRecoveryHandler;
	FPItemManager* _itemManager;
	FPService*<FPXOperationService> _remoteService;
	NSString* _action;
	NSArray* _sourceItemsToPreflight;
	FPItem* _destinationItemToPreflight;

}

@property (nonatomic,retain) FPItemManager * itemManager;                                //@synthesize itemManager=_itemManager - In the implementation block
@property (nonatomic,readonly) FPStitchingSession * stitcher; 
@property (nonatomic,retain) FPService*<FPXOperationService> remoteService;              //@synthesize remoteService=_remoteService - In the implementation block
@property (nonatomic,readonly) id<FPXOperationService> remoteServiceProxy; 
@property (nonatomic,retain) NSProgress * progress;                                      //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL setupRemoteOperationService;                           //@synthesize setupRemoteOperationService=_setupRemoteOperationService - In the implementation block
@property (assign,nonatomic) BOOL haveErrorRecovery;                                     //@synthesize haveErrorRecovery=_haveErrorRecovery - In the implementation block
@property (assign,nonatomic) BOOL havePreflight;                                         //@synthesize havePreflight=_havePreflight - In the implementation block
@property (assign,nonatomic) BOOL haveStitching;                                         //@synthesize haveStitching=_haveStitching - In the implementation block
@property (nonatomic,copy) NSString * action;                                            //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSArray * sourceItemsToPreflight;                             //@synthesize sourceItemsToPreflight=_sourceItemsToPreflight - In the implementation block
@property (nonatomic,copy) FPItem * destinationItemToPreflight;                          //@synthesize destinationItemToPreflight=_destinationItemToPreflight - In the implementation block
@property (assign,nonatomic) BOOL finishAfterPreflight;                                  //@synthesize finishAfterPreflight=_finishAfterPreflight - In the implementation block
@property (assign,nonatomic) BOOL skipPreflight;                                         //@synthesize skipPreflight=_skipPreflight - In the implementation block
@property (nonatomic,copy) id placeholdersCreationBlock;                                 //@synthesize placeholdersCreationBlock=_placeholdersCreationBlock - In the implementation block
@property (nonatomic,copy) id actionCompletionBlock;                                     //@synthesize actionCompletionBlock=_actionCompletionBlock - In the implementation block
@property (nonatomic,copy) id errorRecoveryHandler;                                      //@synthesize errorRecoveryHandler=_errorRecoveryHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(NSProgress *)progress;
-(id)operationDescription;
-(NSString *)action;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setAction:(NSString *)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithProvider:(id)arg1 action:(id)arg2 ;
-(void)setHaveStitching:(BOOL)arg1 ;
-(void)setActionCompletionBlock:(id)arg1 ;
-(FPStitchingSession *)stitcher;
-(void)actionMain;
-(void)presendNotifications;
-(void)resetStitcher;
-(id)initWithItemsOfDifferentProviders:(id)arg1 action:(id)arg2 ;
-(void)setSetupRemoteOperationService:(BOOL)arg1 ;
-(FPItemManager *)itemManager;
-(id<FPXOperationService>)remoteServiceProxy;
-(BOOL)finishAfterPreflight;
-(void)setSourceItemsToPreflight:(NSArray *)arg1 ;
-(void)setDestinationItemToPreflight:(FPItem *)arg1 ;
-(void)setHavePreflight:(BOOL)arg1 ;
-(void)setHaveErrorRecovery:(BOOL)arg1 ;
-(void)tryRecoveringFromError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FPService*<FPXOperationService>)remoteService;
-(void)tryRecoveringFromPreflightErrors:(id)arg1 recoveryHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)subclassPreflightWithCompletion:(/*^block*/id)arg1 ;
-(id)placeholdersCreationBlock;
-(void)setPlaceholdersCreationBlock:(id)arg1 ;
-(id)replicateForItems:(id)arg1 ;
-(void)setFinishAfterPreflight:(BOOL)arg1 ;
-(void)setErrorRecoveryHandler:(id)arg1 ;
-(void)setSkipPreflight:(BOOL)arg1 ;
-(BOOL)setupRemoteOperationService;
-(NSArray *)sourceItemsToPreflight;
-(FPItem *)destinationItemToPreflight;
-(void)_runUserInteractionsPreflight:(/*^block*/id)arg1 ;
-(void)_dispatchToSubOperations;
-(void)_preflightAndRun;
-(void)setRemoteService:(FPService*<FPXOperationService>)arg1 ;
-(id)actionCompletionBlock;
-(BOOL)haveErrorRecovery;
-(id)errorRecoveryHandler;
-(BOOL)skipPreflight;
-(void)setItemManager:(FPItemManager *)arg1 ;
-(BOOL)havePreflight;
-(BOOL)haveStitching;
@end

