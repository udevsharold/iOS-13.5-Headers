/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWObjectDetector <NSObject>
@property (readonly) float secondsSinceLastObjectDetected; 
@required
-(int)getObjectsRects:(CGRect*)arg1 maxCount:(int)arg2 forPTS:(SCD_Struct_BW2)arg3;
-(float)secondsSinceLastObjectDetected;

@end
