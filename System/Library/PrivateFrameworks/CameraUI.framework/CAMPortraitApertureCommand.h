/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMPortraitApertureCommand : CAMCaptureCommand {

	double _aperture;

}

@property (nonatomic,readonly) double aperture;              //@synthesize aperture=_aperture - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)aperture;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithAperture:(double)arg1 ;
@end

