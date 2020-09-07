/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class AVPlayerLayer, AVObservationController;

@interface AVSecondScreenPlayerLayerView : UIView {

	AVPlayerLayer* _activeSourcePlayerLayer;
	AVObservationController* _observationController;

}

@property (nonatomic,readonly) AVPlayerLayer * layer; 
@property (assign,nonatomic,__weak) AVPlayerLayer * activeSourcePlayerLayer;               //@synthesize activeSourcePlayerLayer=_activeSourcePlayerLayer - In the implementation block
@property (nonatomic,retain) AVObservationController * observationController;              //@synthesize observationController=_observationController - In the implementation block
+(Class)layerClass;
-(void)dealloc;
-(AVObservationController *)observationController;
-(void)setObservationController:(AVObservationController *)arg1 ;
-(void)startShowingContentFromSourcePlayerLayer:(id)arg1 ;
-(void)stopShowingContentFromActiveSourcePlayerLayer;
-(AVPlayerLayer *)activeSourcePlayerLayer;
-(void)setActiveSourcePlayerLayer:(AVPlayerLayer *)arg1 ;
@end
