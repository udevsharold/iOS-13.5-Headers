/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface TSULogHelper : NSObject {

	unsigned long long _throttleCount;
	NSDate* _lastThrottleCheck;

}

@property (assign) unsigned long long throttleCount;              //@synthesize throttleCount=_throttleCount - In the implementation block
@property (retain) NSDate * lastThrottleCheck;                    //@synthesize lastThrottleCheck=_lastThrottleCheck - In the implementation block
+(id)sharedInstance;
-(unsigned long long)throttleCount;
-(void)setThrottleCount:(unsigned long long)arg1 ;
-(NSDate *)lastThrottleCheck;
-(void)setLastThrottleCheck:(NSDate *)arg1 ;
-(BOOL)incrementThrottleCountAndCheckThottleMax:(unsigned long long)arg1 ;
@end

