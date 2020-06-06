/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/EQKitLayoutContext.h>

@class NSString;

@interface TSWPEquationLayoutContext : NSObject <EQKitLayoutContext> {

	CFStringRef _fontName;
	double _fontSize;
	double _columnWidth;

}

@property (assign,nonatomic) double fontSize;                       //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) double columnWidth;                    //@synthesize columnWidth=_columnWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(void)setColumnWidth:(double)arg1 ;
-(double)columnWidth;
-(double)containerWidth;
-(double)baseFontSize;
-(CFStringRef)baseFontName;
-(id)initWithTextAttributes:(CFDictionaryRef)arg1 columnWidth:(double)arg2 ;
@end

