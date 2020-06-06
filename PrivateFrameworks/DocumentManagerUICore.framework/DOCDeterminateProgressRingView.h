/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer;

@interface DOCDeterminateProgressRingView : UIView {

	CALayer* _squareLayer;
	BOOL _canShowStopButton;
	double _progress;

}

@property (assign,nonatomic) double progress;                     //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL canShowStopButton;              //@synthesize canShowStopButton=_canShowStopButton - In the implementation block
+(Class)layerClass;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTintColor:(id)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)_updateShapePath;
-(void)setCanShowStopButton:(BOOL)arg1 ;
-(BOOL)canShowStopButton;
@end

