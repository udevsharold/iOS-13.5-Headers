/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKRulerDelegate
@optional
-(id)canvasView;

@required
-(id)topView;
-(double)drawingScale;
-(id)drawingGestureRecognizer;
-(CGAffineTransform*)strokeTransform;
-(BOOL)isDrawing;
-(id)drawingController;
-(void)setRulerEnabled:(BOOL)arg1;

@end

