/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VCPVideoMetaAnalyzer.h>

@class NSMutableArray;

@interface VCPVideMetaOrientationAnalyzer : VCPVideoMetaAnalyzer {

	NSMutableArray* _results;

}
-(id)init;
-(int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2 ;
-(id)publicResults;
-(id)convertQuickTimeVideoOrientationToUIOrientation:(long long)arg1 ;
@end

