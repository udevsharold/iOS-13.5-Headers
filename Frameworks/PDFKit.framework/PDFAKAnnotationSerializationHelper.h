/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@interface PDFAKAnnotationSerializationHelper : NSObject
+(void)addAKAnnotation:(id)arg1 toAnnotationDictionary:(CFDictionaryRef)arg2 ;
+(id)akAnnotationFromCGPDFAnnotation:(CGPDFAnnotationRef)arg1 andDictionary:(CGPDFDictionaryRef)arg2 ;
+(BOOL)_annotationClassHasSeniority:(id)arg1 ;
+(BOOL)_shouldUseAKAnnotation:(id)arg1 toRepresentCGPDFDictionary:(CGPDFDictionaryRef)arg2 ;
@end

