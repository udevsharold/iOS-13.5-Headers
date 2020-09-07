/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARSkeleton.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AR2DSkeletonDetectionResult;

@interface ARSkeleton2D : ARSkeleton <NSSecureCoding> {

	AR2DSkeletonDetectionResult* _skeleton;

}

@property (nonatomic,readonly) const * jointLandmarks; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)definition;
-(unsigned long long)jointCount;
-(BOOL)isJointTracked:(long long)arg1 ;
-(const *)jointLandmarks;
-(id)initWithDetectedSkeleton:(id)arg1 ;
-(2)landmarkForJointNamed:(id)arg1 ;
@end
