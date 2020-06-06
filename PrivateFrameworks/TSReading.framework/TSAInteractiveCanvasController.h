/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSWPInteractiveCanvasController.h>

@class TSDDrawableInfo, TSAAnnotationController;

@interface TSAInteractiveCanvasController : TSWPInteractiveCanvasController {

	TSDDrawableInfo* mInfoBeingDragInserted;
	BOOL _supportsAnnotations;
	TSAAnnotationController* _annotationController;

}

@property (nonatomic,retain) TSDDrawableInfo * infoBeingDragInserted; 
@property (nonatomic,readonly) BOOL wantsCanvasReferenceController; 
@property (nonatomic,readonly) BOOL supportsAnnotations;                                    //@synthesize supportsAnnotations=_supportsAnnotations - In the implementation block
@property (nonatomic,readonly) TSAAnnotationController * annotationController;              //@synthesize annotationController=_annotationController - In the implementation block
-(void)dealloc;
-(void)teardown;
-(void)selectAll:(id)arg1 ;
-(TSAAnnotationController *)annotationController;
-(void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(id)additionalVisibleInfosForCanvas:(id)arg1 ;
-(BOOL)wantsHyperlinkGestureRecognizer;
-(TSDDrawableInfo *)infoBeingDragInserted;
-(void)loadDocument;
-(void)unloadDocument;
-(void)handleHyperlinkGesture:(id)arg1 ;
-(void)willSetDocumentToMode:(long long)arg1 fromMode:(long long)arg2 animated:(BOOL)arg3 ;
-(void)didSetDocumentToMode:(long long)arg1 fromMode:(long long)arg2 animated:(BOOL)arg3 ;
-(BOOL)hasEmptyWPSelection;
-(BOOL)requiresSimilarInfos;
-(BOOL)hasInspectableSelection;
-(id)p_activeTextRep;
-(BOOL)wantsCanvasReferenceController;
-(void)setInfoBeingDragInserted:(TSDDrawableInfo *)arg1 ;
-(BOOL)supportsAnnotations;
@end

