/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer;

@interface CAMZoomDialDotsView : UIView {

	double _dotSpacingAngle;
	CALayer* __dotLayer;

}

@property (nonatomic,readonly) CALayer * _dotLayer;               //@synthesize _dotLayer=__dotLayer - In the implementation block
@property (assign,nonatomic) long long dotCount; 
@property (assign,nonatomic) CGPoint dotCenter; 
@property (assign,nonatomic) double dotSpacingAngle;              //@synthesize dotSpacingAngle=_dotSpacingAngle - In the implementation block
+(Class)layerClass;
-(id)initWithDotImage:(id)arg1 ;
-(void)setDotSpacingAngle:(double)arg1 ;
-(void)setDotCount:(long long)arg1 ;
-(double)dotSpacingAngle;
-(void)setDotCenter:(CGPoint)arg1 ;
-(id)_replicatorLayer;
-(CALayer *)_dotLayer;
-(long long)dotCount;
-(CGPoint)dotCenter;
@end

