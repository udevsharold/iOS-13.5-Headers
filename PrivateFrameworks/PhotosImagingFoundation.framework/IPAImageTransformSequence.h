/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/IPAImageTransform.h>

@class NSArray;

@interface IPAImageTransformSequence : NSObject <IPAImageTransform> {

	NSArray* _transforms;

}
-(id)description;
-(id)inverseTransform;
-(BOOL)canAlignToPixelsExactly;
-(id)intrinsicGeometry;
-(id)inputGeometry;
-(CGPoint)mapPoint:(CGPoint)arg1 ;
-(id)initWithTransforms:(id)arg1 ;
@end

