/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SpeedRanges, VideoMovie;


@protocol MiroClip_Shim <NSObject>
@property (assign,nonatomic) float speed; 
@property (nonatomic,readonly) SpeedRanges * speedRanges; 
@property (nonatomic,readonly) float frameRate; 
@property (nonatomic,readonly) VideoMovie * videoMovie; 
@required
-(id)copy;
-(float)speed;
-(void)setSpeed:(float)arg1;
-(float)frameRate;
-(SpeedRanges *)speedRanges;
-(VideoMovie *)videoMovie;

@end

