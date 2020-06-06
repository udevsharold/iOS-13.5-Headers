/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFTilePoolPrivate;

@interface PDFTilePool : NSObject {

	PDFTilePoolPrivate* _private;

}
+(id)sharedPool;
-(id)init;
-(void)dealloc;
-(void)_renderTileForRequest:(id)arg1 ;
-(int)tileSurfaceType;
-(int)tileSurfaceSize;
-(id)_createTileSurfaceForRequest:(id)arg1 ;
-(CGContextRef)_createContextForTileSurface:(id)arg1 ofRequest:(id)arg2 ;
-(void)setTileSurfaceType:(int)arg1 ;
-(void)saveBitmapFiles;
-(void)requestPDFTileSurfaceForTarget:(id)arg1 forPage:(id)arg2 withRenderingProperties:(id)arg3 atZoomFactor:(double)arg4 frame:(CGRect)arg5 transform:(CGAffineTransform)arg6 ;
-(void)releasePDFTileSurface:(id)arg1 ;
-(int)activeTileCount;
@end

