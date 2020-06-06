/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PDFAKPageAdaptorPrivate, PDFPage, AKPageModelController;

@interface PDFAKPageAdaptor : NSObject {

	PDFAKPageAdaptorPrivate* _private;

}

@property (nonatomic,__weak,readonly) PDFPage * pdfPage; 
@property (nonatomic,readonly) AKPageModelController * akPageModelController; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)teardown;
-(void)_teardown;
-(AKPageModelController *)akPageModelController;
-(void)initializeExifAndScaleOnAnnotation:(id)arg1 ;
-(PDFPage *)pdfPage;
-(id)initWithPDFPage:(id)arg1 pageModelController:(id)arg2 ;
-(void)_startObservingPageModel;
-(void)_stopObservingPageModel;
-(void)_annotationsWereRemoved:(id)arg1 ;
-(void)_annotationsWereAdded:(id)arg1 ;
-(id)initWithPDFPage:(id)arg1 ;
-(void)pdfPage:(id)arg1 didAddAnnotation:(id)arg2 ;
-(void)pdfPage:(id)arg1 didRemoveAnnotation:(id)arg2 ;
-(void)pdfPageWasRotated:(id)arg1 ;
@end

