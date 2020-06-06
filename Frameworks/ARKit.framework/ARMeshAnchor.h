/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARAnchor.h>

@class ARMeshGeometry;

@interface ARMeshAnchor : ARAnchor {

	ARMeshGeometry* _geometry;
	double _timestamp;
	double _maxExtentError;
	 _extent;

}

@property (nonatomic,readonly)  extent;                                //@synthesize extent=_extent - In the implementation block
@property (nonatomic,readonly) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double maxExtentError;                    //@synthesize maxExtentError=_maxExtentError - In the implementation block
@property (nonatomic,readonly) ARMeshGeometry * geometry;              //@synthesize geometry=_geometry - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAnchor:(id)arg1 ;
-(double)timestamp;
-()extent;
-(ARMeshGeometry *)geometry;
-(double)maxExtentError;
-(id)initWithGeometry:(id)arg1 atTimestamp:(double)arg2 identifier:(id)arg3 transform:(SCD_Struct_AR1)arg4 voxelSize:(double)arg5 ;
-(void)setMaxExtentError:(double)arg1 ;
@end

