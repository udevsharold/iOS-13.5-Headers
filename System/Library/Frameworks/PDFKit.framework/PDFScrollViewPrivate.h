/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFView, PDFDocument, PDFDocumentView, PDFTimer, NSDate;

@interface PDFScrollViewPrivate : NSObject {

	PDFView* pdfView;
	PDFDocument* document;
	PDFDocumentView* documentView;
	double oldMagnification;
	PDFTimer* boundsUpdateTimer;
	CGRect oldBounds;
	BOOL isZooming;
	BOOL scheduledPageSync;
	NSDate* pageSyncDate;
	BOOL forcesTopAlignment;

}
@end
