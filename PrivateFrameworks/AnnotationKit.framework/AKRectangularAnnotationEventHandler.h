/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotationEventHandler.h>

@interface AKRectangularAnnotationEventHandler : AKAnnotationEventHandler {

	CGPoint _lastMungedPositionInModel;

}

@property (assign) CGPoint lastMungedPositionInModel;              //@synthesize lastMungedPositionInModel=_lastMungedPositionInModel - In the implementation block
-(void)getInitialDraggedPoint:(CGPoint*)arg1 otherPoint:(CGPoint*)arg2 center:(CGPoint*)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5 ;
-(void)updateModelWithCurrentPoint:(CGPoint)arg1 ;
-(void)setupDraggingConstraints;
-(void)setLastMungedPositionInModel:(CGPoint)arg1 ;
-(void)_updateModelFlippednessWithCurrentPoint:(CGPoint)arg1 ;
-(CGRect)_rectForModifiedRotatedRect:(CGRect)arg1 withOriginal:(CGRect)arg2 andRotation:(double)arg3 ;
-(CGPoint)lastMungedPositionInModel;
@end

