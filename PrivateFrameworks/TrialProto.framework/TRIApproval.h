/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIRadar;

@interface TRIApproval : TRIPBMessage

@property (assign,nonatomic) int approvalType; 
@property (assign,nonatomic) BOOL hasApprovalType; 
@property (nonatomic,retain) TRIRadar * radar; 
@property (assign,nonatomic) BOOL hasRadar; 
+(id)descriptor;
@end

