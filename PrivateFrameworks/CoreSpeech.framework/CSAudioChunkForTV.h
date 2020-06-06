/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CSAudioChunkForTV : NSObject {

	float _avgPower;
	float _peakPower;
	NSArray* _packets;
	unsigned long long _timeStamp;

}

@property (nonatomic,retain) NSArray * packets;                         //@synthesize packets=_packets - In the implementation block
@property (assign,nonatomic) float avgPower;                            //@synthesize avgPower=_avgPower - In the implementation block
@property (assign,nonatomic) float peakPower;                           //@synthesize peakPower=_peakPower - In the implementation block
@property (assign,nonatomic) unsigned long long timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
-(unsigned long long)timeStamp;
-(void)setTimeStamp:(unsigned long long)arg1 ;
-(id)initWithXPCObject:(id)arg1 ;
-(float)peakPower;
-(id)xpcObject;
-(void)setPackets:(NSArray *)arg1 ;
-(NSArray *)packets;
-(float)avgPower;
-(void)setAvgPower:(float)arg1 ;
-(void)setPeakPower:(float)arg1 ;
@end

