/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPowerAssertion.h>

@class NSString, NSDate, UMUserSwitchBlockingTask;

@interface MCMDMPowerAssertion : MCPowerAssertion {

	NSString* _reason;
	NSDate* _creationDate;
	UMUserSwitchBlockingTask* _blockingTask;

}

@property (nonatomic,readonly) NSString * reason;                                  //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) UMUserSwitchBlockingTask * blockingTask;              //@synthesize blockingTask=_blockingTask - In the implementation block
+(id)_dateFormatter;
+(id)_currentAssertions;
+(id)assertionDescriptions;
-(void)dealloc;
-(id)description;
-(NSString *)reason;
-(NSDate *)creationDate;
-(id)initWithReason:(id)arg1 ;
-(UMUserSwitchBlockingTask *)blockingTask;
-(void)setBlockingTask:(UMUserSwitchBlockingTask *)arg1 ;
@end

