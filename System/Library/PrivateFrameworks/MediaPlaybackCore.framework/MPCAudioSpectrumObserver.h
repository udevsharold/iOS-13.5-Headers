/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@interface MPCAudioSpectrumObserver : NSObject {

	MPCAudioSpectrumAnalyzerBandInternal* _bands;
	unsigned long long _bandsStorageSize;
	long long _numberOfBands;
	/*^block*/id _onUpdate;

}

@property (nonatomic,readonly) long long numberOfBands;              //@synthesize numberOfBands=_numberOfBands - In the implementation block
@property (nonatomic,copy) id onUpdate;                              //@synthesize onUpdate=_onUpdate - In the implementation block
+(id)defaultObserver;
-(void)dealloc;
-(id)onUpdate;
-(void)beginReport;
-(void)finishReport;
-(long long)addAnalysisBand:(MPCAudioSpectrumAnalyzerBand)arg1 ;
-(void)_resizeBandStorage;
-(long long)numberOfBands;
-(float)averagePowerOfBandAtIndex:(long long)arg1 band:(out MPCAudioSpectrumAnalyzerBand*)arg2 ;
-(void)setOnUpdate:(id)arg1 ;
@end

