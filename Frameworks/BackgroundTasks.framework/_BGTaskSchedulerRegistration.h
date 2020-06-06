/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/BackgroundTasks.framework/BackgroundTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface _BGTaskSchedulerRegistration : NSObject {

	NSString* _identifier;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _launchHandler;

}

@property (nonatomic,retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id launchHandler;                                  //@synthesize launchHandler=_launchHandler - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)launchHandler;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 launchHandler:(/*^block*/id)arg3 ;
-(void)setLaunchHandler:(id)arg1 ;
@end

