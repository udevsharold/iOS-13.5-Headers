/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SCNImageSource.h>

@class CALayer;

@interface SCNCoreAnimationSource : SCNImageSource {

	CALayer* _layer;

}

@property (nonatomic,retain) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
-(void)dealloc;
-(BOOL)isOpaque;
-(CALayer *)layer;
-(void)setLayer:(CALayer *)arg1 ;
-(id)textureSource;
@end

