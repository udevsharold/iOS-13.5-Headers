/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSArray;

@interface OSLogPreferencesManager : NSObject {

	NSString* _name;
	NSString* _prefsFile;
	NSMutableDictionary* _prefs;

}

@property (nonatomic,readonly) NSArray * processes; 
@property (nonatomic,readonly) NSArray * subsystems; 
@property (assign,nonatomic) long long enabledLevel; 
@property (assign,nonatomic) long long persistedLevel; 
+(id)sharedManager;
-(id)init;
-(void)reset;
-(long long)persistedLevel;
-(long long)enabledLevel;
-(void)setPersistedLevel:(long long)arg1 ;
-(void)setEnabledLevel:(long long)arg1 ;
-(NSArray *)subsystems;
-(void)resetAll;
-(NSArray *)processes;
-(id)_levelPrefs;
-(void)resetAllProcesses;
-(void)resetAllSubsystems;
@end
