/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/_HMCameraControl.h>

@class HMCharacteristic;

@interface _HMCameraSettingsControl : _HMCameraControl {

	HMCharacteristic* _nightVision;
	HMCharacteristic* _currentHorizontalTilt;
	HMCharacteristic* _targetHorizontalTilt;
	HMCharacteristic* _currentVerticalTilt;
	HMCharacteristic* _targetVerticalTilt;
	HMCharacteristic* _opticalZoom;
	HMCharacteristic* _digitalZoom;
	HMCharacteristic* _imageRotation;
	HMCharacteristic* _imageMirroring;

}

@property (nonatomic,retain) HMCharacteristic * nightVision;                        //@synthesize nightVision=_nightVision - In the implementation block
@property (nonatomic,retain) HMCharacteristic * currentHorizontalTilt;              //@synthesize currentHorizontalTilt=_currentHorizontalTilt - In the implementation block
@property (nonatomic,retain) HMCharacteristic * targetHorizontalTilt;               //@synthesize targetHorizontalTilt=_targetHorizontalTilt - In the implementation block
@property (nonatomic,retain) HMCharacteristic * currentVerticalTilt;                //@synthesize currentVerticalTilt=_currentVerticalTilt - In the implementation block
@property (nonatomic,retain) HMCharacteristic * targetVerticalTilt;                 //@synthesize targetVerticalTilt=_targetVerticalTilt - In the implementation block
@property (nonatomic,retain) HMCharacteristic * opticalZoom;                        //@synthesize opticalZoom=_opticalZoom - In the implementation block
@property (nonatomic,retain) HMCharacteristic * digitalZoom;                        //@synthesize digitalZoom=_digitalZoom - In the implementation block
@property (nonatomic,retain) HMCharacteristic * imageRotation;                      //@synthesize imageRotation=_imageRotation - In the implementation block
@property (nonatomic,retain) HMCharacteristic * imageMirroring;                     //@synthesize imageMirroring=_imageMirroring - In the implementation block
-(id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3 ;
-(HMCharacteristic *)nightVision;
-(void)setNightVision:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)currentHorizontalTilt;
-(void)setCurrentHorizontalTilt:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)targetHorizontalTilt;
-(void)setTargetHorizontalTilt:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)currentVerticalTilt;
-(void)setCurrentVerticalTilt:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)targetVerticalTilt;
-(void)setTargetVerticalTilt:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)opticalZoom;
-(void)setOpticalZoom:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)digitalZoom;
-(void)setDigitalZoom:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)imageRotation;
-(void)setImageRotation:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)imageMirroring;
-(void)setImageMirroring:(HMCharacteristic *)arg1 ;
@end

