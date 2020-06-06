/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNTracePlayerTimelineStreamObjectType.h>

@class NSString;

@interface MNTraceMotionDataRow : NSObject <MNTracePlayerTimelineStreamObjectType> {

	double _timestamp;
	unsigned long long _motionType;
	unsigned long long _exitType;
	unsigned long long _confidence;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double position; 
@property (assign,nonatomic) double timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned long long motionType;              //@synthesize motionType=_motionType - In the implementation block
@property (assign,nonatomic) unsigned long long exitType;                //@synthesize exitType=_exitType - In the implementation block
@property (assign,nonatomic) unsigned long long confidence;              //@synthesize confidence=_confidence - In the implementation block
-(unsigned long long)confidence;
-(double)timestamp;
-(double)position;
-(void)setTimestamp:(double)arg1 ;
-(void)setConfidence:(unsigned long long)arg1 ;
-(unsigned long long)exitType;
-(unsigned long long)motionType;
-(void)setExitType:(unsigned long long)arg1 ;
-(void)setMotionType:(unsigned long long)arg1 ;
@end

