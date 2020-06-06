/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIPBTimestamp, NSString;

@interface TRIRollback : TRIPBMessage

@property (nonatomic,retain) TRIPBTimestamp * rollbackTimestamp; 
@property (assign,nonatomic) BOOL hasRollbackTimestamp; 
@property (nonatomic,copy) NSString * rolledBackBy; 
@property (assign,nonatomic) BOOL hasRolledBackBy; 
+(id)descriptor;
@end

