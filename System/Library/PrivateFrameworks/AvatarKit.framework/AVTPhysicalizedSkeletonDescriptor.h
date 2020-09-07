/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCNNode;

@interface AVTPhysicalizedSkeletonDescriptor : NSObject {

	float _simulationFactor;
	SCNNode* _referenceNode;
	SCNNode* _drivingNode;
	SCNNode* _rootJoint;
	 _upDownRotation;
	 _leftRightRotation;
	 _forwardBackRotation;

}

@property (assign,nonatomic) float simulationFactor;               //@synthesize simulationFactor=_simulationFactor - In the implementation block
@property (nonatomic,retain) SCNNode * referenceNode;              //@synthesize referenceNode=_referenceNode - In the implementation block
@property (nonatomic,retain) SCNNode * drivingNode;                //@synthesize drivingNode=_drivingNode - In the implementation block
@property (nonatomic,retain) SCNNode * rootJoint;                  //@synthesize rootJoint=_rootJoint - In the implementation block
@property (assign,nonatomic)  upDownRotation;                      //@synthesize upDownRotation=_upDownRotation - In the implementation block
@property (assign,nonatomic)  leftRightRotation;                   //@synthesize leftRightRotation=_leftRightRotation - In the implementation block
@property (assign,nonatomic)  forwardBackRotation;                 //@synthesize forwardBackRotation=_forwardBackRotation - In the implementation block
-(SCNNode *)referenceNode;
-(void)setReferenceNode:(SCNNode *)arg1 ;
-(float)simulationFactor;
-(void)setSimulationFactor:(float)arg1 ;
-(SCNNode *)drivingNode;
-(void)setDrivingNode:(SCNNode *)arg1 ;
-(SCNNode *)rootJoint;
-(void)setRootJoint:(SCNNode *)arg1 ;
-()upDownRotation;
-(void)setUpDownRotation:;
-()leftRightRotation;
-(void)setLeftRightRotation:;
-()forwardBackRotation;
-(void)setForwardBackRotation:;
@end
