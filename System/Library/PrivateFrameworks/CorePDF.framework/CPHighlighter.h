/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class CPZone, CPTextLine;

@interface CPHighlighter : NSObject {

	CPZone* boundingZone;
	CPTextLine* textLine;
	CGColorRef color;
	CPPDFStyle* style;
	CPPDFStyle* highlightedStyle;

}

@property (nonatomic,readonly) CGColorRef color; 
@property (assign,nonatomic) CPPDFStyle* style; 
@property (assign,nonatomic) CPPDFStyle* highlightedStyle; 
+(BOOL)reconstructHighlightFor:(id)arg1 ;
-(CPPDFStyle*)style;
-(void)setStyle:(CPPDFStyle*)arg1 ;
-(CGColorRef)color;
-(void)highlight;
-(CPPDFStyle*)highlightedStyle;
-(void)setHighlightedStyle:(CPPDFStyle*)arg1 ;
-(id)initWithTextLine:(id)arg1 inZone:(id)arg2 ofColor:(CGColorRef)arg3 ;
@end
