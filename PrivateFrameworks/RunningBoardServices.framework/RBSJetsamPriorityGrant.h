/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSGrant.h>

@interface RBSJetsamPriorityGrant : RBSGrant {

	long long _priority;

}

@property (nonatomic,readonly) long long priority;              //@synthesize priority=_priority - In the implementation block
+(BOOL)supportsBSXPCSecureCoding;
+(id)grantWithPriority:(long long)arg1 ;
+(id)grantWithForegroundPriority;
+(id)grantWithBackgroundPriority;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)priority;
-(id)succinctDescriptionBuilder;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)_initWithPriority:(long long)arg1 ;
@end

