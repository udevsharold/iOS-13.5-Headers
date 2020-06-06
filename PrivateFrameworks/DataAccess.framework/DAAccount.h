/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
#import <DataAccess/DataAccess-Structs.h>
@class ACAccount, DAStatusReport, NSMapTable, NSString, DATaskManager, NSObject, DATrustHandler, NSArray, NSMutableDictionary, NSMutableArray, NSDate, NSData, NSURL, NSSet;

@interface DAAccount : NSObject {

	ACAccount* _backingAccountInfo;
	BOOL _hasInitted;
	BOOL _shouldUseOpportunisticSockets;
	BOOL _wasUserInitiated;
	DAStatusReport* _statusReport;
	NSMapTable* _consumers;
	CFURLStorageSessionRef _storageSession;
	NSString* _clientToken;
	DATaskManager* _taskManager;
	NSObject*<OS_xpc_object> _xpcActivity;
	int _continueCount;
	BOOL _isFetchingAutomatically;
	BOOL _shouldFailAllTasks;
	BOOL _isValidating;
	DATrustHandler* _trustHandler;
	NSArray* _appIdsForPasswordPrompt;
	NSString* _sourceApplicationBundleIdentifier;
	NSMutableDictionary* _dataclassPropertyURLsByDataclass;
	NSMutableArray* _pendingQueries;
	NSObject*<OS_dispatch_queue> _pendingQueryQueue;
	NSDate* _lastQueryStartedTime;

}

