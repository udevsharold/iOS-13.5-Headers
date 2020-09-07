/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFActionURLPrivateVars, NSURL;

@interface PDFActionURL : PDFAction <NSCopying> {

	PDFActionURLPrivateVars* _private2;

}

@property (nonatomic,copy) NSURL * URL; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)commonInit;
-(id)toolTip;
-(const CFDictionaryRef)createDictionaryRef;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
@end
