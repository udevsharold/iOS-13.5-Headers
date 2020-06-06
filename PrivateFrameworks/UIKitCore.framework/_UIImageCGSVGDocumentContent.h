/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContent.h>

@interface _UIImageCGSVGDocumentContent : _UIImageContent {

	CGSVGDocumentRef _svgDocumentRef;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)canProvideFullResCGImage;
-(id)initWithScale:(double)arg1 ;
-(BOOL)isCGSVGDocument;
-(CGSVGDocumentRef)CGSVGDocument;
-(CGSize)sizeInPixels;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)initWithCGSVGDocument:(CGSVGDocumentRef)arg1 scale:(double)arg2 ;
@end

