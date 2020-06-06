/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVLivePlayerSource.h>

@class PVFrameSet, PVLivePlayerCameraRenderLink, NSString;

@interface PVLivePlayerCameraSource : NSObject <PVLivePlayerSource> {

	HGSynchronizable* _lock;
	PVFrameSet* _mostRecentFrameSet;
	PVLivePlayerCameraRenderLink* _renderLink;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)pause;
-(void)play;
-(void)setMuted:(BOOL)arg1 ;
-(void)seekToTime:(SCD_Struct_PV20)arg1 ;
-(SCD_Struct_PV20)itemTimeForHostTime:(double)arg1 ;
-(void)cameraFrameSetRecieved:(id)arg1 ;
-(void)cameraFrameSetDropped;
-(void)registerRenderLink:(id)arg1 ;
-(id)imageBufferForHostTime:(double)arg1 ;
@end

