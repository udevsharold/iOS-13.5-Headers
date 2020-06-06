/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailSupport/MSTriageAction.h>

@class ECMessageFlags;

@interface MSFlagChangeTriageAction : MSTriageAction {

	long long _reason;

}

@property (nonatomic,readonly) ECMessageFlags * messageFlags; 
@property (nonatomic,readonly) BOOL flagState; 
@property (nonatomic,readonly) long long reason;                                                  //@synthesize reason=_reason - In the implementation block
@property (nonatomic,__weak,readonly) id<MSFlagChangeTriageActionDelegate> delegate; 
-(long long)reason;
-(ECMessageFlags *)messageFlags;
-(id)_changeAction;
-(id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2 reason:(long long)arg3 ;
-(void)_toggleFlagWithBuilder:(id)arg1 ;
-(BOOL)flagState;
@end

