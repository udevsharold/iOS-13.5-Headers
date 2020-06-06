/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CDInteractionAdvising, OS_dispatch_queue;
@class NSObject, _CDCachedPeopleSuggestion, _CDInteractionStoreNotificationReceiver, _CDPeopleSuggesterContext, _CDPeopleSuggesterSettings;

@interface _CDPeopleSuggester : NSObject {

	id<_CDInteractionAdvising> _advisor;
	NSObject*<OS_dispatch_queue> _queue;
	_CDCachedPeopleSuggestion* _cache;
	_CDInteractionStoreNotificationReceiver* _receiver;
	int _settingsNotifyToken;
	BOOL _enableCaching;
	_CDPeopleSuggesterContext* _context;
	_CDPeopleSuggesterSettings* _settings;
	double _cacheTimeoutSeconds;

}

@property (assign) BOOL enableCaching;                                 //@synthesize enableCaching=_enableCaching - In the implementation block
@property (assign) double cacheTimeoutSeconds;                         //@synthesize cacheTimeoutSeconds=_cacheTimeoutSeconds - In the implementation block
@property (retain) _CDPeopleSuggesterContext * context;                //@synthesize context=_context - In the implementation block
@property (retain) _CDPeopleSuggesterSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(id)peopleSuggesterWithDirectDBAccess;
+(id)createAdvisorSettingsFromContext:(id)arg1 settings:(id)arg2 ;
+(id)restrictedPrefixForPrefix:(id)arg1 ;
+(id)peopleSuggester;
+(id)peopleSuggesterUsingDaemon;
+(id)loggingTagForAutocompleteFeedback;
-(id)init;
-(_CDPeopleSuggesterContext *)context;
-(void)setContext:(_CDPeopleSuggesterContext *)arg1 ;
-(BOOL)enableCaching;
-(void)setEnableCaching:(BOOL)arg1 ;
-(id)initWithAdvisor:(id)arg1 ;
-(void)updateSettings;
-(void)invalidateCache;
-(id)suggestPeopleWithError:(id*)arg1 ;
-(_CDPeopleSuggesterSettings *)settings;
-(void)setSettings:(_CDPeopleSuggesterSettings *)arg1 ;
-(void)suggestPeopleWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)cacheTimeoutSeconds;
-(void)setCacheTimeoutSeconds:(double)arg1 ;
@end

