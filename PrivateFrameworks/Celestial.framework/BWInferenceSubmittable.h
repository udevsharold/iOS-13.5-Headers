/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWInferenceSubmittable <BWInferenceJobProvider>
@required
-(int)prepareForSubmissionWithWorkQueue:(id)arg1;
-(int)submitForSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withSubmissionTime:(SCD_Struct_BW2)arg3 workQueue:(id)arg4 completionHandler:(/*^block*/id)arg5;

@end

