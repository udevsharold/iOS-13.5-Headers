/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SAThreadState.h>

@interface SAThreadStateKPerf : SAThreadState {

	BOOL _filledName;
	BOOL _filledDispatchQueue;
	BOOL _filledUserStack;
	BOOL _filledScheduling;
	BOOL _filledCyclesInstructions;
	BOOL _filledSnapshot;

}

@property (assign) BOOL filledName;                            //@synthesize filledName=_filledName - In the implementation block
@property (assign) BOOL filledDispatchQueue;                   //@synthesize filledDispatchQueue=_filledDispatchQueue - In the implementation block
@property (assign) BOOL filledUserStack;                       //@synthesize filledUserStack=_filledUserStack - In the implementation block
@property (assign) BOOL filledScheduling;                      //@synthesize filledScheduling=_filledScheduling - In the implementation block
@property (assign) BOOL filledCyclesInstructions;              //@synthesize filledCyclesInstructions=_filledCyclesInstructions - In the implementation block
@property (assign) BOOL filledSnapshot;                        //@synthesize filledSnapshot=_filledSnapshot - In the implementation block
-(BOOL)filledName;
-(void)setFilledName:(BOOL)arg1 ;
-(BOOL)filledDispatchQueue;
-(void)setFilledDispatchQueue:(BOOL)arg1 ;
-(BOOL)filledUserStack;
-(void)setFilledUserStack:(BOOL)arg1 ;
-(BOOL)filledScheduling;
-(void)setFilledScheduling:(BOOL)arg1 ;
-(BOOL)filledCyclesInstructions;
-(void)setFilledCyclesInstructions:(BOOL)arg1 ;
-(BOOL)filledSnapshot;
-(void)setFilledSnapshot:(BOOL)arg1 ;
@end

