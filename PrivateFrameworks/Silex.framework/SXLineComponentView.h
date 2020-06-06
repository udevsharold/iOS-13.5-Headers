/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>

@class CALayer, SXSolidBorderView;

@interface SXLineComponentView : SXComponentView {

	CALayer* _strokeLayer;
	SXSolidBorderView* _borderView;

}

@property (nonatomic,retain) CALayer * strokeLayer;                       //@synthesize strokeLayer=_strokeLayer - In the implementation block
@property (nonatomic,retain) SXSolidBorderView * borderView;              //@synthesize borderView=_borderView - In the implementation block
-(void)discardContents;
-(void)setBorderView:(SXSolidBorderView *)arg1 ;
-(SXSolidBorderView *)borderView;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(void)renderContents;
-(void)loadComponent:(id)arg1 ;
-(BOOL)userInteractable;
-(void)setStrokeLayer:(CALayer *)arg1 ;
-(CALayer *)strokeLayer;
@end
