/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SBKProcessAssertion;

@interface SBKTaskAssertion : NSObject {

	/*^block*/id _expireHandler;
	NSString* _debugInfo;
	SBKProcessAssertion* _processAssertion;

}
+(id)newBackgroundTaskWithExpirationHandler:(/*^block*/id)arg1 debugInfo:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)initWithExpirationHandler:(/*^block*/id)arg1 debugInfo:(id)arg2 ;
-(void)performExpirationHandler;
@end

