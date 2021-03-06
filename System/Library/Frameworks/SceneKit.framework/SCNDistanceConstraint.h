/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNDistanceConstraint : SCNConstraint {

	SCNNode* _target;
	float _minimumDistance;
	float _maximumDistance;
	BOOL _keepTargetDirection;
	SCNVector3 _targetDirection;
	float _maximumDirectionAngle;

}

@property (nonatomic,retain) SCNNode * target; 
@property (assign,nonatomic) double minimumDistance; 
@property (assign,nonatomic) double maximumDistance; 
+(BOOL)supportsSecureCoding;
+(id)distanceConstraint;
+(id)distanceConstraintWithTarget:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTarget:(SCNNode *)arg1 ;
-(SCNNode *)target;
-(SCNVector3)targetDirection;
-(void)setTargetDirection:(SCNVector3)arg1 ;
-(void)setMinimumDistance:(double)arg1 ;
-(double)minimumDistance;
-(void)setMaximumDistance:(double)arg1 ;
-(double)maximumDistance;
-(void)_customEncodingOfSCNDistanceConstraint:(id)arg1 ;
-(void)_customDecodingOfSCNDistanceConstraint:(id)arg1 ;
-(BOOL)keepTargetDirection;
-(void)setKeepTargetDirection:(BOOL)arg1 ;
@end

