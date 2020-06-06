/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/_NUImageRenderResult.h>
#import <libobjc.A.dylib/NUSurfaceRenderResult.h>

@protocol NUSurfaceImage;
@class NSString, NURegion, NUImageGeometry;

@interface _NUSurfaceRenderResult : _NUImageRenderResult <NUSurfaceRenderResult> {

	id<NUSurfaceImage> _image;

}

@property (retain) id<NUSurfaceImage> image;                         //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) NURegion * region; 
@property (readonly) NUImageGeometry * geometry; 
-(NSString *)debugDescription;
-(id<NUSurfaceImage>)image;
-(void)setImage:(id<NUSurfaceImage>)arg1 ;
@end

