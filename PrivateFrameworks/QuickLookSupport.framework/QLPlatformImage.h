/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLookSupport/QuickLookSupport-Structs.h>
@class UIImage;

@interface QLPlatformImage : NSObject {

	CGImageRef _cgImage;
	unsigned _orientation;
	double _scale;
	/*^block*/id _cleanupDataBlock;
	CGSize _size;

}

@property (assign) CGSize size;                              //@synthesize size=_size - In the implementation block
@property (readonly) UIImage * UIImage; 
@property (assign) CGImageRef CGImage; 
@property (nonatomic,copy) id cleanupDataBlock;              //@synthesize cleanupDataBlock=_cleanupDataBlock - In the implementation block
@property (assign) unsigned orientation;                     //@synthesize orientation=_orientation - In the implementation block
@property (assign) double scale;                             //@synthesize scale=_scale - In the implementation block
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(unsigned)arg3 ;
+(id)imageWithUIImage:(id)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(double)scale;
-(unsigned)orientation;
-(void)setOrientation:(unsigned)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(CGImageRef)CGImage;
-(void)setScale:(double)arg1 ;
-(UIImage *)UIImage;
-(void)setCGImage:(CGImageRef)arg1 ;
-(id)cleanupDataBlock;
-(void)setCleanupDataBlock:(id)arg1 ;
@end

