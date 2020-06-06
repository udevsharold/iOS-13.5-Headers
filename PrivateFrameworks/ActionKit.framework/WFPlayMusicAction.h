/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:41 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@interface WFPlayMusicAction : WFAction
-(long long)repeatMode;
-(long long)shuffleMode;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)finishRunningWithError:(id)arg1 ;
-(id)localizedKeyParameterDisplayName;
-(id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2 ;
-(void)getContentFromInput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)playContentViaMPCAssistant:(id)arg1 routeDescriptor:(id)arg2 ;
-(void)sendPlaybackArchive:(id)arg1 orPlaybackQueue:(id)arg2 toDestination:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)playContentViaMusicPlayer:(id)arg1 ;
-(void)playContent:(id)arg1 withMusicPlayer:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
