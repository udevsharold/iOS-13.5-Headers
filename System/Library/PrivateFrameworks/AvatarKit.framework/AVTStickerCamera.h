/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCNNode;

@interface AVTStickerCamera : NSObject {

	SCNNode* _node;

}

@property (nonatomic,retain) SCNNode * node;              //@synthesize node=_node - In the implementation block
+(id)stickerCameraCache;
+(id)cameraFromDictionary:(id)arg1 assetsPath:(id)arg2 ;
-(SCNNode *)node;
-(void)setNode:(SCNNode *)arg1 ;
-(id)buildNode;
-(id)initWithScene:(id)arg1 cameraName:(id)arg2 ;
@end

