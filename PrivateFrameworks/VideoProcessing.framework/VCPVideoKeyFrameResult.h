/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPVideoKeyFrameResult : NSObject {

	float _score;
	SCD_Struct_VC6 _timeStamp;

}

@property (nonatomic,readonly) SCD_Struct_VC6 timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,readonly) float score;                           //@synthesize score=_score - In the implementation block
-(float)score;
-(SCD_Struct_VC6)timeStamp;
-(id)initWithTime:(SCD_Struct_VC6)arg1 andScore:(float)arg2 ;
@end

