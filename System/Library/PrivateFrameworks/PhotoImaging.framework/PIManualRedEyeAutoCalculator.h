/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:43 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIRedEyeAutoCalculator.h>

@interface PIManualRedEyeAutoCalculator : PIRedEyeAutoCalculator {

	CGPoint _location;
	double _touchDiameter;

}
-(id)_options;
-(id)initWithComposition:(id)arg1 location:(CGPoint)arg2 touchDiameter:(double)arg3 ;
-(void)_configureRequest:(id)arg1 ;
@end

