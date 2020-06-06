/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _RWIRelayConnectionToApplication;

@interface _RWIApplicationInfo : NSObject {

	int _hostApplicationPID;
	BOOL _proxy;
	BOOL _hasRemoteDebugSession;
	BOOL _hasUpdatedFromListing;
	int _pid;
	NSString* _bundleId;
	NSString* _name;
	_RWIRelayConnectionToApplication* _connection;
	NSString* _debuggerConnectionIdentifier;
	unsigned long long _debuggerAvailability;
	long long _automationAvailability;

}

@property (nonatomic,readonly) int pid;                                                  //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,copy) NSString * bundleId;                                          //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,copy) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (assign,getter=isProxy,nonatomic) BOOL proxy;                                  //@synthesize proxy=_proxy - In the implementation block
@property (assign,nonatomic) _RWIRelayConnectionToApplication * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) NSString * debuggerConnectionIdentifier;                      //@synthesize debuggerConnectionIdentifier=_debuggerConnectionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long debuggerAvailability;                    //@synthesize debuggerAvailability=_debuggerAvailability - In the implementation block
@property (nonatomic,readonly) long long automationAvailability;                         //@synthesize automationAvailability=_automationAvailability - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteDebugSession;                               //@synthesize hasRemoteDebugSession=_hasRemoteDebugSession - In the implementation block
@property (nonatomic,readonly) BOOL hasUpdatedFromListing;                               //@synthesize hasUpdatedFromListing=_hasUpdatedFromListing - In the implementation block
+(id)identifierForPID:(int)arg1 ;
-(BOOL)isProxy;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)dictionaryRepresentation;
-(_RWIRelayConnectionToApplication *)connection;
-(void)setConnection:(_RWIRelayConnectionToApplication *)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setProxy:(BOOL)arg1 ;
-(int)pid;
-(long long)automationAvailability;
-(BOOL)hasUpdatedFromListing;
-(id)initWithPID:(int)arg1 bundleId:(id)arg2 name:(id)arg3 isProxy:(BOOL)arg4 connection:(id)arg5 debuggerAvailability:(unsigned long long)arg6 ;
-(BOOL)updateFromListing:(id)arg1 ;
-(void)setHostApplicationPID:(int)arg1 ;
-(NSString *)debuggerConnectionIdentifier;
-(void)setDebuggerConnectionIdentifier:(NSString *)arg1 ;
-(unsigned long long)debuggerAvailability;
-(void)setDebuggerAvailability:(unsigned long long)arg1 ;
-(BOOL)hasRemoteDebugSession;
@end

