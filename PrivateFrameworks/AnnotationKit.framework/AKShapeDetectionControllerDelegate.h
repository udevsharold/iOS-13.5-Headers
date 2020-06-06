/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKShapeDetectionControllerDelegate <NSObject>
@optional
-(void)shapeDetectionControllerWillPickCandidate:(id)arg1 isInk:(BOOL)arg2;
-(CGRect*)shapeDetectionControllerPositioningRectForCandidatePicker:(id)arg1;

@required
-(BOOL)isWaitingToCoalesceStrokes;
-(void)beginIgnoringAnnotationSelectionObservation:(id)arg1;
-(void)endIgnoringAnnotationSelectionObservation:(id)arg1;
-(BOOL)isIgnoringAnnotationAndSelectionKVO:(id)arg1;
-(BOOL)shapeDetectionController:(id)arg1 shouldSelectCandidateAnnotation:(id)arg2;
-(id)overlayView:(id)arg1;

@end

