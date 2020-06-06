/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@interface SaliencyExtrema : NSObject {

	CGPoint _extrema[4];
	float _extremeValues[4];

}
-(id)init;
-(void)updateExtrema:(float)arg1 x:(int)arg2 y:(int)arg3 ;
-(CGRect)computeRectFromExtremaUsingThreshold:(float)arg1 vImage:(vImage_Buffer*)arg2 ;
@end

