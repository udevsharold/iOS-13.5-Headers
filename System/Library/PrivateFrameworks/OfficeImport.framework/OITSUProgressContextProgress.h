/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OITSUProgress.h>

@protocol OS_dispatch_queue;
@class OITSUProgressContext, NSObject;

@interface OITSUProgressContextProgress : OITSUProgress {

	OITSUProgressContext* mProgressContext;
	NSObject*<OS_dispatch_queue> mProgressContextObserverQueue;
	BOOL hasAddedProgressContextObserver;

}
-(id)init;
-(void)dealloc;
-(double)value;
-(BOOL)isIndeterminate;
-(void)removeProgressObserver:(id)arg1 ;
-(double)maxValue;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithProgressContext:(id)arg1 ;
-(void)p_updateProgressContextObserver;
-(void)p_progressDidChange:(id)arg1 ;
@end

