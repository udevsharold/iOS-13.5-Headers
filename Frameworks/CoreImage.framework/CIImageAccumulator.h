/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIImageAccumulator : NSObject {

	void* _state;

}

@property (readonly) CGRect extent; 
@property (readonly) int format; 
+(id)imageAccumulatorWithExtent:(CGRect)arg1 format:(int)arg2 options:(id)arg3 ;
+(id)imageAccumulatorWithExtent:(CGRect)arg1 format:(int)arg2 ;
+(id)imageAccumulatorWithExtent:(CGRect)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)clear;
-(CGRect)extent;
-(int)format;
-(id)image;
-(void)setImage:(id)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(id)initWithExtent:(CGRect)arg1 format:(int)arg2 options:(id)arg3 ;
-(id)initWithExtent:(CGRect)arg1 format:(int)arg2 ;
-(id)initWithExtent:(CGRect)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 ;
-(void)setImage:(id)arg1 dirtyRect:(CGRect)arg2 ;
-(void)commitUpdates:(id)arg1 ;
@end

