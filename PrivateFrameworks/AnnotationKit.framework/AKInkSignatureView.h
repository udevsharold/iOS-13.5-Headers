/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKCanvasViewDelegate.h>

@class UIColor, PKCanvasView, PKInk, PKDrawing, NSString;

@interface AKInkSignatureView : UIView <PKCanvasViewDelegate> {

	BOOL _hasStrokes;
	UIColor* _strokeColor;
	PKCanvasView* _canvasView;
	PKInk* _ink;
	PKDrawing* _latestDrawing;

}

@property (retain) PKCanvasView * canvasView;                       //@synthesize canvasView=_canvasView - In the implementation block
@property (copy) PKInk * ink;                                       //@synthesize ink=_ink - In the implementation block
@property (retain) PKDrawing * latestDrawing;                       //@synthesize latestDrawing=_latestDrawing - In the implementation block
@property (assign) BOOL hasStrokes;                                 //@synthesize hasStrokes=_hasStrokes - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;                 //@synthesize strokeColor=_strokeColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clear;
-(id)initWithCoder:(id)arg1 ;
-(void)teardown;
-(void)_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setCanvasView:(PKCanvasView *)arg1 ;
-(PKCanvasView *)canvasView;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(PKInk *)ink;
-(void)setInk:(PKInk *)arg1 ;
-(void)_updateInk;
-(BOOL)hasStrokes;
-(CGPathRef)copyPotracedPathAndReturnDrawing:(id*)arg1 ;
-(void)canvasViewDrawingDidChange:(id)arg1 ;
-(void)setLatestDrawing:(PKDrawing *)arg1 ;
-(PKDrawing *)latestDrawing;
-(void)setHasStrokes:(BOOL)arg1 ;
@end

