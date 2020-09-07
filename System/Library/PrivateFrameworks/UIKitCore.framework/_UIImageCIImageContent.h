/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContent.h>

@class CIImage;

@interface _UIImageCIImageContent : _UIImageContent {

	CIImage* _ciImage;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_context;
-(BOOL)canProvideFullResCGImage;
-(id)initWithScale:(double)arg1 ;
-(CGSize)sizeInPixels;
-(void)_prepareforDrawingInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)CIImage;
-(BOOL)isCIImage;
-(id)initWithCIImage:(id)arg1 scale:(double)arg2 ;
@end
