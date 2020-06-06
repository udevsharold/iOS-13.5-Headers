/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXVideoPlaybackObserver.h>

@protocol SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate;
@class NSString;

@interface SXAutomaticFullscreenVideoPlaybackBehaviorManager : NSObject <SXVideoPlaybackObserver> {

	unsigned long long _behavior;
	id<SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate> _delegate;
	CGRect _videoBounds;

}

@property (assign,nonatomic) CGRect videoBounds;                                                                         //@synthesize videoBounds=_videoBounds - In the implementation block
@property (assign,nonatomic) unsigned long long behavior;                                                                //@synthesize behavior=_behavior - In the implementation block
@property (assign,nonatomic,__weak) id<SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate>)delegate;
-(void)setDelegate:(id<SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate>)arg1 ;
-(unsigned long long)behavior;
-(void)setBehavior:(unsigned long long)arg1 ;
-(void)setVideoBounds:(CGRect)arg1 ;
-(CGRect)videoBounds;
-(void)conditionsChanged;
-(void)playbackCoordinatorStartedPlayback:(id)arg1 ;
-(void)playbackCoordinatorResumedPlayback:(id)arg1 ;
-(BOOL)fullscreenPlaybackRequiredForCurrentConditions;
@end

