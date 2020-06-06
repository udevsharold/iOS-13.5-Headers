/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNScheduler.h>

@protocol CNScheduler;
@class NSString;

@interface CNInhibitingSchedulerDecorator : NSObject <CNScheduler> {

	id<CNScheduler> _scheduler;
	/*^block*/id _inhibitorFactory;

}

@property (nonatomic,readonly) id<CNScheduler> scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,copy,readonly) id inhibitorFactory;               //@synthesize inhibitorFactory=_inhibitorFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double timestamp; 
-(void)performBlock:(/*^block*/id)arg1 ;
-(double)timestamp;
-(id<CNScheduler>)scheduler;
-(void)performBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 qualityOfService:(unsigned long long)arg2 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 qualityOfService:(unsigned long long)arg3 ;
-(id)inhibitorFactory;
-(id)initWithScheduler:(id)arg1 inhibitorFactory:(/*^block*/id)arg2 ;
@end

