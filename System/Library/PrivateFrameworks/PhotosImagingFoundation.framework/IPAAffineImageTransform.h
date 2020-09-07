/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAImageTransform.h>

@interface IPAAffineImageTransform : IPAImageTransform {

	BOOL _canAlignToPixelsExactly;
	Matrix4d _matrix;

}
-(id)description;
-(Matrix4d)matrix;
-(id)inverseTransform;
-(id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 matrix:(const Matrix4d*)arg3 canAlignToPixelsExactly:(BOOL)arg4 ;
-(Vector2d)mapVector:(Vector2d)arg1 ;
-(BOOL)canAlignToPixelsExactly;
@end
