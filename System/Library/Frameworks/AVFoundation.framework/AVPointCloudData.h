/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class ADJasperPointCloud;

@interface AVPointCloudData : NSObject {

	CVBufferRef _dataBuffer;
	ADJasperPointCloud* _jasperPointCloud;

}

@property (nonatomic,retain,readonly) ADJasperPointCloud * jasperPointCloud; 
@property (readonly) unsigned pointCloudFormatType; 
@property (readonly) long long pointCount; 
@property (readonly) const * points; 
@property (readonly) const float* confidenceScores; 
@property (readonly) const * pointsAndConfidenceScores; 
@property (readonly) const char* spotIdentifiers; 
@property (readonly) const char* bankIdentifiers; 
@property (readonly) CVBufferRef pointCloudDataBuffer; 
+(void)initialize;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(long long)pointCount;
-(const *)points;
-(unsigned)pointCloudFormatType;
-(const char*)bankIdentifiers;
-(ADJasperPointCloud *)jasperPointCloud;
-(const float*)confidenceScores;
-(const *)pointsAndConfidenceScores;
-(const char*)spotIdentifiers;
-(CVBufferRef)pointCloudDataBuffer;
-(id)initWithDataBuffer:(CVBufferRef)arg1 ;
@end
