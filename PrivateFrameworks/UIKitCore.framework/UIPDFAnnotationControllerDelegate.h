/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIPDFAnnotationControllerDelegate
@optional
-(BOOL)willTrackAnnotationAtPoint:(CGPoint)arg1 controller:(id)arg2;
-(void)annotation:(id)arg1 didEndTrackingAtPoint:(CGPoint)arg2 controller:(id)arg3;
-(void)annotation:(id)arg1 wasTouchedAtPoint:(CGPoint)arg2 controller:(id)arg3;
-(void)annotation:(id)arg1 isBeingPressedAtPoint:(CGPoint)arg2 controller:(id)arg3;
-(void)annotationWasRemoved:(id)arg1 controller:(id)arg2;
-(CGImageRef)newHighlightMaskImage:(CGRect)arg1 controller:(id)arg2;
-(CGImageRef)underlineImage:(CGRect)arg1 controller:(id)arg2;
-(CGSize*)marginNoteImageSize:(id)arg1;
-(id)marginNoteImage:(id)arg1 controller:(id)arg2;

@end

