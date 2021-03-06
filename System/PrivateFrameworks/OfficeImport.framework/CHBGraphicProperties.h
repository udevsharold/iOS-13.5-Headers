/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHBGraphicProperties : NSObject
+(id)oadStrokeFrom:(const XlChartLineStyle*)arg1 ;
+(id)oadGraphicPropertiesFromState:(id)arg1 xlLineStyle:(const XlChartLineStyle*)arg2 xlFillStyle:(const XlChartFillStyle*)arg3 ;
+(id)oadGraphicPropertiesFromShapePropsStream:(const char*)arg1 size:(unsigned)arg2 ;
+(id)oadGraphicPropertiesFromXlChartSeriesFormat:(const XlChartSeriesFormat*)arg1 state:(id)arg2 ;
+(id)mapFillStyle:(const XlChartFillStyle*)arg1 xlPictureFormat:(const XlChartPicF*)arg2 state:(id)arg3 ;
+(float)widthFromLineWeightEnum:(int)arg1 ;
+(id)mapPresetDashFromPattern:(int)arg1 ;
+(id)mapFillStyleForMarker:(const XlChartMarkerStyle*)arg1 complex:(BOOL)arg2 state:(id)arg3 ;
+(id)oadGraphicPropertiesFromXlLeaderLineStyleInPlot:(const XlChartPlot*)arg1 state:(id)arg2 ;
+(char)oaPresetDashTypeFromLinePatternEnum:(int)arg1 ;
+(id)mapAssociatedEscherObjectstate:(id)arg1 ;
+(int)presetLinePatternEnumFromDash:(id)arg1 ;
+(int)lineWeightEnumFromWidth:(float)arg1 ;
+(id)oadGraphicPropertiesFromXlChartTextFrame:(XlChartTextFrame*)arg1 state:(id)arg2 ;
+(id)oadGraphicPropertiesFromXlMarkerStyle:(const XlChartMarkerStyle*)arg1 complex:(BOOL)arg2 state:(id)arg3 ;
+(id)oadGraphicPropertiesFromXlChartFrameType:(XlChartFrameType*)arg1 state:(id)arg2 ;
@end

