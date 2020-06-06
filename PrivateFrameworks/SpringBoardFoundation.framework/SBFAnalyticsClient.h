/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBFAnalyticsBackend, NSString;

@interface SBFAnalyticsClient : NSObject {

	SBFAnalyticsBackend* _backend;
	NSString* _significantTimeChangedNotificationName;

}

@property (nonatomic,copy) NSString * significantTimeChangedNotificationName;              //@synthesize significantTimeChangedNotificationName=_significantTimeChangedNotificationName - In the implementation block
+(id)sharedInstance;
-(void)registerForQueryName:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithBackend:(id)arg1 ;
-(void)emitEvent:(unsigned long long)arg1 withPayload:(id)arg2 ;
-(void)_noteSignificantTimeChanged:(id)arg1 ;
-(void)emitEvent:(unsigned long long)arg1 ;
-(void)setSignificantTimeChangedNotificationName:(NSString *)arg1 ;
-(NSString *)significantTimeChangedNotificationName;
@end

