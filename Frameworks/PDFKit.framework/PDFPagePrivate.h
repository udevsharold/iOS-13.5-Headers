/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFDocument, PDFView, NSString, UIImage, NSAttributedString, NSMutableArray, NSLock, PDFAKPageAdaptor, NSMutableSet, NSMutableDictionary;

@interface PDFPagePrivate : NSObject {

	PDFDocument* document;
	CGPDFPageRef page;
	CGColorRef pageBackgroundColorHint;
	PDFView* view;
	NSString* label;
	UIImage* image;
	CGImageRef cgImage;
	CGImageSourceRef cgImageSource;
	unsigned cgImageOrientation;
	os_unfair_lock_s layoutLock;
	CGPDFLayoutRef layout;
	os_unfair_lock_s dataDetectorsLock;
	BOOL ranDataDetectors;
	NSString* text;
	NSAttributedString* attributedString;
	BOOL displaysAnnotations;
	BOOL displaysMarkups;
	NSMutableArray* annotations;
	NSLock* lock_getAnnotations;
	NSLock* lock_accessAnnotations;
	NSMutableArray* scannedAnnotations;
	long long rotation;
	CGRect mediaBox;
	CGRect cropBox;
	CGRect bleedBox;
	CGRect trimBox;
	CGRect artBox;
	BOOL bookmarked;
	BOOL isFullyConstructed;
	BOOL colorWidgetBackgrounds;
	PDFAKPageAdaptor* akPageAdaptor;
	BOOL akDidSetupRealPageModelController;
	NSMutableArray* annotationChanges;
	NSMutableSet* changedAnnotations;
	NSMutableDictionary* widgetAnnotationLookup;
	NSMutableArray* scannerResults;
	BOOL didChangeBounds;

}
@end

