/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class UIPDFPageRenderJob;

@interface UIPDFPageRenderOperation : NSOperation {

	UIPDFPageRenderJob* _job;
	BOOL executing;
	BOOL finished;

}

@property (retain) UIPDFPageRenderJob * job;              //@synthesize job=_job - In the implementation block
-(void)dealloc;
-(void)start;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(void)completeOperation;
-(id)initWithJob:(id)arg1 ;
-(UIPDFPageRenderJob *)job;
-(void)setJob:(UIPDFPageRenderJob *)arg1 ;
@end

