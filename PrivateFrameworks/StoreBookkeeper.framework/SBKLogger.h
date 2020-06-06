/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSFileHandle, NSRegularExpression, NSLock;

@interface SBKLogger : NSObject {

	NSString* _auxPath;
	NSFileHandle* _fileHandle;
	NSString* _filter;
	NSString* _runtimeOverride;
	int _pid;
	NSString* _procName;
	NSRegularExpression* _runtimeOverrideRegex;
	NSLock* _lock;

}

@property (copy) NSString * filter;                       //@synthesize filter=_filter - In the implementation block
@property (copy) NSString * runtimeOverride;              //@synthesize runtimeOverride=_runtimeOverride - In the implementation block
+(id)sharedLogger;
+(BOOL)verboseLoggingEnabled;
+(BOOL)debugLoggingEnabled;
-(id)init;
-(void)dealloc;
-(void)setFilter:(NSString *)arg1 ;
-(NSString *)filter;
-(void)logString:(id)arg1 ;
-(BOOL)shouldOverrideCondition:(id)arg1 file:(id)arg2 ;
-(void)logFunction:(const char*)arg1 format:(id)arg2 ;
-(void)logFile:(const char*)arg1 lineNumber:(int)arg2 format:(id)arg3 ;
-(void)_updateSettingsFromPreferences:(id)arg1 ;
-(void)setRuntimeOverride:(NSString *)arg1 ;
-(NSString *)runtimeOverride;
-(void)performLoggingBlock:(/*^block*/id)arg1 ;
-(void)setAuxPath:(id)arg1 ;
-(id)auxPath;
-(void)addRuntimeOverride:(id)arg1 ;
-(void)removeRuntimeOverride:(id)arg1 ;
@end

