/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>

@class HMCameraClip, HMCameraProfile;

@interface HUCameraRecordingFeedbackActivity : UIActivity {

	HMCameraClip* _cameraClip;
	HMCameraProfile* _cameraProfile;
	/*^block*/id _submissionHandler;

}

@property (nonatomic,retain) HMCameraClip * cameraClip;                    //@synthesize cameraClip=_cameraClip - In the implementation block
@property (nonatomic,retain) HMCameraProfile * cameraProfile;              //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,copy) id submissionHandler;                           //@synthesize submissionHandler=_submissionHandler - In the implementation block
-(id)activityType;
-(void)setSubmissionHandler:(id)arg1 ;
-(id)submissionHandler;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(id)activityImage;
-(HMCameraProfile *)cameraProfile;
-(void)setCameraProfile:(HMCameraProfile *)arg1 ;
-(HMCameraClip *)cameraClip;
-(void)setCameraClip:(HMCameraClip *)arg1 ;
-(id)initWithCameraClip:(id)arg1 cameraProfile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

