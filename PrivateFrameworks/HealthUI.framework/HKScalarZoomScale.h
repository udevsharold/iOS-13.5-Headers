/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKZoomScale.h>

@class NSString;

@interface HKScalarZoomScale : NSObject <HKZoomScale>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)zoomForZoomScale:(double)arg1 ;
-(id)unitZoomScaleValueRange;
-(double)zoomScaleForRange:(HKRange)arg1 ;
-(void)setUnitZoomScaleValueRangeForTimeInterval:(double)arg1 ;
@end