@property (nonatomic,retain) NSMutableDictionary * dataclassPropertyURLsByDataclass;              //@synthesize dataclassPropertyURLsByDataclass=_dataclassPropertyURLsByDataclass - In the implementation block
@property (nonatomic,retain) DAStatusReport * statusReport;                                       //@synthesize statusReport=_statusReport - In the implementation block
@property (nonatomic,retain) DATrustHandler * trustHandler;                                       //@synthesize trustHandler=_trustHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldUseOpportunisticSockets;                                  //@synthesize shouldUseOpportunisticSockets=_shouldUseOpportunisticSockets - In the implementation block
@property (assign,nonatomic) BOOL wasUserInitiated;                                               //@synthesize wasUserInitiated=_wasUserInitiated - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingQueries;                                     //@synthesize pendingQueries=_pendingQueries - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> pendingQueryQueue;                      //@synthesize pendingQueryQueue=_pendingQueryQueue - In the implementation block
@property (nonatomic,retain) NSDate * lastQueryStartedTime;                                       //@synthesize lastQueryStartedTime=_lastQueryStartedTime - In the implementation block
@property (nonatomic,readonly) NSString * accountID; 
@property (assign,setter=setDAAccountVersion:,nonatomic) int daAccountVersion; 
@property (nonatomic,copy,readonly) NSString * persistentUUID; 
@property (nonatomic,copy) NSString * accountDescription; 
@property (nonatomic,readonly) NSString * publicDescription; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,copy) NSString * user; 
@property (nonatomic,copy) NSString * host; 
@property (assign,nonatomic) long long port; 
@property (nonatomic,copy) NSString * password; 
@property (assign,nonatomic) BOOL useSSL; 
@property (nonatomic,readonly) long long enabledDataclassesBitmask; 
@property (nonatomic,readonly) BOOL isChildAccount; 
@property (nonatomic,readonly) ACAccount * backingAccountInfo;                                    //@synthesize backingAccountInfo=_backingAccountInfo - In the implementation block
@property (nonatomic,readonly) DATaskManager * taskManager;                                       //@synthesize taskManager=_taskManager - In the implementation block
@property (nonatomic,readonly) NSString * changeTrackingID; 
@property (nonatomic,readonly) int keychainAccessibilityType; 
@property (nonatomic,readonly) NSString * scheduleIdentifier; 
@property (nonatomic,retain) NSData * signingIdentityPersistentReference; 
@property (nonatomic,retain) NSData * encryptionIdentityPersistentReference; 
@property (assign,nonatomic) BOOL shouldDoInitialAutodiscovery; 
@property (nonatomic,readonly) BOOL shouldAutodiscoverAccountProperties; 
@property (nonatomic,copy,readonly) NSString * scheme; 
@property (nonatomic,copy) NSURL * principalURL; 
@property (nonatomic,copy) NSString * principalPath; 
@property (nonatomic,copy,readonly) NSString * clientToken; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSArray * emailAddresses; 
@property (nonatomic,readonly) NSArray * appIdsForPasswordPrompt;                                 //@synthesize appIdsForPasswordPrompt=_appIdsForPasswordPrompt - In the implementation block
@property (nonatomic,readonly) BOOL shouldFailAllTasks;                                           //@synthesize shouldFailAllTasks=_shouldFailAllTasks - In the implementation block
@property (nonatomic,copy,readonly) NSData * identityPersist; 
@property (assign,nonatomic) BOOL isValidating;                                                   //@synthesize isValidating=_isValidating - In the implementation block
@property (nonatomic,readonly) NSString * userAgentHeader; 
@property (nonatomic,readonly) NSSet * serverComplianceClasses; 
@property (nonatomic,readonly) NSString * serverRoot; 
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;                          //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
+(id)_leafAccountTypes;
+(id)_leafAccountTypesToCheckForEquality;
+(id)daAccountSubclassWithBackingAccountInfo:(id)arg1 ;
+(BOOL)shouldCreateAccountForBackingAccountInfo:(id)arg1 ;
+(id)oneshotListOfAccountIDs;
+(void)reacquireClientRestrictions:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)user;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSString *)scheme;
-(NSString *)host;
-(long long)port;
-(NSString *)password;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setPort:(long long)arg1 ;
-(void)setUser:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(id)displayName;
-(NSArray *)emailAddresses;
-(NSString *)username;
-(NSString *)emailAddress;
-(NSString *)accountDescription;
-(void)setUsername:(NSString *)arg1 ;
-(BOOL)useSSL;
-(NSURL *)principalURL;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setUseSSL:(BOOL)arg1 ;
-(id)accountPropertyForKey:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setAccountDescription:(NSString *)arg1 ;
-(BOOL)isDisabled;
-(void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(id)dataclassProperties;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
-(void)reload;
-(NSString *)clientToken;
-(NSString *)accountID;
-(void)tearDown;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)shutdown;
-(id)protocolVersion;
-(NSString *)userAgentHeader;
-(id)syncStoreIdentifier;
-(DATaskManager *)taskManager;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(BOOL)wasUserInitiated;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(id)accountTypeIdentifier;
-(void)removeAccountPropertyForKey:(id)arg1 ;
-(id)oauth2Token;
-(ACAccount *)backingAccountInfo;
-(id)inboxFolder;
-(id)sentItemsFolder;
-(id)deletedItemsFolder;
-(id)draftsFolder;
-(NSData *)encryptionIdentityPersistentReference;
-(BOOL)accountBoolPropertyForKey:(id)arg1 ;
-(BOOL)isHotmailAccount;
-(NSString *)persistentUUID;
-(BOOL)enabledForDADataclass:(long long)arg1 ;
-(int)supportsMailboxSearch;
-(int)supportsEmailFlagging;
-(BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2 ;
-(id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id*)arg3 ;
-(void)performSearchQuery:(id)arg1 ;
-(void)cancelSearchQuery:(id)arg1 ;
-(NSData *)signingIdentityPersistentReference;
-(oneway void)setSigningIdentityPersistentReference:(NSData *)arg1 ;
-(oneway void)setEncryptionIdentityPersistentReference:(NSData *)arg1 ;
-(id)stateString;
-(id)getAppleIDSession;
-(BOOL)isValidating;
-(void)cancelCalendarAvailabilityRequestWithID:(id)arg1 ;
-(void)cancelCalendarDirectorySearchWithID:(id)arg1 ;
-(NSString *)changeTrackingID;
-(NSString *)publicDescription;
-(NSString *)scheduleIdentifier;
-(void)cancelGrantedDelegatesListRequestWithID:(id)arg1 ;
-(BOOL)isChildAccount;
-(void)removeXpcActivity;
-(void)_refreshCredential;
-(void)resetStatusReport;
-(void)_setPersistentUUID:(id)arg1 ;
-(void)ingestBackingAccountInfoProperties;
-(void)performUsingAccountPersona:(/*^block*/id)arg1 ;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(int)accountIntPropertyForKey:(id)arg1 ;
-(void)setAccountIntProperty:(int)arg1 forKey:(id)arg2 ;
-(int)daAccountVersion;
-(void)setDAAccountVersion:(int)arg1 ;
-(DAStatusReport *)statusReport;
-(void)setAccountBoolProperty:(BOOL)arg1 forKey:(id)arg2 ;
-(NSData *)identityPersist;
-(id)passwordWithExpected:(BOOL)arg1 ;
-(NSMutableDictionary *)dataclassPropertyURLsByDataclass;
-(id)urlFromDataclassPropertiesForDataclass:(id)arg1 ;
-(void)checkValidityOnAccountStore:(id)arg1 withConsumer:(id)arg2 inQueue:(id)arg3 ;
-(void)setIsValidating:(BOOL)arg1 ;
-(void)removeFromCoreDAVLoggingDelegates;
-(void)addToCoreDAVLoggingDelegates;
-(BOOL)shouldDoInitialAutodiscovery;
-(BOOL)shouldRemoveDBSyncDataOnAccountChange;
-(id)accountsProviderWithDBHelper:(id)arg1 ;
-(id)containerProviderWithDBHelper:(id)arg1 ;
-(BOOL)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg1 ;
-(void)removeDBSyncData;
-(void)cleanupAccountFiles;
-(id)onBehalfOfBundleIdentifier;
-(BOOL)monitorFoldersWithIDs:(id)arg1 ;
-(BOOL)_isIdentityManagedByProfile;
-(void)setIdentityCertificatePersistentID:(id)arg1 managedByProfile:(BOOL)arg2 ;
-(void)saveAccountPropertiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveAccountProperties;
-(BOOL)canSaveWithAccountProvider:(/*^block*/id)arg1 ;
-(id)exceptionsDict;
-(CFURLStorageSessionRef)copyStorageSession;
-(DATrustHandler *)trustHandler;
-(BOOL)resetCertWarnings;
-(void)setStatusReport:(DAStatusReport *)arg1 ;
-(BOOL)isDelegateAccount;
-(int)keychainAccessibilityType;
-(BOOL)upgradeAccount;
-(void)resetAccountID;
-(BOOL)enabledForAnyDADataclasses:(long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 forDADataclass:(long long)arg2 ;
-(long long)enabledDataclassesBitmask;
-(id)spinnerIdentifiers;
-(void)resumeMonitoringFoldersWithIDs:(id)arg1 ;
-(void)suspendMonitoringFoldersWithIDs:(id)arg1 ;
-(void)stopMonitoringFolderWithID:(id)arg1 ;
-(void)setConsumer:(id)arg1 forTask:(id)arg2 ;
-(id)consumerForTask:(id)arg1 ;
-(void)removeConsumerForTask:(id)arg1 ;
-(void)clientTokenRequestedByServer;
-(id)hostFromDataclassPropertiesForDataclass:(id)arg1 ;
-(BOOL)useSSLFromDataclassPropertiesForDataclass:(id)arg1 ;
-(long long)portFromDataclassPropertiesForDataclass:(id)arg1 ;
-(id)usernameWithoutDomain;
-(id)domainOnly;
-(BOOL)accountContainsEmailAddress:(id)arg1 ;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(void)checkValidityOnAccountStore:(id)arg1 withConsumer:(id)arg2 ;
-(BOOL)saveModifiedPropertiesOnBackingAccount;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(BOOL)autodiscoverAccountConfigurationWithConsumer:(id)arg1 ;
-(void)setShouldDoInitialAutodiscovery:(BOOL)arg1 ;
-(BOOL)shouldAutodiscoverAccountProperties;
-(void)accountDidChangeFromOldAccountInfo:(id)arg1 ;
-(NSString *)serverRoot;
-(NSSet *)serverComplianceClasses;
-(BOOL)handleCertificateError:(id)arg1 ;
-(id)additionalHeaderValues;
-(id)customConnectionProperties;
-(id)oauthInfoProvider;
-(BOOL)monitorFolderWithID:(id)arg1 ;
-(void)stopMonitoringFoldersWithIDs:(id)arg1 ;
-(void)stopMonitoringFolders;
-(id)defaultContainerIdentifierForDADataclass:(long long)arg1 ;
-(void)removeClientCertificateData;
-(void)updateExistingAccountProperties;
-(id)addUsernameToURL:(id)arg1 ;
-(BOOL)preflightSaveWithAccountProvider:(/*^block*/id)arg1 ;
-(CFDataRef)exceptionsForDigest:(id)arg1 ;
-(void)setExceptions:(CFDataRef)arg1 forDigest:(id)arg2 ;
-(BOOL)shouldFailAllTasks;
-(BOOL)isActiveSyncAccount;
-(BOOL)isLDAPAccount;
-(BOOL)isCalDAVAccount;
-(BOOL)isCardDAVAccount;
-(BOOL)isCalDAVChildAccount;
-(BOOL)isGoogleAccount;
-(BOOL)isSubscribedCalendarAccount;
-(BOOL)shouldCancelTaskDueToOnPowerFetchMode;
-(void)saveXpcActivity:(id)arg1 ;
-(BOOL)hasXpcActivity;
-(void)incrementXpcActivityContinueCount;
-(void)decrementXpcActivityContinueCount;
-(void)saveFetchingAutomaticallyState:(BOOL)arg1 ;
-(BOOL)getFetchingAutomaticallyState;
-(BOOL)shouldUseOpportunisticSockets;
-(void)setShouldUseOpportunisticSockets:(BOOL)arg1 ;
-(void)setWasUserInitiated:(BOOL)arg1 ;
-(void)setTrustHandler:(DATrustHandler *)arg1 ;
-(NSArray *)appIdsForPasswordPrompt;
-(void)setDataclassPropertyURLsByDataclass:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)pendingQueries;
-(void)setPendingQueries:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)pendingQueryQueue;
-(void)setPendingQueryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDate *)lastQueryStartedTime;
-(void)setLastQueryStartedTime:(NSDate *)arg1 ;
-(BOOL)handleTrustChallenge:(id)arg1 ;
-(BOOL)handleTrustChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 inQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)dropAssertionsAndRenewCredentialsInQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 inQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)handleValidationError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)defaultEventsFolder;
-(id)eventsFolders;
-(void)synchronizeEventsFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(id)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 moreLocalChangesAvailable:(BOOL)arg7 consumer:(id)arg8 ;
-(BOOL)sendEmailsForCalEvents:(id)arg1 consumer:(id)arg2 ;
-(id)beginDownloadingAttachmentWithUUID:(id)arg1 consumer:(id)arg2 ;
-(void)cancelDownloadingInstance:(id)arg1 error:(id)arg2 ;
-(id)requestCalendarAvailabilityForStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 consumer:(id)arg5 ;
-(id)requestGrantedDelegatesListWithConsumer:(id)arg1 ;
-(id)updateGrantedDelegatePermission:(id)arg1 consumer:(id)arg2 ;
-(void)cancelUpdateGrantedDelegatePermissionRequestWithID:(id)arg1 ;
-(id)performCalendarDirectorySearchForTerms:(id)arg1 recordTypes:(id)arg2 resultLimit:(unsigned long long)arg3 consumer:(id)arg4 ;
-(id)respondToShareRequestForCalendar:(id)arg1 withResponse:(long long)arg2 consumer:(id)arg3 ;
-(id)reportShareRequestAsJunkForCalendar:(id)arg1 consumer:(id)arg2 ;
-(void)cancelShareResponseInstance:(id)arg1 error:(id)arg2 ;
-(id)defaultContactsFolder;
-(id)contactsFolders;
-(void)synchronizeContactsFolder:(id)arg1 previousTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 highestIdContext:(id)arg5 isInitialUberSync:(BOOL)arg6 isResyncAfterConnectionFailed:(BOOL)arg7 previousTagIsSuspect:(BOOL)arg8 moreLocalChangesAvailable:(BOOL)arg9 consumer:(id)arg10 ;
-(void)updateOofSettingsWithParams:(id)arg1 consumer:(id)arg2 ;
-(void)retrieveOofSettingsForConsumer:(id)arg1 ;
-(BOOL)isOofSupported;
-(id)getPendingQueryQueue;
-(void)_reallyPerformSearchQuery:(id)arg1 ;
-(void)_dequeueQuery;
-(void)_reallyCancelSearchQuery:(id)arg1 ;
-(void)_reallyCancelPendingSearchQuery:(id)arg1 ;
-(void)_reallyCancelAllSearchQueries;
-(BOOL)_reallySearchQueriesRunning;
-(void)cancelAllSearchQueries;
-(BOOL)searchQueriesRunning;
-(id)defaultToDosFolder;
-(id)toDosFolders;
-(void)synchronizeToDosFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(id)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 moreLocalChangesAvailable:(BOOL)arg7 consumer:(id)arg8 ;
-(int)toDosNumberOfPastDaysToSync;
-(void)setToDosNumberOfPastDaysToSync:(int)arg1 ;
-(id)defaultNotesFolder;
-(id)notesFolders;
-(void)synchronizeNotesFolder:(id)arg1 noteContext:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 changeSet:(id)arg5 notesToDeleteAfterSync:(id)arg6 isInitialUberSync:(BOOL)arg7 isResyncAfterConnectionFailed:(BOOL)arg8 moreLocalChangesAvailable:(BOOL)arg9 consumer:(id)arg10 ;
@end

