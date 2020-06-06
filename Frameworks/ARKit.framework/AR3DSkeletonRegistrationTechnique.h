/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>

@class ARWorldTrackingPoseData;

@interface AR3DSkeletonRegistrationTechnique : ARTechnique {

	BOOL _is_tracking;
	int _last_btr_poses_idx;
	float _estimatedScale;
	double _last_detection_timestamp;
	array<float, 2> _depth_scaler_num_den;
	unsigned long long _depth_scaler_observation_count;
	shared_ptr<arkit::btr::ScaleCorrection>* _scaler;
	shared_ptr<arkit::btr::BodyRegistration>* _btr;
	array<arkit::btr::RegistrationData, 5> _last_btr_poses;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _dumps_dir;
	basic_ofstream<char, std::__1::char_traits<char> >* _btrf;
	basic_ofstream<char, std::__1::char_traits<char> >* _btrts;
	ARWorldTrackingPoseData* _currentWorldTrackingPose;
	BOOL _automaticSkeletonScaleEstimationEnabled;

}

@property (assign,nonatomic) BOOL automaticSkeletonScaleEstimationEnabled;              //@synthesize automaticSkeletonScaleEstimationEnabled=_automaticSkeletonScaleEstimationEnabled - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)resetState;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3 ;
-(BOOL)automaticSkeletonScaleEstimationEnabled;
-(void)setAutomaticSkeletonScaleEstimationEnabled:(BOOL)arg1 ;
-(BOOL)_estimateCameraPoseFromMatchingImageData:(id)arg1 to3DData:(id)arg2 worldTrackingPose:(id)arg3 pCameraFromBody:(SCD_Struct_AR1*)arg4 depthData:(id)arg5 pScaleOut:(float*)arg6 ;
-(float)_estimateScaleFromDepthData:(id)arg1 imageData:(id)arg2 cameraPoseFromBody:(SCD_Struct_AR1)arg3 skeleton:(id)arg4 ;
-(float)_estimateScaleFromJasperCloud:(id)arg1 cameraPoseFromBody:(SCD_Struct_AR1)arg2 skeleton:(id)arg3 ;
@end

