/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface BWInferenceSchedulerResourceCoordinator : NSObject {

	NSMutableDictionary* _requestedPoolSizeByFormat;
	NSMutableDictionary* _pixelBufferPoolByFormat;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(int)requestPixelBufferPoolForRequirement:(id)arg1 size:(unsigned long long)arg2 ;
-(void)preparePixelBufferPools;
-(id)pixelBufferPoolForFormat:(id)arg1 ;
-(int)requestPixelBufferPoolForFormat:(id)arg1 size:(unsigned long long)arg2 ;
-(id)formatsWithRequestedPoolsRemainingAfterSubtractingFormats:(id)arg1 ;
@end
