/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class NSObject;

@interface MPCAssistantPause : NSObject {

	NSObject*<OS_dispatch_queue> deviceUIDsQueue;

}
-(void)pauseDevicesByUID:(id)arg1 withRefId:(id)arg2 audioRoutingInfo:(SCD_Struct_MP6)arg3 source:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)pauseDevicesByUID:(id)arg1 withRefId:(id)arg2 audioRoutingInfo:(SCD_Struct_MP6)arg3 completion:(/*^block*/id)arg4 ;
@end

