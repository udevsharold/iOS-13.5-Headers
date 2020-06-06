/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLKDevice, CLKVideo, UIImage;

@interface CLKMediaAsset : NSObject <NSCopying> {

	CLKDevice* _device;
	CLKVideo* _video;
	UIImage* _image;
	double _videoDuration;
	double _stillDisplayTime;

}

@property (nonatomic,readonly) CLKVideo * video;                     //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) UIImage * image;                      //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) double videoDuration;                 //@synthesize videoDuration=_videoDuration - In the implementation block
@property (nonatomic,readonly) double stillDisplayTime;              //@synthesize stillDisplayTime=_stillDisplayTime - In the implementation block
+(id)mediaAssetWithImage:(id)arg1 forDevice:(id)arg2 ;
+(id)mediaAssetWithVideo:(id)arg1 image:(id)arg2 forDevice:(id)arg3 ;
+(id)mediaAssetWithVideo:(id)arg1 image:(id)arg2 videoDuration:(double)arg3 stillDisplayTime:(double)arg4 forDevice:(id)arg5 ;
+(id)mediaAssetWithVideoAndImageNamed:(id)arg1 forDevice:(id)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
-(CLKVideo *)video;
-(double)videoDuration;
-(double)stillDisplayTime;
-(id)initWithImage:(id)arg1 forDevice:(id)arg2 ;
-(id)initWithVideo:(id)arg1 image:(id)arg2 forDevice:(id)arg3 ;
-(id)initWithVideo:(id)arg1 image:(id)arg2 videoDuration:(double)arg3 stillDisplayTime:(double)arg4 forDevice:(id)arg5 ;
@end

