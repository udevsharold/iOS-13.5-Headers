/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NSArray;

@interface PIVideoReframeTimedMetadata : NSObject {

	NSArray* _subjects;
	CGVector _estimatedCenterMotion;
	CGVector _estimatedMotionBlur;
	SCD_Struct_PI8 _time;
	SCD_Struct_PI9 _trajectoryHomography;

}

@property (readonly) SCD_Struct_PI8 time;                              //@synthesize time=_time - In the implementation block
@property (readonly) NSArray * subjects;                               //@synthesize subjects=_subjects - In the implementation block
@property (readonly) CGVector estimatedCenterMotion;                   //@synthesize estimatedCenterMotion=_estimatedCenterMotion - In the implementation block
@property (readonly) CGVector estimatedMotionBlur;                     //@synthesize estimatedMotionBlur=_estimatedMotionBlur - In the implementation block
@property (readonly) SCD_Struct_PI9 trajectoryHomography;              //@synthesize trajectoryHomography=_trajectoryHomography - In the implementation block
-(SCD_Struct_PI8)time;
-(void)setTime:(SCD_Struct_PI8)arg1 ;
-(void)setSubjects:(NSArray *)arg1 ;
-(void)setEstimatedCenterMotion:(CGVector)arg1 ;
-(void)setEstimatedMotionBlur:(CGVector)arg1 ;
-(void)setTrajectoryHomography:(SCD_Struct_PI9)arg1 ;
-(NSArray *)subjects;
-(CGVector)estimatedCenterMotion;
-(CGVector)estimatedMotionBlur;
-(SCD_Struct_PI9)trajectoryHomography;
@end

