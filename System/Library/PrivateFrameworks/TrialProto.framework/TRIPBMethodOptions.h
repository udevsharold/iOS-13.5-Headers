/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIPBMethodOptions : TRIPBMessage

@property (assign,nonatomic) BOOL deprecated; 
@property (assign,nonatomic) BOOL hasDeprecated; 
@property (assign,nonatomic) int idempotencyLevel; 
@property (assign,nonatomic) BOOL hasIdempotencyLevel; 
@property (nonatomic,retain) NSMutableArray * uninterpretedOptionArray; 
@property (nonatomic,readonly) unsigned long long uninterpretedOptionArray_Count; 
+(id)descriptor;
@end
