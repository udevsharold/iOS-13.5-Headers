/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <QuartzCore/CALayer.h>
#import <PDFKit/PDFTilePoolDelegate.h>

@class PDFPageLayer, PDFTileSurface;

@interface PDFPageLayerTile : CALayer <PDFTilePoolDelegate> {

	PDFPageLayer* pageLayer;
	CGAffineTransform renderingTransform;
	double tileContentsScale;
	PDFTileSurface* pageSurface;
	int generationID;
	AB isWorking;
	CGRect originalFrame;

}
-(void)dealloc;
-(void)hasStartedWork;
-(void)recievePDFTileSurface:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 forPageLayer:(id)arg2 withRenderingTransform:(CGAffineTransform)arg3 tileContentsScale:(double)arg4 generationID:(int)arg5 ;
-(BOOL)isWorking;
@end

