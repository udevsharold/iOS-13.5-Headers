/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@interface QLThumbnailDescriptor : NSObject {

	double _scaleFactor;
	CGSize _size;

}

@property (assign) CGSize size;                     //@synthesize size=_size - In the implementation block
@property (assign) double scaleFactor;              //@synthesize scaleFactor=_scaleFactor - In the implementation block
+(id)descriptorWithSize:(CGSize)arg1 scaleFactor:(double)arg2 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
@end

