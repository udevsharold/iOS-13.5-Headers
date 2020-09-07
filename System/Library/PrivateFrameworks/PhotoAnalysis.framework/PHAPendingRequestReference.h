/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAGraphServiceWorker, NSString;

@interface PHAPendingRequestReference : NSObject {

	PHAGraphServiceWorker* _worker;
	NSString* _label;

}

@property (__weak) PHAGraphServiceWorker * worker;              //@synthesize worker=_worker - In the implementation block
@property (retain) NSString * label;                            //@synthesize label=_label - In the implementation block
-(void)dealloc;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(PHAGraphServiceWorker *)worker;
-(void)setWorker:(PHAGraphServiceWorker *)arg1 ;
@end
