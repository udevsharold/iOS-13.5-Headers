/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBAppPlatterDragSourceViewProviding <NSObject>
@property (assign,getter=isDragging,nonatomic) BOOL dragging; 
@required
-(BOOL)isDragging;
-(id)sourceView;
-(void)setDragging:(BOOL)arg1;
-(id)initialCornerRadiusConfiguration;
-(SBDragPreviewShadowParameters*)initialDiffuseShadowParameters;
-(SBDragPreviewShadowParameters*)initialRimShadowParameters;
-(id)initialDiffuseShadowFilters;
-(id)initialRimShadowFilters;
-(id)containerViewForBlurContentView;

@end

