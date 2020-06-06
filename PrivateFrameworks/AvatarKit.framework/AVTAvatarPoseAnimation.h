/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVTAvatarPose, NSDictionary;

@interface AVTAvatarPoseAnimation : NSObject {

	AVTAvatarPose* _staticPose;
	NSDictionary* _staticPhysicsStates;
	NSDictionary* _blendshapeAnimations;
	NSDictionary* _perNodeAnimations;

}

@property (nonatomic,readonly) AVTAvatarPose * staticPose;              //@synthesize staticPose=_staticPose - In the implementation block
@property (nonatomic,readonly) double duration; 
+(void)removeAllPoseAnimationsOnAvatar:(id)arg1 ;
+(id)animationFromRepresentation:(id)arg1 keyPath:(id)arg2 ;
+(void)enumerateRepresentationsForAnimation:(id)arg1 block:(/*^block*/id)arg2 ;
-(double)duration;
-(id)initWithScene:(id)arg1 ;
-(AVTAvatarPose *)staticPose;
-(void)applyOnAvatar:(id)arg1 ;
-(id)animationForAvatar:(id)arg1 ;
-(id)initWithSceneAtURL:(id)arg1 ;
-(id)initWithStaticPose:(id)arg1 staticPhysicsStates:(id)arg2 ;
-(id)initWithStaticPoseRepresentation:(id)arg1 animatedPoseRepresentation:(id)arg2 staticPhysicsStatesRepresentation:(id)arg3 ;
-(id)staticPoseRepresentation;
-(id)animatedPoseRepresentation;
@end

