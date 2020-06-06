/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDSocialInteractionAdvisorTuningDelegate.h>

@class _CDPSimpleModelParameterManagerAccountState, NSString, _CDPModelTuningState;

@interface _CDPSimpleModelParameterManager : NSObject <_CDSocialInteractionAdvisorTuningDelegate> {

	_CDPSimpleModelParameterManagerAccountState* _accountState;
	NSString* _accountStateKey;

}

@property (nonatomic,readonly) _CDPModelTuningState * lastTuningState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSettings:(id)arg1 ;
-(_CDPModelTuningState *)lastTuningState;
-(void)loadAccountState;
-(void)saveAccountState;
-(void)modelTuner:(id)arg1 heartBeatWithlambda:(float)arg2 w0:(float)arg3 threshold:(float)arg4 score:(float)arg5 progress:(float)arg6 ;
-(void)modelTunerWillResume:(id)arg1 ;
-(void)modelTunerWillStop:(id)arg1 ;
-(id)accountIdentifierForSettings:(id)arg1 ;
-(void)getLambda:(float*)arg1 w0:(float*)arg2 threshold:(float*)arg3 ;
@end
