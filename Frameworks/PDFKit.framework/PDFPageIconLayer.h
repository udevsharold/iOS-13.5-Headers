/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class PDFDocument;

@interface PDFPageIconLayer : CALayer {

	PDFDocument* _document;
	CGSize _frameSize;
	int _pageIndex;
	BOOL _needsUpdate;

}
-(id)initWithSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setNeedsUpdate;
-(int)pageIndex;
-(id)document;
-(void)updateAsPageIndex:(int)arg1 forDocument:(id)arg2 ;
@end

