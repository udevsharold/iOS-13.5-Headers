/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICDocCamImageQuadEditOverlayDelegate <NSObject>
@required
-(id)quadForOverlay:(id)arg1;
-(CGRect*)unitImageRectForOverlayRect:(CGRect)arg1;
-(CGRect*)imageFrameInOverlayCoordinates;
-(void)selectedKnobDidPanToRect:(CGRect)arg1;
-(void)selectedKnobDidChange:(id)arg1;
-(double)currentZoomFactorForOverlay;
-(void)overlayDidLayout:(id)arg1;

@end
