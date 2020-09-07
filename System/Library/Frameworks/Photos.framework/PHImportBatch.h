/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSDate, NSMutableArray, PHImportTimerCollection, NSObject;

@interface PHImportBatch : NSObject {

	NSDate* _start;
	NSMutableArray* _records;
	PHImportTimerCollection* _timers;
	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (nonatomic,readonly) NSMutableArray * records;                                //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) PHImportTimerCollection * timers;                        //@synthesize timers=_timers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
-(id)init;
-(double)duration;
-(NSMutableArray *)records;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(PHImportTimerCollection *)timers;
@end
