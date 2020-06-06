/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDSwatchRenderingResult : NSObject {

	CGImageRef foreground;
	CGImageRef background;

}

@property (nonatomic,readonly) CGImageRef foreground; 
@property (nonatomic,readonly) CGImageRef background; 
+(id)renderingResultWithForeground:(CGImageRef)arg1 background:(CGImageRef)arg2 ;
-(void)dealloc;
-(CGImageRef)background;
-(CGImageRef)foreground;
@end

