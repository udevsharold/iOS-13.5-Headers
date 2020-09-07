/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSRunningReasonAttribute : RBSAttribute {

	unsigned long long _runningReason;

}

@property (nonatomic,readonly) unsigned long long runningReason;              //@synthesize runningReason=_runningReason - In the implementation block
+(id)withReason:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)succinctDescriptionBuilder;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)_initWithReason:(unsigned long long)arg1 ;
-(unsigned long long)runningReason;
@end
