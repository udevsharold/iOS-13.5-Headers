/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKAssertionsPreventingRestartMonitor : _DKMonitor {

	BOOL _lastPreventingRestartAssertionsStatus;
	int _userspaceAssertionsToken;
	int _preventIdleSleepAssertionsToken;
	int _systemAssertionsToken;
	int _restartPreventerAssertionsToken;

}

@property (assign,nonatomic) int userspaceAssertionsToken;                            //@synthesize userspaceAssertionsToken=_userspaceAssertionsToken - In the implementation block
@property (assign,nonatomic) int preventIdleSleepAssertionsToken;                     //@synthesize preventIdleSleepAssertionsToken=_preventIdleSleepAssertionsToken - In the implementation block
@property (assign,nonatomic) int systemAssertionsToken;                               //@synthesize systemAssertionsToken=_systemAssertionsToken - In the implementation block
@property (assign,nonatomic) int restartPreventerAssertionsToken;                     //@synthesize restartPreventerAssertionsToken=_restartPreventerAssertionsToken - In the implementation block
@property (assign,nonatomic) BOOL lastPreventingRestartAssertionsStatus;              //@synthesize lastPreventingRestartAssertionsStatus=_lastPreventingRestartAssertionsStatus - In the implementation block
+(id)entitlements;
+(id)eventStream;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
-(void)deactivate;
-(id)loadState;
-(void)saveState;
-(BOOL)areAssertionsPreventingRestart;
-(int)userspaceAssertionsToken;
-(void)setUserspaceAssertionsToken:(int)arg1 ;
-(int)preventIdleSleepAssertionsToken;
-(void)setPreventIdleSleepAssertionsToken:(int)arg1 ;
-(int)systemAssertionsToken;
-(void)setSystemAssertionsToken:(int)arg1 ;
-(int)restartPreventerAssertionsToken;
-(void)setRestartPreventerAssertionsToken:(int)arg1 ;
-(BOOL)lastPreventingRestartAssertionsStatus;
-(void)setLastPreventingRestartAssertionsStatus:(BOOL)arg1 ;
@end

