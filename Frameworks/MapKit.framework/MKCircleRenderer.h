/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKOverlayPathRenderer.h>

@class VKVectorOverlayCircle, MKCircle;

@interface MKCircleRenderer : MKOverlayPathRenderer {

	VKVectorOverlayCircle* _vectorData;

}

@property (nonatomic,readonly) MKCircle * circle; 
+(Class)_mapkitLeafClass;
-(void)setLineWidth:(double)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
-(id)initWithCircle:(id)arg1 ;
-(MKCircle *)circle;
-(void)createPath;
-(void)_updateRenderColors;
-(BOOL)overlayCanProvideVectorData:(id)arg1 ;
-(id)vectorDataForOverlay:(id)arg1 ;
-(BOOL)_canProvideVectorGeometry;
-(id)_vectorData;
@end

