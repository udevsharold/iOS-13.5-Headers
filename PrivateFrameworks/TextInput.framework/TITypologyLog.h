/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate, NSString, NSDictionary, TIRollingLog, NSMutableSet, TIKeyboardState;

@interface TITypologyLog : NSObject <NSCopying> {

	NSUUID* _uuid;
	NSDate* _date;
	NSString* _systemVersion;
	NSString* _buildVersion;
	NSString* _clientIdentifier;
	NSDictionary* _config;
	NSUUID* _lastRecordUUID;
	TIRollingLog* _records;
	TIRollingLog* _traceLog;
	NSMutableSet* _loggedRecordClasses;
	TIKeyboardState* _lastKeyboardState;

}

@property (nonatomic,copy) NSString * clientIdentifier;                        //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSUUID * lastRecordUUID;                            //@synthesize lastRecordUUID=_lastRecordUUID - In the implementation block
@property (nonatomic,readonly) TIRollingLog * records;                         //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) TIRollingLog * traceLog;                        //@synthesize traceLog=_traceLog - In the implementation block
@property (nonatomic,retain) NSMutableSet * loggedRecordClasses;               //@synthesize loggedRecordClasses=_loggedRecordClasses - In the implementation block
@property (nonatomic,retain) TIKeyboardState * lastKeyboardState;              //@synthesize lastKeyboardState=_lastKeyboardState - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * systemVersion;                       //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,readonly) NSString * buildVersion;                        //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,retain) NSDictionary * config;                            //@synthesize config=_config - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(id)initWithPropertyList:(id)arg1 ;
-(NSString *)systemVersion;
-(id)propertyList;
-(NSUUID *)uuid;
-(NSDictionary *)config;
-(id)timestamp;
-(id)filename;
-(void)setConfig:(NSDictionary *)arg1 ;
-(NSString *)buildVersion;
-(TIRollingLog *)records;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(id)textSummary;
-(id)initWithTypologyLog:(id)arg1 ;
-(id)recordSummary;
-(void)logRecord:(id)arg1 ;
-(void)logToHumanReadableTrace:(id)arg1 ;
-(void)enumerateRecordsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateHumanReadableTraceEntriesWithBlock:(/*^block*/id)arg1 ;
-(NSMutableSet *)loggedRecordClasses;
-(BOOL)loggedRecordOfClass:(Class)arg1 ;
-(NSUUID *)lastRecordUUID;
-(void)setLastRecordUUID:(NSUUID *)arg1 ;
-(TIRollingLog *)traceLog;
-(void)setLoggedRecordClasses:(NSMutableSet *)arg1 ;
-(TIKeyboardState *)lastKeyboardState;
-(void)setLastKeyboardState:(TIKeyboardState *)arg1 ;
@end

