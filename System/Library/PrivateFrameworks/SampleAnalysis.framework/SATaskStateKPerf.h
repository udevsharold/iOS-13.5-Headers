/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SATaskState.h>

@interface SATaskStateKPerf : SATaskState {

	BOOL _filledSnap;
	BOOL _filledMem;
	BOOL _filledLatencyQoS;

}

@property (assign) BOOL filledSnap;                    //@synthesize filledSnap=_filledSnap - In the implementation block
@property (assign) BOOL filledMem;                     //@synthesize filledMem=_filledMem - In the implementation block
@property (assign) BOOL filledLatencyQoS;              //@synthesize filledLatencyQoS=_filledLatencyQoS - In the implementation block
-(BOOL)filledSnap;
-(void)setFilledSnap:(BOOL)arg1 ;
-(BOOL)filledMem;
-(void)setFilledMem:(BOOL)arg1 ;
-(BOOL)filledLatencyQoS;
-(void)setFilledLatencyQoS:(BOOL)arg1 ;
@end

