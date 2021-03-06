/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPanGestureRecognizer.h>

@protocol ICDocCamImageQuadEditPanGestureRecognizerDelegate;
@interface ICDocCamImageQuadEditPanGestureRecognizer : UIPanGestureRecognizer {

	id<ICDocCamImageQuadEditPanGestureRecognizerDelegate> _quadEditorDelegate;

}

@property (assign,nonatomic,__weak) id<ICDocCamImageQuadEditPanGestureRecognizerDelegate> quadEditorDelegate;              //@synthesize quadEditorDelegate=_quadEditorDelegate - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id<ICDocCamImageQuadEditPanGestureRecognizerDelegate>)quadEditorDelegate;
-(void)setQuadEditorDelegate:(id<ICDocCamImageQuadEditPanGestureRecognizerDelegate>)arg1 ;
@end

