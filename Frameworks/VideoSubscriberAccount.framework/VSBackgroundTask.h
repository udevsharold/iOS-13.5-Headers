/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSBackgroundTaskDelegate;
@class NSString, BKSProcessAssertion;

@interface VSBackgroundTask : NSObject {

	NSString* _name;
	id<VSBackgroundTaskDelegate> _delegate;
	BKSProcessAssertion* _assertion;

}

@property (nonatomic,retain) BKSProcessAssertion * assertion;                           //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,copy) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) id<VSBackgroundTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(NSString *)name;
-(id<VSBackgroundTaskDelegate>)delegate;
-(void)setDelegate:(id<VSBackgroundTaskDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)end;
-(BOOL)begin;
-(BKSProcessAssertion *)assertion;
-(void)setAssertion:(BKSProcessAssertion *)arg1 ;
@end

