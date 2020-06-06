/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUImage.h>

@interface TSUCGImage : TSUImage {

	CGImageRef mCGImage;
	long long mOrientation;
	double mScale;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(double)scale;
-(long long)imageOrientation;
-(CGImageRef)CGImage;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 ;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
@end

