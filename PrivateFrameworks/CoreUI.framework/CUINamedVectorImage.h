/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@interface CUINamedVectorImage : CUINamedLookup

@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGPDFDocumentRef pdfDocument; 
-(double)scale;
-(CGImageRef)rasterizeImageUsingScaleFactor:(double)arg1 forTargetSize:(CGSize)arg2 ;
-(CGPDFDocumentRef)pdfDocument;
@end

